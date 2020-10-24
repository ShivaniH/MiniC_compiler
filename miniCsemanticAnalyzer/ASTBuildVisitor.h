#include "miniCgrammarBaseVisitor.h"
#include "AST.h"

/*
Visit nodes of the Parse tree created by Antlr and create an AST using info from those nodes
*/

class ASTBuildVisitor : public miniCgrammarBaseVisitor {

    public:
    
    virtual antlrcpp::Any visitProgram(miniCgrammarParser::ProgramContext *ctx) override {
        
        std::cout << "At program node\n";

        ASTProgram *rootNode = new ASTProgram();
        ASTDeclaration *decl;

        // for(auto declaration : visitDeclarationList(ctx->declarationList()))
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

        ASTDataType *adt = visit(ctx->dataType());

        std::cout << "At variable decl, data type = " << adt->getDataTypeName() << "\n";

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
        
        return (ASTDeclaration*) varDeclaration;
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
        
        ASTDataType *adt = visit(ctx->dataType());
        std::string functionName = ctx->Id()->getSymbol()->getText();

        cout << "At functionDecl, return data type = " << adt->getDataTypeName() << " func name = " << functionName << "\n";

        ASTExpr *retExpr = visit(ctx->expr());
        ASTReturnStmt *retStmt = new ASTReturnStmt(retExpr);

        ASTStmtList *stmtList = new ASTStmtList();

        ASTStmt *oneStmt;

        for(auto stat : ctx->statementList()->statement())
        {
            oneStmt = visit(stat);
            if(oneStmt != nullptr)
            {
                stmtList.addStatement(oneStmt);
            }
        }

        ASTFunctionDecl *fun = new ASTFunctionDecl(adt, functionName, stmtList, retStmt);
        
        // Maybe use a normal for loop rather than for each, so you can get the data type and id in one shot

        for(auto dtContext: ctx->paramsList()->dataType())
        {

        }

        for(auto idContext : ctx->paramsList()->Id())
        {

        }

        /*
        TODO: 
        2. param list
        3. statement list (body)
        */

    }

    virtual antlrcpp::Any visitParamsList(miniCgrammarParser::ParamsListContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitStatementList(miniCgrammarParser::StatementListContext *ctx) override {
        
        ASTStmtList *listStmts = new ASTStmtList();

        ASTStmt *oneStmt;

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
        
        return visit(ctx->variableDecl());

    }

    virtual antlrcpp::Any visitAssignmentStmt(miniCgrammarParser::AssignmentStmtContext *ctx) override {
        
        

    }

    virtual antlrcpp::Any visitExprStmt(miniCgrammarParser::ExprStmtContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitSimpleVarLocation(miniCgrammarParser::SimpleVarLocationContext *ctx) override {
        
        std::string locName = ctx->Id()->getSymbol()->getText();
        ASTSimpleVarLocation *simpleLoc = new ASTSimpleVarLocation(locName);
        return (ASTLocationExpr*) simpleLoc;

    }

    virtual antlrcpp::Any visitOneDarrayLocation(miniCgrammarParser::OneDarrayLocationContext *ctx) override {
        
        std::string locName = ctx->Id()->getSymbol()->getText();
        // int dim = 
        // ASTOneDarrayLocation *oneDLoc = new ASTOneDarrayLocation(locName, );
        // return (ASTLocationExpr*) oneDLoc;

    }

    virtual antlrcpp::Any visitTwoDarrayLocation(miniCgrammarParser::TwoDarrayLocationContext *ctx) override {
        return visitChildren(ctx);
    }


    /*      UNARY OPERATORS     */


    virtual antlrcpp::Any visitNegateExpr(miniCgrammarParser::NegateExprContext *ctx) override {
        
        std::cout << "At unary negation expr\n";
        ASTExpr *operand = visit(ctx->expr());
        ASTUnaryExpr *negUnary = new ASTUnaryExpr("-", operand);
        return (ASTExpr*) negUnary;

    }

    virtual antlrcpp::Any visitNotExpr(miniCgrammarParser::NotExprContext *ctx) override {
        
        std::cout << "At logical NOT expr\n";
        ASTExpr *operand = visit(ctx->expr());
        ASTUnaryExpr *notUnary = new ASTUnaryExpr("!", operand);
        return (ASTExpr*) notUnary;

    }

    /*      BINARY OPERATORS     */


    virtual antlrcpp::Any visitExponentExpr(miniCgrammarParser::ExponentExprContext *ctx) override {
        
        std::cout << "At exponent expr\n";
        ASTExpr *leftChild = ctx->expr()[0];
        ASTExpr *rightChild = ctx->expr()[1];
        ASTBinaryExpr *exponExpr = new ASTBinaryExpr("^", leftChild, rightChild);
        return (ASTExpr*) exponExpr;

    }

    virtual antlrcpp::Any visitMulDivModExpr(miniCgrammarParser::MulDivModExprContext *ctx) override {
         
        ASTExpr *leftChild = ctx->expr()[0];
        ASTExpr *rightChild = ctx->expr()[1];

        ASTBinaryExpr *muldivmodExpr;

        if(ctx->Star()->getSymbol()->getText() == '*')
        {
            muldivmodExpr = new ASTBinaryExpr('*', leftChild, rightChild);
            std::cout << "At multiplication expr\n";
        }
        else if (ctx->Div()->getSymbol()->getText() == '/')
        {
            muldivmodExpr = new ASTBinaryExpr('/', leftChild, rightChild);
            std::cout << "At division expr\n";
        }
        else {
            muldivmodExpr = new ASTBinaryExpr('%', leftChild, rightChild);
            std::cout << "At modulo expr\n";
        }

        return (ASTExpr*) muldivmodExpr;

    }


    virtual antlrcpp::Any visitFunctionCallExpr(miniCgrammarParser::FunctionCallExprContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitConditionStmt(miniCgrammarParser::ConditionStmtContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitIterationStmt(miniCgrammarParser::IterationStmtContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitReturnStmt(miniCgrammarParser::ReturnStmtContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitBreakStmt(miniCgrammarParser::BreakStmtContext *ctx) override {
        
        return (new ASTBreakStmt());
    }

    virtual antlrcpp::Any visitContinueStmt(miniCgrammarParser::ContinueStmtContext *ctx) override {
        
        return (new ASTContinueStmt());

    }




    virtual antlrcpp::Any visitIntLitExpr(miniCgrammarParser::IntLitExprContext *ctx) override {

        int value = std::stoi(ctx->IntegerLiteral()->getSymbol()->getText());

        std::cout << "visited int lit node with value " << value << "\n";

        return (ASTExpr*)(new ASTIntLitNode(value));
    }

    virtual antlrcpp::Any visitStringLitExpr(miniCgrammarParser::StringLitExprContext *ctx) override {

        std::string value = ctx->StringLiteral()->getSymbol()->getText();

        std::cout << "visited string lit node with value " << value << "\n";

        return (ASTExpr*)(new ASTStringLitNode(value));
    }

    virtual antlrcpp::Any visitCharLitExpr(miniCgrammarParser::CharLitExprContext *ctx) override {
        
        std::string value = ctx->CharLiteral()->getSymbol()->getText();

        std::cout << "visited char lit node with value " << value << "\n";

        return (ASTExpr*)(new ASTCharLitNode(value));

    }

    virtual antlrcpp::Any visitBoolLitExpr(miniCgrammarParser::BoolLitExprContext *ctx) override {

        std::string value = ctx->BoolLiteral()->getSymbol()->getText();

        std::cout << "visited bool lit node with value " << value << "\n";

        return (ASTExpr*)(new ASTBoolLitNode(value));
    }

};