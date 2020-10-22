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
        
        std::cout << "At variable decl\n";

        ASTDataType *adt = visit(ctx->dataType());

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

        std::cout << "At simple var\n";

        std::string vName = ctx->Id()->getSymbol()->getText();
        ASTSimpleVariableDecl *plainVar = new ASTSimpleVariableDecl(vName);
        
        return (ASTSingleVarDecl*) plainVar;
    }

    virtual antlrcpp::Any visitOneDarray(miniCgrammarParser::OneDarrayContext *ctx) override {
        
        std::cout << "At 1D array\n";

        std::string vName = ctx->Id()->getSymbol()->getText();
        int dim1 = std::stoi(ctx->IntegerLiteral()->getSymbol()->getText());

        AST1DArrayDecl *oneDArray = new AST1DArrayDecl(vName, dim1);

        return (ASTSingleVarDecl*) oneDArray;

    }

    virtual antlrcpp::Any visitTwoDarray(miniCgrammarParser::TwoDarrayContext *ctx) override {
        
        std::cout << "At 2D array\n";

        std::string vName = ctx->Id()->getSymbol()->getText();
        int dim1 = std::stoi(ctx->IntegerLiteral()[0]->getSymbol()->getText());
        int dim2 = std::stoi(ctx->IntegerLiteral()[1]->getSymbol()->getText());

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

    virtual antlrcpp::Any visitIntLitExpr(miniCgrammarParser::IntLitExprContext *ctx) override {

        int value = std::stoi(ctx->IntegerLiteral()->getSymbol()->getText());

        // ASTIntLitNode intLitNode(value);
        // ASTIntLitNode *intLitPtr;
        // intLitPtr = &intLitNode;
        std::cout << "visited int lit node with value " << value << "\n";

        // return (ASTnode*)(new ASTIntLitNode(value));
        return (new ASTIntLitNode(value));
    }

};