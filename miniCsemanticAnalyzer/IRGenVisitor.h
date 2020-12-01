#include "llvm/IR/BasicBlock.h"
#include <llvm/IR/CallingConv.h>
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include <llvm/Support/raw_ostream.h>


#include <iostream>
#include <stdlib.h> 
#include <limits>

using namespace llvm;


static llvm::LLVMContext TheContext;
static llvm::Module *TheModule = new Module("miniC", TheContext);
static llvm::IRBuilder<> Builder(TheContext);


class IRGenVisitor : public ASTvisitor
{   

    SymTab *rootSymbolTable;

    SymTab *currentSymTab;

    std::string currentDataType;

    bool signedInteger;

    llvm::Value* currentValue;

    unsigned long int currentIntVal;

    llvm::AllocaInst *currentAlloca;

    BasicBlock *blkAfterLoop;

    int functionNum, ifNum, elseNum, forNum, whileNum;

    bool returnPresent, breakPresent;
    bool breakPresentInAnIf, breakPresentInAnElse;

    public:

    IRGenVisitor() 
    {     
        functionNum = 1;
        ifNum = 1;
        elseNum = 1;
        forNum = 1;
        whileNum = 1;

        currentDataType = "";
        signedInteger = false;
        currentValue = nullptr;
        currentAlloca = nullptr;
        blkAfterLoop = nullptr;
        currentIntVal = 0;

        returnPresent = false;
        breakPresent = false;
        breakPresentInAnIf = false;
        breakPresentInAnElse = false;
    }

    IRGenVisitor(SymTab *symTab) : rootSymbolTable(symTab)
    {
        functionNum = 1;
        ifNum = 1;
        elseNum = 1;
        forNum = 1;
        whileNum = 1;

        currentDataType = "";
        signedInteger = false;
        currentValue = nullptr;
        currentAlloca = nullptr;
        blkAfterLoop = nullptr;
        currentIntVal = 0;

        returnPresent = false;
        breakPresent = false;
        breakPresentInAnIf = false;
        breakPresentInAnElse = false;
    }


    llvm::Type* getLLVMType(std::string type)
    {
        // llvm::Type *llvmTypeToRet;

        if (type == "int" || type == "uint") 
        {
            // llvmTypeToRet = Type::getInt32Ty(TheContext);

            return(Type::getInt32Ty(TheContext));
        } 
        else if (type == "long" || type == "ulong")
        {
            // llvmTypeToRet = Type::getInt64Ty(TheContext);

            return(Type::getInt64Ty(TheContext));
        }
        else if (type == "bool") 
        {
            // llvmTypeToRet = Type::getInt1Ty(TheContext);

            return(Type::getInt1Ty(TheContext));
        }
        else if (type == "char") 
        {
            // llvmTypeToRet = Type::getInt8Ty(TheContext);

            return(Type::getInt8Ty(TheContext));
        }
    }



    AllocaInst *CreateEntryBlockAlloca(Function *TheFunction, std::string varName, llvm::Type *varDataType, Value *arraySize = ConstantInt::get(TheContext, APInt(32, 0, false)))
    {
        IRBuilder<> TmpB(&TheFunction->getEntryBlock(), TheFunction->getEntryBlock().begin());
        
        AllocaInst *alloca_instruction = TmpB.CreateAlloca( varDataType, arraySize, varName);
 
        return alloca_instruction;
    }


    /*********************************** GROUP 1 ***************************************/


    virtual void visit(ASTProgram& node)
    {
        currentSymTab = rootSymbolTable;

        std::vector<ASTnode*> declarations = node.getDeclarations();

        if(declarations.size() != 0)
        {
            for(ASTnode* decl : declarations)
            {
                decl->accept(*this);
            }
        }

        std::string Str;
        raw_string_ostream OS(Str);
        OS << *TheModule;
        std::cout << Str;
        OS.flush();
        std::ofstream out("output.bc");
        out << Str;
        out.close();
    }



    virtual void visit(ASTDeclaration& node) {}




    virtual void visit(ASTVariableDecl& node)
    {
        node.getDataType()->accept(*this);

        std::vector<ASTSingleVarDecl*> variables = node.getVariables();

        // This vector cannot be empty, at least one variable will be present --> already checked by the parser

        for(ASTSingleVarDecl* varDecl : variables)
        {
            varDecl->accept(*this);
        }
    }



    virtual void visit(ASTSingleVarDecl& node) {}



