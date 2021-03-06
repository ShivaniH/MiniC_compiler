#include "miniCgrammarBaseVisitor.h"
#include "AST.h"

#include <algorithm>

/*
Visit nodes of the Parse tree created by Antlr and create an AST using info from those nodes
*/

class ASTBuildVisitor : public miniCgrammarBaseVisitor {

    public:
    
    virtual antlrcpp::Any visitProgram(miniCgrammarParser::ProgramContext *ctx) override {
        
        std::cout << "At program node\n";

        ASTProgram *rootNode = new ASTProgram();
        // ASTDeclaration *decl;
        ASTnode *decl;

        for(auto declaration : (ctx->declarationList()->declaration()))     // declaration() returns a vector of DeclarationContext*
        {
            decl = visit(declaration);
            if(decl != nullptr)
            {
                rootNode->addToDeclarations(decl);
            }
        }

        return rootNode;
    }

    virtual antlrcpp::Any visitVariableDeclaration(miniCgrammarParser::VariableDeclarationContext *ctx) override {
        
        std::cout << "At variable declaration\n";
        return visit(ctx->variableDecl());

    }

    virtual antlrcpp::Any visitVariableDecl(miniCgrammarParser::VariableDeclContext *ctx) override {
        
        std::cout << "At variable decl\n";

        ASTDataType *adt = visit(ctx->dataType());

        std::cout << "Back to variable decl, data type = " << adt->getDataTypeName() << "\n";

        ASTVariableDecl *varDeclaration = new ASTVariableDecl(adt);

        ASTSingleVarDecl *oneVar;

        for(auto variable : ctx->variableDeclList()->singleVarDecl())
        {
            oneVar = visit(variable);
            if(oneVar != nullptr)
            {
                varDeclaration->addVariable(oneVar);
            }
        }
        
        return (ASTnode*) varDeclaration;
    }

    virtual antlrcpp::Any visitSimpleVariable(miniCgrammarParser::SimpleVariableContext *ctx) override {

        std::string vName = ctx->Id()->getSymbol()->getText();

        std::cout << "At simple var, name = " << vName << "\n";

        ASTSimpleVariableDecl *plainVar = new ASTSimpleVariableDecl(vName);
        
        return (ASTSingleVarDecl*) plainVar;
    }

    virtual antlrcpp::Any visitOneDarray(miniCgrammarParser::OneDarrayContext *ctx) override {

        std::string vName = ctx->Id()->getSymbol()->getText();
        int dim1 = std::stoi(ctx->IntegerLiteral()->getSymbol()->getText());

        std::cout << "At 1D array, name = " << vName << " dim = " << dim1 << "\n";

        AST1DArrayDecl *oneDArray = new AST1DArrayDecl(vName, dim1);

        return (ASTSingleVarDecl*) oneDArray;

    }

    virtual antlrcpp::Any visitTwoDarray(miniCgrammarParser::TwoDarrayContext *ctx) override {

        std::string vName = ctx->Id()->getSymbol()->getText();
        int dim1 = std::stoi(ctx->IntegerLiteral()[0]->getSymbol()->getText());
        int dim2 = std::stoi(ctx->IntegerLiteral()[1]->getSymbol()->getText());

        std::cout << "At 2D array, name = " << vName << " dim1 = " << dim1 << " dim2 = " << dim2 << "\n";

        AST2DArrayDecl *twoDArray = new AST2DArrayDecl(vName, dim1, dim2);

        return (ASTSingleVarDecl*) twoDArray;

    }
    
    virtual antlrcpp::Any visitBoolDataType(miniCgrammarParser::BoolDataTypeContext *ctx) override {
        
        std::cout << "At bool data type\n";

        return (new ASTDataType(ctx->Bool()->getSymbol()->getText()));

    }

    virtual antlrcpp::Any visitCharDataType(miniCgrammarParser::CharDataTypeContext *ctx) override {
           
        std::cout << "At char data type\n";

        return (new ASTDataType(ctx->Char()->getSymbol()->getText()));

    }

