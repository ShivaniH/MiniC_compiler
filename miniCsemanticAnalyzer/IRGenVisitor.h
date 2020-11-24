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

    int functionNum, ifNum, elseNum, forNum, whileNum;



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



    static AllocaInst *CreateEntryBlockAlloca(Function *TheFunction, const std::string varName, llvm::Type *varDataType) 
    {
        IRBuilder<> TmpB(&TheFunction->getEntryBlock(), TheFunction->getEntryBlock().begin());
        
        AllocaInst *alloca_instruction = TmpB.CreateAlloca( varDataType, 0, varName);
 
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
        // OS.flush();
        // std::ofstream out("output.txt");
        // out << Str;
        // out.close();
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
    }



    virtual void visit(AST1DArrayDecl& node)
    {
        std::string varName = node.getVariableName();
        // std::cout << varName << "\n";
        
        int dim = node.getDim();
        // std::cout << dim << "\n";

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

        llvm::Function *func = nullptr;

        if(parameters.size() != 0)
        {
            for(ASTParam *p : parameters)
            {
                dataType = currentSymTab->getIdentifierDataType( p->getParamName() );
                args.push_back( getLLVMType(dataType) );
            }

            func = llvm::Function::Create(
            llvm::FunctionType::get(returnType, args, false),
            llvm::Function::ExternalLinkage,
            funName,
            TheModule
            );
        }
        else {
            func = llvm::Function::Create(
            llvm::FunctionType::get(returnType, false),
            llvm::Function::ExternalLinkage,
            funName,
            TheModule
            );
        }

        // Creating LLVM Function

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

        if(!func->arg_empty())
        {
            for (auto &Arg : func->args()) 
            {
                // Create an alloca for this variable.
                AllocaInst *Alloca = CreateEntryBlockAlloca(func, parameters[paramIndex]->getParamName(), Arg.getType());

                // Store the initial value into the alloca.
                Builder.CreateStore(&Arg, Alloca);

                // Add the alloca to the symbol table.
                
                currentSymTab->setVarStackMemory( parameters[paramIndex]->getParamName(), Alloca );

                ++paramIndex;

                std::cout << "Ok till here\n";          // Not printed --> ERROR in this for loop's body
            }
        }


        // Creating entry BB

        llvm::BasicBlock *BB = llvm::BasicBlock::Create(TheContext, "entry", func);
        Builder.SetInsertPoint(BB);
        
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

        // Check if it's present in the symTab

        bool present = currentSymTab->searchEntry(varName);

        SymTab *tempSymTab = currentSymTab;

        // std::cout << "symtab = " << tempSymTab->getName() << "present = " << present << "\n";

        while(!present && (tempSymTab->getParent() != nullptr) )
        {
            tempSymTab = tempSymTab->getParent();
            present = tempSymTab->searchEntry(varName);

            // std::cout << "symtab = " << tempSymTab->getName() << "present = " << present << "\n";
        }

        if(!present)
        {
            // std::cout<< "ERROR: Variable " << varName << " is undeclared\n";

            // exit(EXIT_FAILURE);
        }

        currentDataType = tempSymTab->getIdentifierDataType(varName);
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

        node.getDim()->accept(*this);

        currentDataType = tempSymTab->getIdentifierDataType(varName);
        
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

        // if (unaryOp == "-" && ( currentDataType == "bool" || currentDataType == "char" ) )
        // {
        //     std::cout << "ERROR: Type mismatch, cannot apply " << unaryOp << " to " << currentDataType << "\n";

        //     exit(EXIT_FAILURE);
        // }
        // else if (unaryOp == "!" && currentDataType == "char")
        // {
        //     std::cout << "ERROR: Type mismatch, cannot apply ! to a char\n";

        //     exit(EXIT_FAILURE);
        // }
    }


    virtual void visit(ASTBinaryExpr& node)
    {
        std::string leftDT, rightDT;

        node.getLeft()->accept(*this);
        leftDT = currentDataType;

        // std::cout << node.getBin_operator() << "\n";

        node.getRight()->accept(*this);
        rightDT = currentDataType;

        // if(leftDT != rightDT)
        // {
        //     if ( (leftDT == "int" || leftDT == "uint" || leftDT == "long" || leftDT == "ulong") && (rightDT == "int" || rightDT == "uint" || rightDT == "long" || rightDT == "ulong") )
        //     {
        //         // This is fine. Not handling overflows.
        //     }
        //     else
        //     {
        //         std::cout << "ERROR: Type mismatch, cannot apply " << node.getBin_operator() << " to " << leftDT << " and " << rightDT << "\n";

        //         exit(EXIT_FAILURE);
        //     }
        // }

        currentDataType = leftDT;
    }




    virtual void visit(ASTTernaryExpr& node)
    {
        node.getFirst()->accept(*this);

        // if(currentDataType != "bool" && currentDataType != "int")
        // {
        //     std::cout << "ERROR: Type mismatch, the first operand of ?: must have the type bool or int\n";

        //     exit(EXIT_FAILURE);
        // }

        // std::cout << " ? ";
        node.getSecond()->accept(*this);
        // std::cout << " : ";
        node.getThird()->accept(*this);
    }


    /*********************************** GROUP 3 ***************************************/


    virtual void visit(ASTIntLitNode& node)
    {
        unsigned long int intVal = node.getIntLit();

        // std::cout << intVal << "\n";


        if(signedInteger == true)
        {
            if ( intVal >= std::numeric_limits<int>::min() && intVal <= std::numeric_limits<int>::max() )
            {
                currentDataType = "int";

                currentValue = ConstantInt::get(TheContext, APInt(32, static_cast<uint64_t>(intVal), true));    // true -> signed integer

            }
            else if ( intVal >= std::numeric_limits<long>::min() && intVal <= std::numeric_limits<long>::max() )
            {
                currentDataType = "long";

                currentValue = ConstantInt::get(TheContext, APInt(64, static_cast<uint64_t>(intVal), true));

            }
        }
        else 
        {
            if ( intVal >= std::numeric_limits<unsigned int>::min() && intVal <= std::numeric_limits<unsigned int>::max() )
            {
                currentDataType = "uint";

                currentValue = ConstantInt::get(TheContext, APInt(32, static_cast<uint64_t>(intVal), false));

            }
            else if ( intVal >= std::numeric_limits<unsigned long>::min() && intVal <= std::numeric_limits<unsigned long>::max() )
            {
                currentDataType = "ulong";

                currentValue = ConstantInt::get(TheContext, APInt(64, static_cast<uint64_t>(intVal), false));

            }
        }

        signedInteger = false;
    }

    virtual void visit(ASTStringLitNode& node)
    {
        // std::cout << node.getStringLit() << "\n";
    }

    virtual void visit(ASTCharLitNode& node)
    {
        // std::cout << node.getCharLit() << "\n";

        currentDataType = "char";
    }

    virtual void visit(ASTBoolLitNode& node)
    {
        if(node.getBoolLit() == true)   // true is taken as 1, false is taken as 0
        {
            // std::cout << "true" << "\n";
        }
        else {
            // std::cout << "false" << "\n";
        }

        currentDataType = "bool";
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

        node.getLocation()->accept(*this);
        LHSdataType = currentDataType;

        // std::cout << node.getAssignOp() << "\n";

        node.getExpression()->accept(*this);
        RHSdataType = currentDataType;

        // if(LHSdataType != RHSdataType)
        // {
        //     if( (LHSdataType == "uint" || LHSdataType == "ulong") && (RHSdataType == "int" || RHSdataType == "long") )
        //     {
        //         std::cout << "ERROR: Type mismatch, cannot assign " << RHSdataType << " to " << LHSdataType << "\n";

        //         exit(EXIT_FAILURE);
        //     }
        //     else if ( (LHSdataType == "int" || LHSdataType == "uint" || LHSdataType == "long" || LHSdataType == "ulong") && (RHSdataType == "int" || RHSdataType == "uint" || RHSdataType == "long" || RHSdataType == "ulong") )
        //     {
        //         // Fine otherwise
        //     }
        //     else {
        //         std::cout << "ERROR: Type mismatch, cannot assign " << RHSdataType << " to " << LHSdataType << "\n";

        //         exit(EXIT_FAILURE);
        //     }
        // }
    }

    virtual void visit(ASTReturnStmt& node)
    {
        // std::cout << "return ";
        node.getReturnExpr()->accept(*this);
    }

    virtual void visit(ASTBreakStmt& node)
    {
        // std::cout << "break;\n";
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

        if(node.getStatements() != nullptr)
        {
            node.getStatements()->accept(*this);
        }

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

        if(node.getThenStatements() != nullptr)
        {
            node.getThenStatements()->accept(*this);
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

        if(node.getElseStatements() != nullptr)
        {
            node.getElseStatements()->accept(*this);
        }

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

        node.getInitLoc()->accept(*this);
        // std::cout << " = ";
        node.getInitExpr()->accept(*this);

        node.getConditionExpr()->accept(*this);

        node.getUpdateLoc()->accept(*this);
        // std::cout << node.getAssignOp();
        node.getUpdateExpr()->accept(*this);

        if(node.getStatements() != nullptr)
        {
            node.getStatements()->accept(*this);
        }

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
        node.getCondition()->accept(*this);
        
        if(node.getStatements() != nullptr)
        {
            node.getStatements()->accept(*this);
        }
        
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

        // std::cout << " ) \n";
    }


    virtual void visit(ASTLibFunCall& node)
    {
        std::string libFunName = node.getLibFuncName();
        // std::cout << "callout ( " << libFunName << "  ";

        std::vector<ASTLibFunArg*> args = node.getArgs();

        if(args.size() != 0)
        {
            for(ASTLibFunArg* arg : args)
            {
                arg->accept(*this);
            }
        }

        // This is bad

        if(libFunName == "scanInt")
        {
            currentDataType = "int";
        }
        else if (libFunName == "scanString")
        {
            currentDataType = "char";
        }
        else if (libFunName == "strlen")
        {
            currentDataType = "int";
        }

        // std::cout << " ) \n";
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