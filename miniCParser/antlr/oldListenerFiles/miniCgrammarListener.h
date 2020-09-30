
// Generated from miniCgrammar.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "miniCgrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by miniCgrammarParser.
 */
class  miniCgrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(miniCgrammarParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(miniCgrammarParser::ProgramContext *ctx) = 0;

  virtual void enterDeclarationList(miniCgrammarParser::DeclarationListContext *ctx) = 0;
  virtual void exitDeclarationList(miniCgrammarParser::DeclarationListContext *ctx) = 0;

  virtual void enterDeclaration(miniCgrammarParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(miniCgrammarParser::DeclarationContext *ctx) = 0;

  virtual void enterVariableDecl(miniCgrammarParser::VariableDeclContext *ctx) = 0;
  virtual void exitVariableDecl(miniCgrammarParser::VariableDeclContext *ctx) = 0;

  virtual void enterVariableDeclList(miniCgrammarParser::VariableDeclListContext *ctx) = 0;
  virtual void exitVariableDeclList(miniCgrammarParser::VariableDeclListContext *ctx) = 0;

  virtual void enterSingleVarDecl(miniCgrammarParser::SingleVarDeclContext *ctx) = 0;
  virtual void exitSingleVarDecl(miniCgrammarParser::SingleVarDeclContext *ctx) = 0;

  virtual void enterDataType(miniCgrammarParser::DataTypeContext *ctx) = 0;
  virtual void exitDataType(miniCgrammarParser::DataTypeContext *ctx) = 0;

  virtual void enterFunctionDecl(miniCgrammarParser::FunctionDeclContext *ctx) = 0;
  virtual void exitFunctionDecl(miniCgrammarParser::FunctionDeclContext *ctx) = 0;

  virtual void enterParamsList(miniCgrammarParser::ParamsListContext *ctx) = 0;
  virtual void exitParamsList(miniCgrammarParser::ParamsListContext *ctx) = 0;

  virtual void enterStatementList(miniCgrammarParser::StatementListContext *ctx) = 0;
  virtual void exitStatementList(miniCgrammarParser::StatementListContext *ctx) = 0;

  virtual void enterStatement(miniCgrammarParser::StatementContext *ctx) = 0;
  virtual void exitStatement(miniCgrammarParser::StatementContext *ctx) = 0;

  virtual void enterLocation(miniCgrammarParser::LocationContext *ctx) = 0;
  virtual void exitLocation(miniCgrammarParser::LocationContext *ctx) = 0;

  virtual void enterAssignOp(miniCgrammarParser::AssignOpContext *ctx) = 0;
  virtual void exitAssignOp(miniCgrammarParser::AssignOpContext *ctx) = 0;

  virtual void enterExpr(miniCgrammarParser::ExprContext *ctx) = 0;
  virtual void exitExpr(miniCgrammarParser::ExprContext *ctx) = 0;

  virtual void enterArrayExpr(miniCgrammarParser::ArrayExprContext *ctx) = 0;
  virtual void exitArrayExpr(miniCgrammarParser::ArrayExprContext *ctx) = 0;

  virtual void enterFunctionCall(miniCgrammarParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(miniCgrammarParser::FunctionCallContext *ctx) = 0;

  virtual void enterArgsList(miniCgrammarParser::ArgsListContext *ctx) = 0;
  virtual void exitArgsList(miniCgrammarParser::ArgsListContext *ctx) = 0;

  virtual void enterCalloutArgs(miniCgrammarParser::CalloutArgsContext *ctx) = 0;
  virtual void exitCalloutArgs(miniCgrammarParser::CalloutArgsContext *ctx) = 0;

  virtual void enterConditionalStmt(miniCgrammarParser::ConditionalStmtContext *ctx) = 0;
  virtual void exitConditionalStmt(miniCgrammarParser::ConditionalStmtContext *ctx) = 0;

  virtual void enterIterativeStmt(miniCgrammarParser::IterativeStmtContext *ctx) = 0;
  virtual void exitIterativeStmt(miniCgrammarParser::IterativeStmtContext *ctx) = 0;


};

