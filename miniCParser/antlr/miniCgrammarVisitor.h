
// Generated from miniCgrammar.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "miniCgrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by miniCgrammarParser.
 */
class  miniCgrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by miniCgrammarParser.
   */
    virtual antlrcpp::Any visitProgram(miniCgrammarParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationList(miniCgrammarParser::DeclarationListContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(miniCgrammarParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(miniCgrammarParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariableDecl(miniCgrammarParser::VariableDeclContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclList(miniCgrammarParser::VariableDeclListContext *context) = 0;

    virtual antlrcpp::Any visitTwoDarray(miniCgrammarParser::TwoDarrayContext *context) = 0;

    virtual antlrcpp::Any visitOneDarray(miniCgrammarParser::OneDarrayContext *context) = 0;

    virtual antlrcpp::Any visitSimpleVariable(miniCgrammarParser::SimpleVariableContext *context) = 0;

    virtual antlrcpp::Any visitIntDataType(miniCgrammarParser::IntDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitCharDataType(miniCgrammarParser::CharDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitBoolDataType(miniCgrammarParser::BoolDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitLongDataType(miniCgrammarParser::LongDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitUintDataType(miniCgrammarParser::UintDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitUlongDataType(miniCgrammarParser::UlongDataTypeContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDecl(miniCgrammarParser::FunctionDeclContext *context) = 0;

    virtual antlrcpp::Any visitParamsList(miniCgrammarParser::ParamsListContext *context) = 0;

    virtual antlrcpp::Any visitStatementList(miniCgrammarParser::StatementListContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclStmt(miniCgrammarParser::VariableDeclStmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(miniCgrammarParser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitExprStmt(miniCgrammarParser::ExprStmtContext *context) = 0;

    virtual antlrcpp::Any visitConditionStmt(miniCgrammarParser::ConditionStmtContext *context) = 0;

    virtual antlrcpp::Any visitIterationStmt(miniCgrammarParser::IterationStmtContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(miniCgrammarParser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitBreakStmt(miniCgrammarParser::BreakStmtContext *context) = 0;

    virtual antlrcpp::Any visitContinueStmt(miniCgrammarParser::ContinueStmtContext *context) = 0;

    virtual antlrcpp::Any visitSimpleVarLocation(miniCgrammarParser::SimpleVarLocationContext *context) = 0;

    virtual antlrcpp::Any visitOneDarrayLocation(miniCgrammarParser::OneDarrayLocationContext *context) = 0;

    virtual antlrcpp::Any visitTwoDarrayLocation(miniCgrammarParser::TwoDarrayLocationContext *context) = 0;

    virtual antlrcpp::Any visitExponentExpr(miniCgrammarParser::ExponentExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(miniCgrammarParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitIntLitExpr(miniCgrammarParser::IntLitExprContext *context) = 0;

    virtual antlrcpp::Any visitStringLitExpr(miniCgrammarParser::StringLitExprContext *context) = 0;

    virtual antlrcpp::Any visitRelopExpr(miniCgrammarParser::RelopExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivModExpr(miniCgrammarParser::MulDivModExprContext *context) = 0;

    virtual antlrcpp::Any visitLogicalANDExpr(miniCgrammarParser::LogicalANDExprContext *context) = 0;

    virtual antlrcpp::Any visitParenthesesExpr(miniCgrammarParser::ParenthesesExprContext *context) = 0;

    virtual antlrcpp::Any visitLogicalORExpr(miniCgrammarParser::LogicalORExprContext *context) = 0;

    virtual antlrcpp::Any visitNegateExpr(miniCgrammarParser::NegateExprContext *context) = 0;

    virtual antlrcpp::Any visitCharLitExpr(miniCgrammarParser::CharLitExprContext *context) = 0;

    virtual antlrcpp::Any visitNotExpr(miniCgrammarParser::NotExprContext *context) = 0;

    virtual antlrcpp::Any visitTernaryExpr(miniCgrammarParser::TernaryExprContext *context) = 0;

    virtual antlrcpp::Any visitLocationExpr(miniCgrammarParser::LocationExprContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpr(miniCgrammarParser::FunctionCallExprContext *context) = 0;

    virtual antlrcpp::Any visitBoolLitExpr(miniCgrammarParser::BoolLitExprContext *context) = 0;

    virtual antlrcpp::Any visitEqualityExpr(miniCgrammarParser::EqualityExprContext *context) = 0;

    virtual antlrcpp::Any visitUserDefFnCall(miniCgrammarParser::UserDefFnCallContext *context) = 0;

    virtual antlrcpp::Any visitLibFnCall(miniCgrammarParser::LibFnCallContext *context) = 0;

    virtual antlrcpp::Any visitArgsList(miniCgrammarParser::ArgsListContext *context) = 0;

    virtual antlrcpp::Any visitCalloutArgs(miniCgrammarParser::CalloutArgsContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(miniCgrammarParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitIfElseStmt(miniCgrammarParser::IfElseStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(miniCgrammarParser::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitForStmt(miniCgrammarParser::ForStmtContext *context) = 0;


};

