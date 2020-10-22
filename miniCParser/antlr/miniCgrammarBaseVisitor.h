
// Generated from miniCgrammar.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "miniCgrammarVisitor.h"


/**
 * This class provides an empty implementation of miniCgrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  miniCgrammarBaseVisitor : public miniCgrammarVisitor {
public:

  virtual antlrcpp::Any visitProgram(miniCgrammarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationList(miniCgrammarParser::DeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(miniCgrammarParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(miniCgrammarParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDecl(miniCgrammarParser::VariableDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclList(miniCgrammarParser::VariableDeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTwoDarray(miniCgrammarParser::TwoDarrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOneDarray(miniCgrammarParser::OneDarrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleVariable(miniCgrammarParser::SimpleVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntDataType(miniCgrammarParser::IntDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharDataType(miniCgrammarParser::CharDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolDataType(miniCgrammarParser::BoolDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLongDataType(miniCgrammarParser::LongDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUintDataType(miniCgrammarParser::UintDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUlongDataType(miniCgrammarParser::UlongDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDecl(miniCgrammarParser::FunctionDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamsList(miniCgrammarParser::ParamsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementList(miniCgrammarParser::StatementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclStmt(miniCgrammarParser::VariableDeclStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStmt(miniCgrammarParser::AssignmentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprStmt(miniCgrammarParser::ExprStmtContext *ctx) override {
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
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStmt(miniCgrammarParser::ContinueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleVarLocation(miniCgrammarParser::SimpleVarLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOneDarrayLocation(miniCgrammarParser::OneDarrayLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTwoDarrayLocation(miniCgrammarParser::TwoDarrayLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualAssign(miniCgrammarParser::EqualAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlusAssign(miniCgrammarParser::PlusAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMinusAssign(miniCgrammarParser::MinusAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExponentExpr(miniCgrammarParser::ExponentExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(miniCgrammarParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntLitExpr(miniCgrammarParser::IntLitExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLitExpr(miniCgrammarParser::StringLitExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelopExpr(miniCgrammarParser::RelopExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivModExpr(miniCgrammarParser::MulDivModExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalANDExpr(miniCgrammarParser::LogicalANDExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesesExpr(miniCgrammarParser::ParenthesesExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalORExpr(miniCgrammarParser::LogicalORExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegateExpr(miniCgrammarParser::NegateExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharLitExpr(miniCgrammarParser::CharLitExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExpr(miniCgrammarParser::NotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernaryExpr(miniCgrammarParser::TernaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocationExpr(miniCgrammarParser::LocationExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallExpr(miniCgrammarParser::FunctionCallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolLitExpr(miniCgrammarParser::BoolLitExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityExpr(miniCgrammarParser::EqualityExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalANDArrayExpr(miniCgrammarParser::LogicalANDArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubArrayExpr(miniCgrammarParser::AddSubArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocationArrayExpr(miniCgrammarParser::LocationArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityArrayExpr(miniCgrammarParser::EqualityArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExponentArrayExpr(miniCgrammarParser::ExponentArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalORArrayExpr(miniCgrammarParser::LogicalORArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotArrayExpr(miniCgrammarParser::NotArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivModArrayExpr(miniCgrammarParser::MulDivModArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesesArrayExpr(miniCgrammarParser::ParenthesesArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallArrayExpr(miniCgrammarParser::FunctionCallArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelopArrayExpr(miniCgrammarParser::RelopArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntLitArrayExpr(miniCgrammarParser::IntLitArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserDefFnCall(miniCgrammarParser::UserDefFnCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibFnCall(miniCgrammarParser::LibFnCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgsList(miniCgrammarParser::ArgsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCalloutArgs(miniCgrammarParser::CalloutArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt(miniCgrammarParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfElseStmt(miniCgrammarParser::IfElseStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStmt(miniCgrammarParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStmt(miniCgrammarParser::ForStmtContext *ctx) override {
    return visitChildren(ctx);
  }


};

