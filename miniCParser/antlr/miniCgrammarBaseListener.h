
// Generated from miniCgrammar.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "miniCgrammarListener.h"


/**
 * This class provides an empty implementation of miniCgrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  miniCgrammarBaseListener : public miniCgrammarListener {
public:

  virtual void enterProgram(miniCgrammarParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(miniCgrammarParser::ProgramContext * /*ctx*/) override { }

  virtual void enterDeclarationList(miniCgrammarParser::DeclarationListContext * /*ctx*/) override { }
  virtual void exitDeclarationList(miniCgrammarParser::DeclarationListContext * /*ctx*/) override { }

  virtual void enterDeclaration(miniCgrammarParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(miniCgrammarParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDecl(miniCgrammarParser::VariableDeclContext * /*ctx*/) override { }
  virtual void exitVariableDecl(miniCgrammarParser::VariableDeclContext * /*ctx*/) override { }

  virtual void enterVariableDeclList(miniCgrammarParser::VariableDeclListContext * /*ctx*/) override { }
  virtual void exitVariableDeclList(miniCgrammarParser::VariableDeclListContext * /*ctx*/) override { }

  virtual void enterSingleVarDecl(miniCgrammarParser::SingleVarDeclContext * /*ctx*/) override { }
  virtual void exitSingleVarDecl(miniCgrammarParser::SingleVarDeclContext * /*ctx*/) override { }

  virtual void enterDataType(miniCgrammarParser::DataTypeContext * /*ctx*/) override { }
  virtual void exitDataType(miniCgrammarParser::DataTypeContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(miniCgrammarParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(miniCgrammarParser::FunctionDeclContext * /*ctx*/) override { }

  virtual void enterParamsList(miniCgrammarParser::ParamsListContext * /*ctx*/) override { }
  virtual void exitParamsList(miniCgrammarParser::ParamsListContext * /*ctx*/) override { }

  virtual void enterStatementList(miniCgrammarParser::StatementListContext * /*ctx*/) override { }
  virtual void exitStatementList(miniCgrammarParser::StatementListContext * /*ctx*/) override { }

  virtual void enterStatement(miniCgrammarParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(miniCgrammarParser::StatementContext * /*ctx*/) override { }

  virtual void enterLocation(miniCgrammarParser::LocationContext * /*ctx*/) override { }
  virtual void exitLocation(miniCgrammarParser::LocationContext * /*ctx*/) override { }

  virtual void enterAssignOp(miniCgrammarParser::AssignOpContext * /*ctx*/) override { }
  virtual void exitAssignOp(miniCgrammarParser::AssignOpContext * /*ctx*/) override { }

  virtual void enterExpr(miniCgrammarParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(miniCgrammarParser::ExprContext * /*ctx*/) override { }

  virtual void enterArrayExpr(miniCgrammarParser::ArrayExprContext * /*ctx*/) override { }
  virtual void exitArrayExpr(miniCgrammarParser::ArrayExprContext * /*ctx*/) override { }

  virtual void enterFunctionCall(miniCgrammarParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(miniCgrammarParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterArgsList(miniCgrammarParser::ArgsListContext * /*ctx*/) override { }
  virtual void exitArgsList(miniCgrammarParser::ArgsListContext * /*ctx*/) override { }

  virtual void enterCalloutArgs(miniCgrammarParser::CalloutArgsContext * /*ctx*/) override { }
  virtual void exitCalloutArgs(miniCgrammarParser::CalloutArgsContext * /*ctx*/) override { }

  virtual void enterConditionalStmt(miniCgrammarParser::ConditionalStmtContext * /*ctx*/) override { }
  virtual void exitConditionalStmt(miniCgrammarParser::ConditionalStmtContext * /*ctx*/) override { }

  virtual void enterIterativeStmt(miniCgrammarParser::IterativeStmtContext * /*ctx*/) override { }
  virtual void exitIterativeStmt(miniCgrammarParser::IterativeStmtContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

