#include <iostream>

class semCheckASTVisitor : public ASTvisitor
{   
    SymTab *rootSymbolTable;

    SymTab *currentSymTab;

    int functionNum, ifNum, elseNum, forNum, whileNum;

    functionNum = 1;
    ifNum = 1;
    elseNum = 1;
    forNum = 1;
    whileNum = 1;

    public:

    semCheckASTVisitor() {}

    semCheckASTVisitor(SymTab *symTab) : rootSymbolTable(symTab)
    {}

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
    }

    virtual void visit(ASTDeclaration& node)
    {
        // node.getDataType()->accept(*this);      // Don't visit here
    }

    virtual void visit(ASTVariableDecl& node)
    {
        node.getDataType()->accept(*this);       // Visit here

        std::vector<ASTSingleVarDecl*> variables = node.getVariables();

        // This vector cannot be empty, at least one variable will be present --> already checked by the parser

        for(ASTSingleVarDecl* varDecl : variables)
        {
            varDecl->accept(*this);
        }
    }

    virtual void visit(ASTSingleVarDecl& node)
    {
        // std::cout << node.getVariableName() << "\n";    // Don't visit here
    }

    virtual void visit(ASTSimpleVariableDecl& node)
    {
        std::string varName = node.getVariableName();
        std::cout << varName << "\n";
    }

    virtual void visit(AST1DArrayDecl& node)
    {
        std::string varName = node.getVariableName();
        std::cout << varName << "\n";
        
        int dim = node.getDim();
        std::cout << dim << "\n";

    }

    virtual void visit(AST2DArrayDecl& node)
    {
        std::string varName = node.getVariableName();
        std::cout << varName << "\n";

        std::vector<int> dims = node.getDims();     // Cannot be an empty vector, already checked by the parser
        std::cout << dims[0] << dims[1] << "\n";

    }

    virtual void visit(ASTDataType& node)
    {
        std::string dataType = node.getDataTypeName();
        
        std::cout << dataType << "\n";
        
    }

    virtual void visit(ASTFunctionDecl& node)
    {
        std::vector<SymTab*> children = rootSymbolTable->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("function"+functionNum))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        node.getDataType()->accept(*this);
        
        std::string funName = node.getFunctionName();
        std::cout << funName << "\n";

        std::vector<ASTParam*> parameters = node.getParamList();

        if(parameters.size() != 0)
        {
            for(ASTParam *p : parameters)
            {
                p->accept(*this);
            }
        }
        
        if(node.getStmtList() != nullptr)
        {
            node.getStmtList()->accept(*this);
        }

        node.getReturnStmt()->accept(*this);

        ++functionNum;
        
        currentSymTab = rootSymbolTable;
    }

    virtual void visit(ASTParam& node)
    {
        node.getDataType()->accept(*this);
        std::cout << node.getParamName() << "\n";
    }


    /*********************************** GROUP 2 ***************************************/



    virtual void visit(ASTExpr& node)
    {
        
    }

    virtual void visit(ASTParenthesesExpr& node)
    {
        std::cout << " ( ";
        node.getExpr()->accept(*this);
        std::cout << " ) \n";
    }

    virtual void visit(ASTLocationExpr& node)
    {
        
    }

    virtual void visit(ASTSimpleVarLocation& node)
    {
        std::string varName = node.getLocationName();
        std::cout << varName << "\n";

        // Check if it's present in the symTab

        
    }

    virtual void visit(ASTOneDarrayLocation& node)
    {
        std::string varName = node.getLocationName();
        std::cout << varName << "\n";

        // Check if it's present in the symTab


        node.getDim()->accept(*this);
    }

    virtual void visit(ASTTwoDarrayLocation& node)
    {
        std::string varName = node.getLocationName();
        std::cout << varName << "\n";

        // Check if it's present in the symTab

        std::vector<ASTnode*> dims = node.getDims();    // Cannot be an empty vector, already checked by the parser

        dims[0]->accept(*this);
        dims[1]->accept(*this);
    }

    virtual void visit(ASTUnaryExpr& node)
    {
        std::cout << node.getUnaryOp() << "\n";
        node.getOperand()->accept(*this);
    }

    virtual void visit(ASTBinaryExpr& node)
    {
        node.getLeft()->accept(*this);
        std::cout << node.getBin_operator() << "\n";
        node.getRight()->accept(*this);
    }

    virtual void visit(ASTTernaryExpr& node)
    {
        node.getFirst()->accept(*this);
        std::cout << " ? ";
        node.getSecond()->accept(*this);
        std::cout << " : ";
        node.getThird()->accept(*this);
    }


    /*********************************** GROUP 3 ***************************************/


    virtual void visit(ASTIntLitNode& node)
    {
        std::cout << node.getIntLit() << "\n";
    }

    virtual void visit(ASTStringLitNode& node)
    {
        std::cout << node.getStringLit() << "\n";
    }

    virtual void visit(ASTCharLitNode& node)
    {
        std::cout << node.getCharLit() << "\n";
    }

    virtual void visit(ASTBoolLitNode& node)
    {
        if(node.getBoolLit() == true)   // true is taken as 1, false is taken as 0
        {
            std::cout << "true" << "\n";
        }
        else {
            std::cout << "false" << "\n";
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

    virtual void visit(ASTStmt& node)
    {
        
    }

    virtual void visit(ASTAssignmentStmt& node)
    {
        node.getLocation()->accept(*this);
        std::cout << node.getAssignOp() << "\n";
        node.getExpression()->accept(*this);
    }

    virtual void visit(ASTReturnStmt& node)
    {
        std::cout << "return ";
        node.getReturnExpr()->accept(*this);
    }

    virtual void visit(ASTBreakStmt& node)
    {
        std::cout << "break;\n";
    }

    virtual void visit(ASTContinueStmt& node)
    {
        std::cout << "continue;\n";
    }

    virtual void visit(ASTIfStmt& node)
    {
        std::vector<SymTab*> children = currentSymTab->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("if"+ifNum))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        std::cout << "if ";
        node.getCondition()->accept(*this);

        if(node.getStatements() != nullptr)
        {
            node.getStatements()->accept(*this);
        }

        ++ifNum;

        currentSymTab = currentSymTab->getParent();
    }

    virtual void visit(ASTIfElseStmt& node)
    {
        std::vector<SymTab*> children = currentSymTab->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("if"+ifNum))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        std::cout << "if ";
        node.getCondition()->accept(*this);

        if(node.getThenStatements() != nullptr)
        {
            node.getThenStatements()->accept(*this);
        }

        ++ifNum;

        currentSymTab = currentSymTab->getParent();




        children = currentSymTab->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("else"+elseNum))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        std::cout << "else ";

        if(node.getElseStatements() != nullptr)
        {
            node.getElseStatements()->accept(*this);
        }

        ++elseNum;

        currentSymTab = currentSymTab->getParent();
    }

    virtual void visit(ASTForStmt& node)
    {
        std::vector<SymTab*> children = currentSymTab->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("for"+forNum))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        std::cout << "for ";

        node.getInitLoc()->accept(*this);
        std::cout << " = ";
        node.getInitExpr()->accept(*this);

        node.getConditionExpr()->accept(*this);

        node.getUpdateLoc()->accept(*this);
        std::cout << node.getAssignOp();
        node.getUpdateExpr()->accept(*this);

        if(node.getStatements() != nullptr)
        {
            node.getStatements()->accept(*this);
        }

        ++forNum;

        currentSymTab = currentSymTab->getParent();
    }

    virtual void visit(ASTWhileStmt& node)
    {
        std::vector<SymTab*> children = currentSymTab->getChildren();

        if(children.size() != 0)
        {
            for(SymTab* child : children)
            {
                if (child->getName() == ("while"+whileNum))
                {
                    currentSymTab = child;
                    break;
                }
            }
        }
        else {
            std::cout << "\nSomething is wrong in the symTab hierarchy!\n";
        }

        std::cout << "while ";
        node.getCondition()->accept(*this);
        
        if(node.getStatements() != nullptr)
        {
            node.getStatements()->accept(*this);
        }

        ++whileNum;
        
        currentSymTab = currentSymTab->getParent();
    }


    /*********************************** GROUP 5 ***************************************/


    virtual void visit(ASTUserFunCall& node)
    {
        std::cout << node.getFuncName() << " ( ";
        std::vector<ASTUserFunArg*> args = node.getArgs();

        if(args.size() != 0)
        {
            for(ASTUserFunArg* arg : args)
            {
                arg->accept(*this);
            }
        }

        std::cout << " ) \n";
    }

    virtual void visit(ASTLibFunCall& node)
    {
        std::cout << "callout ( " << node.getLibFuncName() << "  ";

        std::vector<ASTLibFunArg*> args = node.getArgs();

        if(args.size() != 0)
        {
            for(ASTLibFunArg* arg : args)
            {
                arg->accept(*this);
            }
        }

        std::cout << " ) \n";
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