    virtual antlrcpp::Any visitIntDataType(miniCgrammarParser::IntDataTypeContext *ctx) override {
        
        std::cout << "At int data type\n";

        return (new ASTDataType(ctx->Int()->getSymbol()->getText()));

    }

    virtual antlrcpp::Any visitUintDataType(miniCgrammarParser::UintDataTypeContext *ctx) override {
        
        std::cout << "At uint data type\n";

        return (new ASTDataType(ctx->Uint()->getSymbol()->getText()));

    }

    virtual antlrcpp::Any visitLongDataType(miniCgrammarParser::LongDataTypeContext *ctx) override {
        
        std::cout << "At long data type\n";

        return (new ASTDataType(ctx->Long()->getSymbol()->getText()));

    }

    virtual antlrcpp::Any visitUlongDataType(miniCgrammarParser::UlongDataTypeContext *ctx) override {
        
        std::cout << "At ulong data type\n";

        return (new ASTDataType(ctx->Ulong()->getSymbol()->getText()));

    }

    virtual antlrcpp::Any visitFunctionDecl(miniCgrammarParser::FunctionDeclContext *ctx) override {
        
        std::cout << "At functionDecl\n";
        ASTDataType *adt = visit(ctx->dataType());
        std::string functionName = ctx->Id()->getSymbol()->getText();

        std::cout << "Back to functionDecl, return data type = " << adt->getDataTypeName() << " func name = " << functionName << "\n";

        ASTStmtList *stmtList;

        if(ctx->statementList() != nullptr)
        {
            stmtList = visitStatementList(ctx->statementList());
        }
        else {
            stmtList = nullptr;
        } 

        ASTnode *retExpr = (visit(ctx->expr()));
        ASTReturnStmt *retStmt = new ASTReturnStmt(retExpr);
        std::cout << "got return expr\n";

        ASTFunctionDecl *fun = new ASTFunctionDecl(adt, functionName, stmtList, retStmt);

        if(ctx->paramsList() != nullptr)
        {
            int numParams = (ctx->paramsList()->dataType()).size();
            std::cout << "Function declaraion for " << functionName << ", numParams = " << numParams << "\n";

            for(int i = 0; i < numParams; ++i)
            {
                auto dtContext = ctx->paramsList()->dataType()[i];
                auto idContext = ctx->paramsList()->Id()[i];
                
                ASTParam *param = new ASTParam(visit(dtContext), idContext->getSymbol()->getText());
                std::cout << "got a param named " << param->getParamName() << "\n";
                fun->addParam(param);
            }
        }
        
        return (ASTnode*) fun;

    }

    virtual antlrcpp::Any visitStatementList(miniCgrammarParser::StatementListContext *ctx) override {
        
        ASTStmtList *listStmts = new ASTStmtList();
        
        std::cout << "At statementList\n";
        // ASTStmt *oneStmt;
        ASTnode *oneStmt;

        for(auto stmt : ctx->statement())
        {
            oneStmt = visit(stmt);
            if(oneStmt != nullptr)
            {
                listStmts->addStatement(oneStmt);
            }
        }

        return listStmts;

    }

    virtual antlrcpp::Any visitVariableDeclStmt(miniCgrammarParser::VariableDeclStmtContext *ctx) override {
        
        std::cout << "At variable declaration stmt\n";
        return visit(ctx->variableDecl());

    }

    virtual antlrcpp::Any visitAssignmentStmt(miniCgrammarParser::AssignmentStmtContext *ctx) override {

        ASTnode *location = visit(ctx->location());
        ASTnode *expr = visit(ctx->expr());
        std::string assignOp;

        if(ctx->Assign() != nullptr)
        {
            assignOp = "=";
        }
        else if(ctx->PlusAssign() != nullptr)
        {
            assignOp = "+=";
        }
        else {
            assignOp = "-=";
        }

        std::cout << "At assignment statement, assignOp is " << assignOp << "\n";

        ASTAssignmentStmt *assignStmt = new ASTAssignmentStmt(location, assignOp, expr);

        return (ASTnode*) assignStmt;

    }