    virtual void visit(ASTSimpleVariableDecl& node)
    {
        std::string varName = node.getVariableName();
        // std::cout << varName << "\n";

        llvm::Function *TheFunction = Builder.GetInsertBlock()->getParent();

        llvm::Value *initval = nullptr;
        llvm::AllocaInst *Alloca = nullptr;

        std::string varDataType = currentSymTab->getIdentifierDataType(varName);

        if (varDataType == "int")
        {
            initval = ConstantInt::get(TheContext, APInt(32, 0, true));
            Alloca = CreateEntryBlockAlloca(TheFunction, varName, getLLVMType("int"));
        }
        else if (varDataType == "uint")
        {
            initval = ConstantInt::get(TheContext, APInt(32, 0, false));
            Alloca = CreateEntryBlockAlloca(TheFunction, varName, getLLVMType("uint"));
        }
        else if (varDataType == "long")
        {
            initval = ConstantInt::get(TheContext, APInt(64, 0, true));
            Alloca = CreateEntryBlockAlloca(TheFunction, varName, getLLVMType("long"));
        }
        else if (varDataType == "ulong")
        {
            initval = ConstantInt::get(TheContext, APInt(64, 0, false));
            Alloca = CreateEntryBlockAlloca(TheFunction, varName, getLLVMType("ulong"));
        }
        else if (varDataType == "bool")
        {
            initval = ConstantInt::get(TheContext, APInt(1, 0, false));     // default value false
            Alloca = CreateEntryBlockAlloca(TheFunction, varName, getLLVMType("bool"));
        }
        else if (varDataType == "char")
        {
            initval = ConstantInt::get(TheContext, APInt(8, 0, false));
            Alloca = CreateEntryBlockAlloca(TheFunction, varName, getLLVMType("char"));
        }

        Builder.CreateStore(initval, Alloca);

        currentSymTab->setVarStackMemory( varName, Alloca );

    }



    virtual void visit(AST1DArrayDecl& node)
    {
        std::string varName = node.getVariableName();
        // std::cout << varName << "\n";
        
        int dim = node.getDim();
        // std::cout << dim << "\n";

        std::string varDataType = currentSymTab->getIdentifierDataType(varName);

        ArrayType *arrType = ArrayType::get(getLLVMType(varDataType), dim);

        // GlobalVariable *gv = new GlobalVariable(*(TheModule), arrType, false, GlobalValue::ExternalLinkage, nullptr, varName);
        // gv->setInitializer(ConstantAggregateZero::get(arrType));

        llvm::AllocaInst *Alloca = nullptr;

        llvm::Function *TheFunction = Builder.GetInsertBlock()->getParent();

        Value *dimension = ConstantInt::get(TheContext, APInt(32, static_cast<uint64_t>(dim), false));

        Alloca = CreateEntryBlockAlloca(TheFunction, varName, arrType, dimension);
        
        auto zero = llvm::ConstantInt::get(TheContext, llvm::APInt(64, 0, true));

        for(int i = 0; i < dim; ++i)
        {
            std::vector<Value*> indices;
            indices.push_back(Builder.getInt32(0));
            
            auto index = llvm::ConstantInt::get(TheContext, llvm::APInt(32, i, true));
            indices.push_back(index);
            
            auto ptr = Builder.CreateGEP(Alloca, indices, "");
            Builder.CreateStore(zero, ptr); 
        }

        currentSymTab->setVarStackMemory( varName, Alloca );
    }



    virtual void visit(AST2DArrayDecl& node)
    {
        std::string varName = node.getVariableName();
        // std::cout << varName << "\n";

        std::vector<int> dims = node.getDims();     // Cannot be an empty vector, already checked by the parser
        // std::cout << dims[0] << dims[1] << "\n";

    }



    virtual void visit(ASTDataType& node)
    {
        std::string dataType = node.getDataTypeName();
        
        // std::cout << dataType << "\n";
        
    }



    virtual void visit(ASTFunctionDecl& node)
    {
        std::vector<SymTab*> children = rootSymbolTable->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if ( child->getName() == ("function" + std::to_string(functionNum) ) )
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }
        
        std::string funName = node.getFunctionName();
        // std::cout << funName << "\n";

        std::vector<ASTParam*> parameters = node.getParamList();



        /************* LLVM IR ***************/

        std::string retType = rootSymbolTable->getIdentifierDataType(funName);

        llvm::Type *returnType = getLLVMType(retType);


        std::vector<llvm::Type*> args;

        std::string dataType;



        // Getting LLVM Types for arguments

        FunctionType *FT = nullptr;

