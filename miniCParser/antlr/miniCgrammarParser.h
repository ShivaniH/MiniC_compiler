
// Generated from miniCgrammar.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  miniCgrammarParser : public antlr4::Parser {
public:
  enum {
    Bool = 1, Break = 2, Callout = 3, Char = 4, Continue = 5, Else = 6, 
    False = 7, Float = 8, For = 9, If = 10, Int = 11, Long = 12, Return = 13, 
    True = 14, Uint = 15, Ulong = 16, While = 17, LeftParen = 18, RightParen = 19, 
    LeftBracket = 20, RightBracket = 21, LeftBrace = 22, RightBrace = 23, 
    Less = 24, LessEqual = 25, Greater = 26, GreaterEqual = 27, Plus = 28, 
    Minus = 29, Star = 30, Div = 31, Mod = 32, Caret = 33, And = 34, Or = 35, 
    Not = 36, Question = 37, Colon = 38, Semi = 39, Comma = 40, SingleQuote = 41, 
    DoubleQuote = 42, Assign = 43, PlusAssign = 44, MinusAssign = 45, Equal = 46, 
    NotEqual = 47, CharLiteral = 48, StringLiteral = 49, BoolLiteral = 50, 
    IntegerLiteral = 51, Id = 52, Newline = 53, Whitespace = 54, Comment = 55, 
    BlockComment = 56
  };

  enum {
    RuleProgram = 0, RuleDeclarationList = 1, RuleDeclaration = 2, RuleVariableDecl = 3, 
    RuleVariableDeclList = 4, RuleSingleVarDecl = 5, RuleDataType = 6, RuleFunctionDecl = 7, 
    RuleParamsList = 8, RuleStatementList = 9, RuleStatement = 10, RuleLocation = 11, 
    RuleAssignOp = 12, RuleExpr = 13, RuleArrayExpr = 14, RuleFunctionCall = 15, 
    RuleArgsList = 16, RuleCalloutArgs = 17, RuleConditionalStmt = 18, RuleIterativeStmt = 19
  };

  miniCgrammarParser(antlr4::TokenStream *input);
  ~miniCgrammarParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class DeclarationListContext;
  class DeclarationContext;
  class VariableDeclContext;
  class VariableDeclListContext;
  class SingleVarDeclContext;
  class DataTypeContext;
  class FunctionDeclContext;
  class ParamsListContext;
  class StatementListContext;
  class StatementContext;
  class LocationContext;
  class AssignOpContext;
  class ExprContext;
  class ArrayExprContext;
  class FunctionCallContext;
  class ArgsListContext;
  class CalloutArgsContext;
  class ConditionalStmtContext;
  class IterativeStmtContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationListContext *declarationList();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  DeclarationListContext : public antlr4::ParserRuleContext {
  public:
    DeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    DeclarationListContext *declarationList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationListContext* declarationList();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclContext *variableDecl();
    FunctionDeclContext *functionDecl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  VariableDeclContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    VariableDeclListContext *variableDeclList();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclContext* variableDecl();

  class  VariableDeclListContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleVarDeclContext *singleVarDecl();
    antlr4::tree::TerminalNode *Comma();
    VariableDeclListContext *variableDeclList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclListContext* variableDeclList();

  class  SingleVarDeclContext : public antlr4::ParserRuleContext {
  public:
    SingleVarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IntegerLiteral();
    antlr4::tree::TerminalNode* IntegerLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SingleVarDeclContext* singleVarDecl();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *Uint();
    antlr4::tree::TerminalNode *Ulong();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DataTypeContext* dataType();

  class  FunctionDeclContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *Return();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *RightBrace();
    ParamsListContext *paramsList();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclContext* functionDecl();

  class  ParamsListContext : public antlr4::ParserRuleContext {
  public:
    ParamsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DataTypeContext *> dataType();
    DataTypeContext* dataType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamsListContext* paramsList();

  class  StatementListContext : public antlr4::ParserRuleContext {
  public:
    StatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementListContext* statementList();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclContext *variableDecl();
    LocationContext *location();
    AssignOpContext *assignOp();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Semi();
    ConditionalStmtContext *conditionalStmt();
    IterativeStmtContext *iterativeStmt();
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Continue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  LocationContext : public antlr4::ParserRuleContext {
  public:
    LocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<ArrayExprContext *> arrayExpr();
    ArrayExprContext* arrayExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocationContext* location();

  class  AssignOpContext : public antlr4::ParserRuleContext {
  public:
    AssignOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignOpContext* assignOp();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BoolLiteral();
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *CharLiteral();
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RightParen();
    LocationContext *location();
    FunctionCallContext *functionCall();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Question();
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  ArrayExprContext : public antlr4::ParserRuleContext {
  public:
    ArrayExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<ArrayExprContext *> arrayExpr();
    ArrayExprContext* arrayExpr(size_t i);
    antlr4::tree::TerminalNode *RightParen();
    LocationContext *location();
    FunctionCallContext *functionCall();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayExprContext* arrayExpr();
  ArrayExprContext* arrayExpr(int precedence);
  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ArgsListContext *argsList();
    antlr4::tree::TerminalNode *Callout();
    antlr4::tree::TerminalNode *StringLiteral();
    CalloutArgsContext *calloutArgs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionCallContext* functionCall();

  class  ArgsListContext : public antlr4::ParserRuleContext {
  public:
    ArgsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgsListContext* argsList();

  class  CalloutArgsContext : public antlr4::ParserRuleContext {
  public:
    CalloutArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CalloutArgsContext* calloutArgs();

  class  ConditionalStmtContext : public antlr4::ParserRuleContext {
  public:
    ConditionalStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<antlr4::tree::TerminalNode *> LeftBrace();
    antlr4::tree::TerminalNode* LeftBrace(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBrace();
    antlr4::tree::TerminalNode* RightBrace(size_t i);
    std::vector<StatementListContext *> statementList();
    StatementListContext* statementList(size_t i);
    antlr4::tree::TerminalNode *Else();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalStmtContext* conditionalStmt();

  class  IterativeStmtContext : public antlr4::ParserRuleContext {
  public:
    IterativeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StatementListContext *statementList();
    antlr4::tree::TerminalNode *For();
    std::vector<LocationContext *> location();
    LocationContext* location(size_t i);
    antlr4::tree::TerminalNode *Assign();
    std::vector<antlr4::tree::TerminalNode *> Semi();
    antlr4::tree::TerminalNode* Semi(size_t i);
    AssignOpContext *assignOp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IterativeStmtContext* iterativeStmt();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool arrayExprSempred(ArrayExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