    virtual antlrcpp::Any visitExprStmt(miniCgrammarParser::ExprStmtContext *ctx) override {
        
        std::cout << "At Expr statement\n";
        // return (visit(ctx->expr()).as<ASTStmt*>());
        // auto expression = visit(ctx->expr());
        // std::cout << "back to Expr statement\n";
        // return (expression);

        return(visit(ctx->expr()));

    }

    virtual antlrcpp::Any visitConditionStmt(miniCgrammarParser::ConditionStmtContext *ctx) override {
        
        std::cout << "At conditional stmt\n";
        return (visit(ctx->conditionalStmt()));
    }

    virtual antlrcpp::Any visitIterationStmt(miniCgrammarParser::IterationStmtContext *ctx) override {
        
        std::cout << "At iteration stmt\n";
        return (visit(ctx->iterativeStmt()));
    }

    virtual antlrcpp::Any visitReturnStmt(miniCgrammarParser::ReturnStmtContext *ctx) override {
        
        std::cout << "At return stmt\n";
        return visit(ctx->expr());
    }

    virtual antlrcpp::Any visitBreakStmt(miniCgrammarParser::BreakStmtContext *ctx) override {
        
        std::cout << "At break stmt\n";
        return (ASTnode*)(new ASTBreakStmt());
    }

    virtual antlrcpp::Any visitContinueStmt(miniCgrammarParser::ContinueStmtContext *ctx) override {
        
        std::cout << "At continue stmt\n";
        return (ASTnode*)(new ASTContinueStmt());

    }

    virtual antlrcpp::Any visitSimpleVarLocation(miniCgrammarParser::SimpleVarLocationContext *ctx) override {
        
        std::string locName = ctx->Id()->getSymbol()->getText();
        std::cout << "At simple variable location, locName = " << locName << "\n";

        ASTSimpleVarLocation *simpleLoc = new ASTSimpleVarLocation(locName);
        return (ASTnode*) simpleLoc;

    }

    virtual antlrcpp::Any visitOneDarrayLocation(miniCgrammarParser::OneDarrayLocationContext *ctx) override {
        
        std::string locName = ctx->Id()->getSymbol()->getText();

        ASTnode *dim = visit(ctx->expr());
        std::cout << "At oneD array location, locName = " << locName << "\n";

        ASTOneDarrayLocation *oneDLoc = new ASTOneDarrayLocation(locName, dim);
        return (ASTnode*) oneDLoc;

    }

    virtual antlrcpp::Any visitTwoDarrayLocation(miniCgrammarParser::TwoDarrayLocationContext *ctx) override {
        
        std::string locName = ctx->Id()->getSymbol()->getText();

        ASTnode *dim1 = visit(ctx->expr()[0]);
        ASTnode *dim2 = visit(ctx->expr()[1]);
        std::cout << "At twoD array location, locName = " << locName << "\n";

        ASTTwoDarrayLocation *twoDLoc = new ASTTwoDarrayLocation(locName, dim1, dim2);
        return (ASTnode*) twoDLoc;
    }

    virtual antlrcpp::Any visitParenthesesExpr(miniCgrammarParser::ParenthesesExprContext *ctx) override {
        
        std::cout << "At ParenthesesExpr statement\n";

        ASTnode *expression = visit(ctx->expr());
        
        ASTParenthesesExpr *parExpr = new ASTParenthesesExpr(expression);

        return (ASTnode*) parExpr;
    }

    /*      UNARY OPERATORS     */


    virtual antlrcpp::Any visitNegateExpr(miniCgrammarParser::NegateExprContext *ctx) override {
        
        std::cout << "At unary negation expr\n";
        ASTnode *operand = visit(ctx->expr());
        ASTUnaryExpr *negUnary = new ASTUnaryExpr("-", operand);
        return (ASTnode*) negUnary;

    }

    virtual antlrcpp::Any visitNotExpr(miniCgrammarParser::NotExprContext *ctx) override {
        
        std::cout << "At logical NOT expr\n";
        ASTnode *operand = visit(ctx->expr());
        ASTUnaryExpr *notUnary = new ASTUnaryExpr("!", operand);
        return (ASTnode*) notUnary;

    }