        if(parameters.size() != 0)
        {
            for(ASTParam *p : parameters)
            {
                dataType = currentSymTab->getIdentifierDataType( p->getParamName() );
                args.push_back( getLLVMType(dataType) );
            }

            FT = FunctionType::get(returnType, args, false);

        }
        else {

            FT = FunctionType::get(returnType, false);
        }



        // Creating LLVM Function

        llvm::Function *func = llvm::Function::Create(
                                FT,
                                llvm::Function::ExternalLinkage,
                                funName,
                                TheModule
                                );



        // Setting arg names in LLVM Function args

        int paramIndex = 0;

        if(!func->arg_empty())
        {
            for (Function::arg_iterator AI = func->arg_begin(); paramIndex < parameters.size(); ++AI, ++paramIndex) 
            {
                AI->setName( parameters[paramIndex]->getParamName() );
            }
        }

        paramIndex = 0;



        // Creating entry BB

        llvm::BasicBlock *BB = llvm::BasicBlock::Create(TheContext, "entry", func);
        Builder.SetInsertPoint(BB);

        if(!func->arg_empty())
        {
            for (auto &Arg : func->args()) 
            {
                // Create an alloca for this variable.
                AllocaInst *Alloca = CreateEntryBlockAlloca(func, parameters[paramIndex]->getParamName(), Arg.getType());
                // AllocaInst *Alloca = CreateEntryBlockAlloca(func, parameters[paramIndex]->getParamName(), args[paramIndex]);

                // Store the initial value into the alloca.
                Builder.CreateStore(&Arg, Alloca);

                // Add the alloca to the symbol table.
                
                currentSymTab->setVarStackMemory( parameters[paramIndex]->getParamName(), Alloca );

                ++paramIndex;
            }
        }
        
        if(node.getStmtList() != nullptr)
        {
            node.getStmtList()->accept(*this);
        }

        node.getReturnStmt()->accept(*this);

        // Builder.GetInsertBlock()->getParent();

        // std::string Str;
        // raw_string_ostream OS(Str);
        // OS << *currentValue;
        // std::cout << Str << "\n";        // This snippet printed the value correctly

        Builder.CreateRet(currentValue);

        llvm::verifyFunction(*func, &llvm::errs());
        // verifyFunction(*func);
    
        ++functionNum;
        
