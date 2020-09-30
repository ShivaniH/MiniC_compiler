#include "miniCgrammarBaseVisitor.h"
#include "AST.h"

class ASTBuildVisitor : public miniCgrammarBaseVisitor {

    public:
    
    virtual antlrcpp::Any visitProgram(miniCgrammarParser::ProgramContext *ctx) override {
        std::cout << "visited program node\n";

        return (ASTnode*)(new ASTProgram());
        // return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitIntLitExpr(miniCgrammarParser::IntLitExprContext *ctx) override {

        int value = std::stoi(ctx->IntegerLiteral()->getSymbol()->getText());

        ASTIntLitNode intLitNode(value);
        ASTIntLitNode *intLitPtr;
        intLitPtr = &intLitNode;
        std::cout << "visited int lit node with value " << value << "\n";

        return (ASTnode*)(new ASTIntLitNode(value));

        /*
        antlrcpp::Any anyob(intLitNode);
        return anyob;
        */
    }

};