    /*      BINARY OPERATORS     */


    virtual antlrcpp::Any visitExponentExpr(miniCgrammarParser::ExponentExprContext *ctx) override {
        
        std::cout << "At exponent expr\n";
        ASTnode *leftChild = visit(ctx->expr()[0]);
        ASTnode *rightChild = visit(ctx->expr()[1]);
        ASTBinaryExpr *exponExpr = new ASTBinaryExpr("^", leftChild, rightChild);
        return (ASTnode*) exponExpr;

    }

    virtual antlrcpp::Any visitMulDivModExpr(miniCgrammarParser::MulDivModExprContext *ctx) override {
         
        ASTnode *leftChild = visit(ctx->expr()[0]);
        ASTnode *rightChild = visit(ctx->expr()[1]);

        ASTBinaryExpr *muldivmodExpr;

        if (ctx->Star() != nullptr)
        {
            muldivmodExpr = new ASTBinaryExpr("*", leftChild, rightChild);
            std::cout << "At multiplication expr\n";
        }
        else if (ctx->Div() != nullptr)
        {
            muldivmodExpr = new ASTBinaryExpr("/", leftChild, rightChild);
            std::cout << "At division expr\n";
        }
        else {
            muldivmodExpr = new ASTBinaryExpr("%", leftChild, rightChild);
            std::cout << "At modulo expr\n";
        }

        return (ASTnode*) muldivmodExpr;

    }

    virtual antlrcpp::Any visitAddSubExpr(miniCgrammarParser::AddSubExprContext *ctx) override {
        
        ASTnode *leftChild = visit(ctx->expr()[0]);
        ASTnode *rightChild = visit(ctx->expr()[1]);

        ASTBinaryExpr *addsubmodExpr;

        if (ctx->Plus() != nullptr)
        {
            addsubmodExpr = new ASTBinaryExpr("+", leftChild, rightChild);
            std::cout << "At addition expr\n";
        }
        else {
            addsubmodExpr = new ASTBinaryExpr("-", leftChild, rightChild);
            std::cout << "At subtraction expr\n";
        }

        return (ASTnode*) addsubmodExpr;

    }

    virtual antlrcpp::Any visitRelopExpr(miniCgrammarParser::RelopExprContext *ctx) override {
        
        ASTnode *leftChild = visit(ctx->expr()[0]);
        ASTnode *rightChild = visit(ctx->expr()[1]);

        ASTBinaryExpr *relopExpr;

        if (ctx->Less() != nullptr)
        {
            relopExpr = new ASTBinaryExpr("<", leftChild, rightChild);
            std::cout << "At less than expr\n";
        }
        else if (ctx->LessEqual() != nullptr)
        {
            relopExpr = new ASTBinaryExpr("<=", leftChild, rightChild);
            std::cout << "At less than or equal expr\n";
        }
        else if (ctx->Greater() != nullptr)
        {
            relopExpr = new ASTBinaryExpr(">", leftChild, rightChild);
            std::cout << "At greater than expr\n";
        }
        else {
            relopExpr = new ASTBinaryExpr(">=", leftChild, rightChild);
            std::cout << "At greater than or equal expr\n";
        }

        return (ASTnode*) relopExpr;

    }

    virtual antlrcpp::Any visitEqualityExpr(miniCgrammarParser::EqualityExprContext *ctx) override {
        
        ASTnode *leftChild = visit(ctx->expr()[0]);
        ASTnode *rightChild = visit(ctx->expr()[1]);

        ASTBinaryExpr *equalExpr;

        if (ctx->Equal() != nullptr)
        {
            equalExpr = new ASTBinaryExpr("==", leftChild, rightChild);
            std::cout << "At equal to check expr\n";
        }
        else {
            equalExpr = new ASTBinaryExpr("!=", leftChild, rightChild);
            std::cout << "At not equal check expr\n";
        }

        return (ASTnode*) equalExpr;
    }