        currentSymTab = rootSymbolTable;
    }



    virtual void visit(ASTParam& node)
    {
        node.getDataType()->accept(*this);
        // std::cout << node.getParamName() << "\n";
    }


    /*********************************** GROUP 2 ***************************************/



    virtual void visit(ASTExpr& node) {}


    virtual void visit(ASTParenthesesExpr& node)
    {
        // std::cout << " ( ";
        node.getExpr()->accept(*this);
        // std::cout << " ) \n";
    }


    virtual void visit(ASTLocationExpr& node) {}
    

    virtual void visit(ASTSimpleVarLocation& node)
    {
        std::string varName = node.getLocationName();
        // std::cout << varName << "\n";

        bool present = currentSymTab->searchEntry(varName);

        SymTab *tempSymTab = currentSymTab;

        while(!present && (tempSymTab->getParent() != nullptr) )
        {
            tempSymTab = tempSymTab->getParent();
            present = tempSymTab->searchEntry(varName);
        }

        currentDataType = tempSymTab->getIdentifierDataType(varName);

        currentAlloca = tempSymTab->getVarStackMemory(varName);
        currentValue = Builder.CreateLoad(currentAlloca);
    }



    virtual void visit(ASTOneDarrayLocation& node)
    {
        std::string varName = node.getLocationName();
        // std::cout << varName << "\n";

        // Check if it's present in the symTab

        bool present = currentSymTab->searchEntry(varName);

        SymTab *tempSymTab = currentSymTab;

        while(!present && tempSymTab->getParent() != nullptr)
        {
            tempSymTab = tempSymTab->getParent();
            present = tempSymTab->searchEntry(varName);
        }

        if(!present)
        {
            // std::cout<< "ERROR: Variable " << varName << " is undeclared\n";

            // exit(EXIT_FAILURE);
        }

        Value *index = nullptr;

        node.getDim()->accept(*this);

        index = currentValue;


        currentDataType = tempSymTab->getIdentifierDataType(varName);
        
        currentAlloca = tempSymTab->getVarStackMemory(varName);

        std::vector<Value*> indices;
        indices.push_back(Builder.getInt32(0));
        indices.push_back(index);

        Value *computedAddress = Builder.CreateGEP(currentAlloca, indices, varName+"_index");

        currentValue = Builder.CreateLoad(computedAddress);
    }  



    virtual void visit(ASTTwoDarrayLocation& node)
    {
        std::string varName = node.getLocationName();
        // std::cout << varName << "\n";

        // Check if it's present in the symTab

        bool present = currentSymTab->searchEntry(varName);

        SymTab *tempSymTab = currentSymTab;

        while(!present && tempSymTab->getParent() != nullptr)
        {
            tempSymTab = tempSymTab->getParent();
            present = tempSymTab->searchEntry(varName);
        }

        if(!present)
        {
            // std::cout<< "ERROR: Variable " << varName << " is undeclared\n";

            // exit(EXIT_FAILURE);
        }

        std::vector<ASTnode*> dims = node.getDims();    // Cannot be an empty vector, already checked by the parser

        dims[0]->accept(*this);
        dims[1]->accept(*this);

        currentDataType = tempSymTab->getIdentifierDataType(varName);
    }




    virtual void visit(ASTUnaryExpr& node)
    {   
        std::string unaryOp = node.getUnaryOp();
        // std::cout << unaryOp << "\n";

        if(unaryOp == "-")
        {
            signedInteger = true;
        }

        node.getOperand()->accept(*this);

        if(unaryOp == "-")
        {
            currentValue = Builder.CreateNeg(currentValue, "negation");
        }
        else if(unaryOp == "!")
        {
            currentValue = Builder.CreateNot(currentValue, "not");
        }

    }



    virtual void visit(ASTBinaryExpr& node)
    {
        std::string leftDT, rightDT;

        Value *leftValue, *rightValue;

        node.getLeft()->accept(*this);
        leftDT = currentDataType;
        leftValue = currentValue;

        // std::cout << node.getBin_operator() << "\n";

        node.getRight()->accept(*this);
        rightDT = currentDataType;
        rightValue = currentValue;

        if(leftDT != rightDT)
        {
            if(leftDT == "long")
            {
                // typecast rightValue to ConstantInt::get(TheContext, APInt(64, static_cast<uint64_t>(intVal), true));

                rightValue = Builder.CreateIntCast(rightValue, Type::getInt64Ty(TheContext), true);
            }
            else if(leftDT == "ulong")
            {
                rightValue = Builder.CreateIntCast(rightValue, Type::getInt64Ty(TheContext), false);
            }
        }

        Value *v = nullptr;

        std::string op = node.getBin_operator();

        if (op == "+") 
        {
            v = Builder.CreateAdd(leftValue, rightValue, "addition");
        } 
        else if (op == "-") 
        {
            v = Builder.CreateSub(leftValue, rightValue, "subtraction");
        } 
        else if (op == "*") 
        {
            v = Builder.CreateMul(leftValue, rightValue, "multiplication");
        } 
        else if (op == "/") 
        {
            v = Builder.CreateSDiv(leftValue, rightValue, "division");
        } 
        else if (op == "%") 
        {
            v = Builder.CreateSRem(leftValue, rightValue, "modulus");
        }  
        else if (op == "<") 
        {
            v = Builder.CreateICmpSLT(leftValue, rightValue, "lessthan");
        } 
        else if (op == ">") 
        {
            v = Builder.CreateICmpSGT(leftValue, rightValue, "greaterthan");
        } 
        else if (op == "<=") 
        {
            v = Builder.CreateICmpSLE(leftValue, rightValue, "lessequal");
        } 
        else if (op == ">=") 
        {
            v = Builder.CreateICmpSGE(leftValue, rightValue, "greaterequal");
        } 
        else if (op == "==") 
        {
            v = Builder.CreateICmpEQ(leftValue, rightValue, "equal");
        } 
        else if (op == "!=") 
        {
            v = Builder.CreateICmpNE(leftValue, rightValue, "notequal");
        }
        else if (op == "||") 
        {
            v = Builder.Insert(BinaryOperator::Create(Instruction::Or, leftValue, rightValue, "or"));
        } 
        else if (op == "&&") 
        {
            v = Builder.Insert(BinaryOperator::Create(Instruction::And, leftValue, rightValue, "and"));
        }

        currentDataType = leftDT;

        currentValue = v;
    }




    virtual void visit(ASTTernaryExpr& node)
    {
        node.getFirst()->accept(*this);

        // std::cout << " ? ";
        node.getSecond()->accept(*this);
        // std::cout << " : ";
        node.getThird()->accept(*this);
    }


    /*********************************** GROUP 3 ***************************************/


    virtual void visit(ASTIntLitNode& node)
    {
        unsigned long int intVal = node.getIntLit();

        // The 2nd and 3rd checks in each if condition here seem to be redundant!

        if(signedInteger == true)
        {
            if( (intVal == static_cast<int>(intVal)) && (static_cast<int>(intVal) >= std::numeric_limits<int>::min()) && (static_cast<int>(intVal) <= std::numeric_limits<int>::max()) )
            {
                currentDataType = "int";

                currentIntVal = intVal;
                
                currentValue = ConstantInt::get(TheContext, APInt(32, static_cast<uint64_t>(intVal), true));    // true -> signed integer
            }
            else if ((intVal == static_cast<long>(intVal)) && (static_cast<long>(intVal) >= std::numeric_limits<long>::min()) && (static_cast<long>(intVal) <= std::numeric_limits<long>::max()) )
            {
                currentDataType = "long";

                currentIntVal = intVal;

                currentValue = ConstantInt::get(TheContext, APInt(64, static_cast<uint64_t>(intVal), true));
            }
        }
        else 
        {
            if ((intVal == static_cast<unsigned int>(intVal)) && static_cast<unsigned int>(intVal) >= std::numeric_limits<unsigned int>::min() && static_cast<unsigned int>(intVal) <= std::numeric_limits<unsigned int>::max() )
            {
                currentDataType = "uint";

                currentIntVal = intVal;

                currentValue = ConstantInt::get(TheContext, APInt(32, static_cast<uint64_t>(intVal), false));
            }
            else if ((intVal == static_cast<unsigned long>(intVal)) && static_cast<unsigned long>(intVal) >= std::numeric_limits<unsigned long>::min() && static_cast<unsigned long>(intVal) <= std::numeric_limits<unsigned long>::max() )
            {
                currentDataType = "ulong";

                currentIntVal = intVal;

                currentValue = ConstantInt::get(TheContext, APInt(64, static_cast<uint64_t>(intVal), false));
            }
        }

        signedInteger = false;
    }

    std::string replaceNewline(std::string str) {
        size_t index = 0;
        std::string search = "\\n";
        while (true) {
            index = str.find(search, index);
            if (index == std::string::npos) break;
            str.erase(index, search.length());
            str.insert(index, "\n");
            index += 1;
        }
        return str;
    }

    virtual void visit(ASTStringLitNode& node)
    {
        // std::cout << node.getStringLit() << "\n";

        // std::string stringLiteral = "%d\n";

        // currentValue = Builder.CreateGlobalStringPtr( "%d\n" );

        std::string stringLiteral = node.getStringLit();

        stringLiteral = replaceNewline(stringLiteral);

        currentValue = Builder.CreateGlobalStringPtr( stringLiteral );
    }

    virtual void visit(ASTCharLitNode& node)
    {
        // std::cout << node.getCharLit() << "\n";

        char charVal = node.getCharLit();

        currentDataType = "char";

        currentValue = ConstantInt::get(TheContext, APInt(8, static_cast<uint64_t>(charVal), false));
    }

    virtual void visit(ASTBoolLitNode& node)
    {
        currentDataType = "bool";

        if(node.getBoolLit() == true)   // true is taken as 1, false is taken as 0
        {
            // std::cout << "true" << "\n";

            currentValue = ConstantInt::get(TheContext, APInt(1, 1, false));
        }
        else {
            // std::cout << "false" << "\n";

            currentValue = ConstantInt::get(TheContext, APInt(1, 0, false));
        }
    }

    /*********************************** GROUP 4 ***************************************/


    virtual void visit(ASTStmtList& node)
    {
        std::vector<ASTnode*> statements = node.getListOfStmts();

        if(statements.size() != 0)
        {
            for(ASTnode *statement : statements)
            {
                statement->accept(*this);
            }
        }
    }


    virtual void visit(ASTStmt& node) {}


    virtual void visit(ASTAssignmentStmt& node)
    {
        std::string LHSdataType, RHSdataType;
        Value *leftValue, *rightValue;

        node.getLocation()->accept(*this);
        LHSdataType = currentDataType;
        leftValue = currentValue;
        AllocaInst *location = currentAlloca;

        // std::cout << node.getAssignOp() << "\n";

        node.getExpression()->accept(*this);
        RHSdataType = currentDataType;
        rightValue = currentValue;

        if(LHSdataType != RHSdataType)
        {
            if(LHSdataType == "long")
            {
                // typecast rightValue to ConstantInt::get(TheContext, APInt(64, static_cast<uint64_t>(intVal), true));

                rightValue = Builder.CreateIntCast(rightValue, Type::getInt64Ty(TheContext), true);
            }
            else if(LHSdataType == "ulong")
            {
                rightValue = Builder.CreateIntCast(rightValue, Type::getInt64Ty(TheContext), false);
            }
        }

        std::string assignOp = node.getAssignOp();

        if(assignOp == "=")
        {
            Builder.CreateStore(rightValue, location);
        }
        else if(assignOp == "+=")
        {
            rightValue = Builder.CreateAdd(leftValue, rightValue, "addEqual");
            Builder.CreateStore(rightValue, location);
        }
        else if(assignOp == "-=")
        {
            rightValue = Builder.CreateSub(leftValue, rightValue, "subtractEqual");
            Builder.CreateStore(rightValue, location);
        }
        
    }

    virtual void visit(ASTReturnStmt& node)
    {
        // std::cout << "return ";
        node.getReturnExpr()->accept(*this);

        returnPresent = true;
    }

    virtual void visit(ASTBreakStmt& node)
    {
        // std::cout << "break;\n";

        breakPresent = true;
    }

    virtual void visit(ASTContinueStmt& node)
    {
        // std::cout << "continue;\n";
    }

    virtual void visit(ASTIfStmt& node)
    {
        std::vector<SymTab*> children = currentSymTab->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("if" + std::to_string(ifNum)))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        ++ifNum;

        // std::cout << "if ";
        node.getCondition()->accept(*this);

        Value *cond = currentValue;

        bool returnPresentIf = false;

        Function *TheFunction = Builder.GetInsertBlock()->getParent();
        BasicBlock *ifBlock = BasicBlock::Create(TheContext, "if", TheFunction);
        BasicBlock *thenBlock = BasicBlock::Create(TheContext, "then");

        Builder.CreateCondBr(cond, ifBlock, thenBlock);
        Builder.SetInsertPoint(ifBlock);

        if(node.getStatements() != nullptr)
        {
            node.getStatements()->accept(*this);
        }

        returnPresentIf = returnPresent;
        returnPresent = false;      // So that other statements' correctness is not affected

        breakPresentInAnIf = breakPresent;
        breakPresent = false;       // So that other statements' correctness is not affected

        if (!returnPresentIf && !breakPresentInAnIf) {
            Builder.CreateBr(thenBlock);
        }

        if(returnPresentIf)
        {
            Builder.CreateRet(currentValue);
        }

        if(breakPresentInAnIf)
        {
            std::cout << "Here at least :( \n";
            if(blkAfterLoop != nullptr)
            {
                Builder.CreateBr(blkAfterLoop);
                std::cout << "THIS WORKED\n";
            }
            else {
                std::cout << "\n blkAfterLoop is null though it shouldn't be! \n";
            }
        }

        TheFunction->getBasicBlockList().push_back(thenBlock);
        Builder.SetInsertPoint(thenBlock);

        //If there's a break stmt, this if had better be inside a loop! The loop will take care of that

        currentSymTab = currentSymTab->getParent();
    }


    virtual void visit(ASTIfElseStmt& node)
    {
        std::vector<SymTab*> children = currentSymTab->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("if" + std::to_string(ifNum)))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        ++ifNum;

        // std::cout << "if ";
        node.getCondition()->accept(*this);

        Value *cond = currentValue;

        bool returnPresentIf = false;

        Function *TheFunction = Builder.GetInsertBlock()->getParent();
        BasicBlock *ifBlock = BasicBlock::Create(TheContext, "if", TheFunction);
        BasicBlock *thenBlock = BasicBlock::Create(TheContext, "then");
        BasicBlock *elseBlock = BasicBlock::Create(TheContext, "else");

        Builder.CreateCondBr(cond, ifBlock, elseBlock);
        Builder.SetInsertPoint(ifBlock);

        if(node.getThenStatements() != nullptr)
        {
            node.getThenStatements()->accept(*this);
        }

        returnPresentIf = returnPresent;
        returnPresent = false;      // So that other statements' correctness is not affected

        breakPresentInAnIf = breakPresent;
        breakPresent = false;       // So that other statements' correctness is not affected

        if (!returnPresentIf && !breakPresentInAnIf) {
            Builder.CreateBr(thenBlock);
        }

        if(returnPresentIf)
        {
            Builder.CreateRet(currentValue);
        }

        if(breakPresentInAnIf)
        {
            if(blkAfterLoop != nullptr)
            {
                Builder.CreateBr(blkAfterLoop);
            }
            else {
                std::cout << "\n blkAfterLoop is null though it shouldn't be! -- Is break not in a loop? \n";
            }
        }

        currentSymTab = currentSymTab->getParent();




        children = currentSymTab->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("else" + std::to_string(elseNum)))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        ++elseNum;

        // std::cout << "else ";

        bool returnPresentElse = false;

        TheFunction->getBasicBlockList().push_back(elseBlock);
        Builder.SetInsertPoint(elseBlock);

        if(node.getElseStatements() != nullptr)
        {
            node.getElseStatements()->accept(*this);
        }

        returnPresentElse = returnPresent;
        returnPresent = false;      // So that other statements' correctness is not affected

        breakPresentInAnElse = breakPresent;
        breakPresent = false;       // So that other statements' correctness is not affected

        if (!returnPresentElse && !breakPresentInAnElse) {
            Builder.CreateBr(thenBlock);
        }

        if(returnPresentElse)
        {
            Builder.CreateRet(currentValue);
        }

        if(breakPresentInAnElse)
        {
            if(blkAfterLoop != nullptr)
            {
                Builder.CreateBr(blkAfterLoop);
            }
            else {
                std::cout << "\n blkAfterLoop is null though it shouldn't be! -- Is break not in a loop? \n";
            }
        }

        TheFunction->getBasicBlockList().push_back(thenBlock);
        Builder.SetInsertPoint(thenBlock);

        currentSymTab = currentSymTab->getParent();
    }


    virtual void visit(ASTForStmt& node)
    {
        std::vector<SymTab*> children = currentSymTab->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("for" + std::to_string(forNum)))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        ++forNum;

        // std::cout << "for ";

        /********** Initialization **************/

        std::string LHSdataType, RHSdataType;
        Value *leftValue, *rightValue;

        node.getInitLoc()->accept(*this);

        LHSdataType = currentDataType;
        AllocaInst *location = currentAlloca;

        // std::cout << " = ";
        node.getInitExpr()->accept(*this);

        RHSdataType = currentDataType;
        rightValue = currentValue;

        if(LHSdataType != RHSdataType)
        {
            if(LHSdataType == "long")
            {
                // typecast rightValue to ConstantInt::get(TheContext, APInt(64, static_cast<uint64_t>(intVal), true));

                rightValue = Builder.CreateIntCast(rightValue, Type::getInt64Ty(TheContext), true);
            }
            else if(LHSdataType == "ulong")
            {
                rightValue = Builder.CreateIntCast(rightValue, Type::getInt64Ty(TheContext), false);
            }
        }

        Builder.CreateStore(rightValue, location);

        /********** Condition check (before entering loop) **************/

        Function *TheFunction = Builder.GetInsertBlock()->getParent();
        BasicBlock *loopBody = BasicBlock::Create(TheContext, "loop", TheFunction);
        BasicBlock *afterLoop = BasicBlock::Create(TheContext, "afterLoop", TheFunction);

        Value *condition = nullptr;
        node.getConditionExpr()->accept(*this);
        condition = currentValue;

        Builder.CreateCondBr(condition, loopBody, afterLoop);

        /********** Loop body **************/

        Builder.SetInsertPoint(loopBody);

        blkAfterLoop = afterLoop;

        if(node.getStatements() != nullptr)
        {
            node.getStatements()->accept(*this);
        }

        node.getUpdateLoc()->accept(*this);
        LHSdataType = currentDataType;
        leftValue = currentValue;
        location = currentAlloca;

        // std::cout << node.getAssignOp();
        std::string assignOp = node.getAssignOp();

        node.getUpdateExpr()->accept(*this);
        RHSdataType = currentDataType;
        rightValue = currentValue;

        if(LHSdataType != RHSdataType)
        {
            if(LHSdataType == "long")
            {
                // typecast rightValue to ConstantInt::get(TheContext, APInt(64, static_cast<uint64_t>(intVal), true));

                rightValue = Builder.CreateIntCast(rightValue, Type::getInt64Ty(TheContext), true);
            }
            else if(LHSdataType == "ulong")
            {
                rightValue = Builder.CreateIntCast(rightValue, Type::getInt64Ty(TheContext), false);
            }
        }

        if(assignOp == "=")
        {
            Builder.CreateStore(rightValue, location);
        }
        else if(assignOp == "+=")
        {
            rightValue = Builder.CreateAdd(leftValue, rightValue, "addEqual");
            Builder.CreateStore(rightValue, location);
        }
        else if(assignOp == "-=")
        {
            rightValue = Builder.CreateSub(leftValue, rightValue, "subtractEqual");
            Builder.CreateStore(rightValue, location);
        }

        // Either loop back to the start of the loop body, or exit loop

        node.getConditionExpr()->accept(*this);
        condition = currentValue;

        Builder.CreateCondBr(condition, loopBody, afterLoop);

        Builder.SetInsertPoint(afterLoop);

        currentSymTab = currentSymTab->getParent();
    }
    

    virtual void visit(ASTWhileStmt& node)
    {
        std::vector<SymTab*> children = currentSymTab->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("while" + std::to_string(whileNum)))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        ++whileNum;

        // std::cout << "while ";


        Function *TheFunction = Builder.GetInsertBlock()->getParent();
        BasicBlock *loopBody = BasicBlock::Create(TheContext, "loop", TheFunction);
        BasicBlock *afterLoop = BasicBlock::Create(TheContext, "afterLoop", TheFunction);

        Value *condition = nullptr;

        /********** Condition check (before entering loop) **************/

        node.getCondition()->accept(*this);

        condition = currentValue;

        Builder.CreateCondBr(condition, loopBody, afterLoop);

        /********** Loop body **************/

        Builder.SetInsertPoint(loopBody);

        blkAfterLoop = afterLoop;
        
        if(node.getStatements() != nullptr)
        {
            node.getStatements()->accept(*this);
        }

        node.getCondition()->accept(*this);
        condition = currentValue;

        Builder.CreateCondBr(condition, loopBody, afterLoop);

        Builder.SetInsertPoint(afterLoop);
        
        currentSymTab = currentSymTab->getParent();
    }


    /*********************************** GROUP 5 ***************************************/


    virtual void visit(ASTUserFunCall& node)
    {
        std::string funName = node.getFuncName();
        // std::cout << funName << " ( ";
        std::vector<ASTUserFunArg*> args = node.getArgs();

        if(args.size() != 0)
        {
            for(ASTUserFunArg* arg : args)
            {
                arg->accept(*this);
            }
        }

        currentDataType = rootSymbolTable->getIdentifierDataType(funName);

    }


    virtual void visit(ASTLibFunCall& node)
    {
        std::string libFunName = node.getLibFuncName();
        // std::cout << "callout ( " << libFunName << "  ";

        std::vector<ASTLibFunArg*> args = node.getArgs();

        std::vector<Type*> argTypes;
        std::vector<Value*> argValues;

        if(args.size() != 0)
        {
            for(ASTLibFunArg* arg : args)
            {
                arg->accept(*this);

                argValues.push_back(currentValue);
                argTypes.push_back(currentValue->getType());
            }

        }

        FunctionCallee func;

        ArrayRef<Type*> argsRef(argTypes);
        ArrayRef<Value*> funcArgs(argValues);

        if(libFunName == "printf")
        {
            func = TheModule->getOrInsertFunction(libFunName,
                                                   FunctionType::get(IntegerType::getInt32Ty(TheContext), PointerType::get(Type::getInt8Ty(TheContext), 0), true /* this is var arg func type*/) 
                                                   );

            if (!func) {
                std::cout << "Unknown in-built function: " + libFunName;
            }
            
            Builder.CreateCall(func, funcArgs);
        }
        if(libFunName == "scanInt")
        {
            currentDataType = "int";

            FunctionType *FType = FunctionType::get(Type::getInt32Ty(TheContext), false);
            func = TheModule->getOrInsertFunction(libFunName, FType);

            if (!func) {
                std::cout << "Unknown in-built function: " + libFunName;
            }
            
            currentValue = Builder.CreateCall(func);
        }
        else if (libFunName == "scanString")
        {
            FunctionType *FType = FunctionType::get(PointerType::get(Type::getInt8Ty(TheContext), 0), false);
            func = TheModule->getOrInsertFunction(libFunName, FType);

            if (!func) {
                std::cout << "Unknown in-built function: " + libFunName;
            }
            
            currentValue = Builder.CreateCall(func);
        }
        else if (libFunName == "strlen")
        {
            currentDataType = "int";

            FunctionType *FType = FunctionType::get(Type::getInt32Ty(TheContext), argsRef, false);
            func = TheModule->getOrInsertFunction(libFunName, FType);

            if (!func) {
                std::cout << "Unknown in-built function: " + libFunName;
            }
            
            currentValue = Builder.CreateCall(func, funcArgs);
        }
    }


    virtual void visit(ASTUserFunArg& node)
    {
        node.getArgument()->accept(*this);
    }


    virtual void visit(ASTLibFunArg& node)
    {
        node.getArgument()->accept(*this);
    }
};