    virtual antlrcpp::Any visitLogicalANDExpr(miniCgrammarParser::LogicalANDExprContext *ctx) override {
        
        std::cout << "At logical AND expr\n";
        ASTnode *leftChild = visit(ctx->expr()[0]);
        ASTnode *rightChild = visit(ctx->expr()[1]);

        ASTBinaryExpr *logANDExpr = new ASTBinaryExpr("&&", leftChild, rightChild);
        return (ASTnode*) logANDExpr;
    }

    virtual antlrcpp::Any visitLogicalORExpr(miniCgrammarParser::LogicalORExprContext *ctx) override {
        
        std::cout << "At logical OR expr\n";
        ASTnode *leftChild = visit(ctx->expr()[0]);
        ASTnode *rightChild = visit(ctx->expr()[1]);

        ASTBinaryExpr *logORExpr = new ASTBinaryExpr("||", leftChild, rightChild);
        return (ASTnode*) logORExpr;
    }

    virtual antlrcpp::Any visitTernaryExpr(miniCgrammarParser::TernaryExprContext *ctx) override {
        
        std::cout << "At ternary op expr\n";
        ASTnode *firstChild = visit(ctx->expr()[0]);
        ASTnode *secondChild = visit(ctx->expr()[1]);
        ASTnode *thirdChild = visit(ctx->expr()[2]);

        ASTTernaryExpr *ternaryExpr = new ASTTernaryExpr(firstChild, secondChild, thirdChild);
        return (ASTnode*) ternaryExpr;

    }

    virtual antlrcpp::Any visitIntLitExpr(miniCgrammarParser::IntLitExprContext *ctx) override {

        unsigned long int value = std::stoi(ctx->IntegerLiteral()->getSymbol()->getText());

        std::cout << "visited int lit node with value " << value << "\n";

        return (ASTnode*)(new ASTIntLitNode(value));
    }

    virtual antlrcpp::Any visitStringLitExpr(miniCgrammarParser::StringLitExprContext *ctx) override {

        // std::string value = ctx->StringLiteral()->getSymbol()->getText();

        std::string value = ctx->StringLiteral()->getText();

        value.erase(std::remove( value.begin(), value.end(), '\"' ), value.end());

        std::cout << "visited string lit node with value " << value << "\n";

        return (ASTnode*)(new ASTStringLitNode(value));
    }

    virtual antlrcpp::Any visitCharLitExpr(miniCgrammarParser::CharLitExprContext *ctx) override {
        
        std::string value = ctx->CharLiteral()->getSymbol()->getText();

        std::cout << "visited char lit node with value " << value[1] << "\n";

        return (ASTnode*)(new ASTCharLitNode(value[1]));

    }

    virtual antlrcpp::Any visitBoolLitExpr(miniCgrammarParser::BoolLitExprContext *ctx) override {

        std::string value = ctx->BoolLiteral()->getSymbol()->getText();
        bool boolValue = ((value == "true") ? true : false);

        std::cout << "visited bool lit node with value " << value << "\n";

        return (ASTnode*)(new ASTBoolLitNode(boolValue));
    }

     virtual antlrcpp::Any visitFunctionCallExpr(miniCgrammarParser::FunctionCallExprContext *ctx) override {
        std::cout << "At functionCall Expr\n";
        return visit(ctx->functionCall());
    }

    virtual antlrcpp::Any visitUserDefFnCall(miniCgrammarParser::UserDefFnCallContext *ctx) override {

        std::string funName = ctx->Id()->getSymbol()->getText();

        ASTnode *argExpr;

        ASTUserFunCall *userFun = new ASTUserFunCall(funName);

        std::cout << "At user def functionCall Expr, func name = " << funName << "\n";
        
        if(ctx->argsList() != nullptr)
        {
            for(auto argument : ctx->argsList()->expr())
            {
                argExpr = visit(argument);

                if(argExpr != nullptr)
                {
                    ASTUserFunArg *arg = new ASTUserFunArg(argExpr);
                    userFun->addArg(arg);
                }
            }
        }
        
        return (ASTnode*) userFun;
    }

    virtual antlrcpp::Any visitLibFnCall(miniCgrammarParser::LibFnCallContext *ctx) override {
        
        std::string funName = ctx->StringLiteral()->getSymbol()->getText();

        funName.erase(std::remove( funName.begin(), funName.end(), '\"' ), funName.end());

        ASTnode *argExpr;

        ASTLibFunCall *libFun = new ASTLibFunCall(funName);

        std::cout << "At library function call Expr, func name = " << funName << "\n";
        
        if(ctx->calloutArgs() != nullptr)
        {
            for(auto argument : ctx->calloutArgs()->expr())
            {
                argExpr = visit(argument);

                if(argExpr != nullptr)
                {
                    ASTLibFunArg *arg = new ASTLibFunArg(argExpr);
                    libFun->addArg(arg);
                }
            }
        }
        
        return (ASTnode*) libFun;
    }

    virtual antlrcpp::Any visitIfStmt(miniCgrammarParser::IfStmtContext *ctx) override {
        
        std::cout << "At if stmt\n";

        ASTnode *condition = visit(ctx->expr());

        ASTStmtList *statements;

        if(ctx->statementList() != nullptr)
        {
            statements = visitStatementList(ctx->statementList());
        }
        else 
        {
            statements = nullptr;
        }

        ASTIfStmt *ifStat = new ASTIfStmt(condition, statements);

        return (ASTnode*) ifStat;
    }

    virtual antlrcpp::Any visitIfElseStmt(miniCgrammarParser::IfElseStmtContext *ctx) override {
        
        std::cout << "At if-else stmt\n";

        ASTnode *condition = visit(ctx->expr());

        ASTStmtList *ifStatements, *elseStatements;

        if(ctx->statementList().size() != 0)
        {
            ifStatements = visitStatementList(ctx->statementList()[0]);
            elseStatements = visitStatementList(ctx->statementList()[1]);
        }
        else 
        {
            ifStatements = nullptr;
            elseStatements = nullptr;
        }

        ASTIfElseStmt *ifElseStat = new ASTIfElseStmt(condition, ifStatements, elseStatements);

        return (ASTnode*) ifElseStat;
    }

    virtual antlrcpp::Any visitWhileStmt(miniCgrammarParser::WhileStmtContext *ctx) override {
        
        std::cout << "At while stmt\n";

        ASTnode *condition = visit(ctx->expr());

        ASTStmtList *statements;
        
        if(ctx->statementList() != nullptr)
        {
            statements = visitStatementList(ctx->statementList());
        }
        else 
        {
            statements = nullptr;
        }

        ASTWhileStmt *whileStat = new ASTWhileStmt(condition, statements);

        return (ASTnode*) whileStat;
    }

    virtual antlrcpp::Any visitForStmt(miniCgrammarParser::ForStmtContext *ctx) override {
        
        std::cout << "At for stmt\n";

        ASTnode* initLoc = visit(ctx->location()[0]);
        ASTnode* initExpr = visit(ctx->expr()[0]);

        ASTnode* conditionExpr = visit(ctx->expr()[1]);

        ASTnode* updateLoc = visit(ctx->location()[1]);
        ASTnode* updateExpr = visit(ctx->expr()[2]);

        std::string assignOp;

        if(ctx->Assign()[1] != nullptr)
        {
            assignOp = "=";
        }
        else if (ctx->PlusAssign() != nullptr)
        {
            assignOp = "+=";
        }
        else 
        {
            assignOp = "-=";
        }

        ASTStmtList *statements;

        if(ctx->statementList() != nullptr)
        {
            statements = visitStatementList(ctx->statementList());
        }
        else 
        {
            statements = nullptr;
        }

        ASTForStmt *forStat = new ASTForStmt(   initLoc, 
                                                initExpr, 
                                                conditionExpr, 
                                                updateLoc,
                                                assignOp,
                                                updateExpr,
                                                statements  );

        return (ASTnode*) forStat;
    }

};