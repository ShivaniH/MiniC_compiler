
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  DeclarationListContext : public antlr4::ParserRuleContext {
  public:
    DeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationListContext* declarationList();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclarationContext() = default;
    void copyFrom(DeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionDeclarationContext : public DeclarationContext {
  public:
    FunctionDeclarationContext(DeclarationContext *ctx);

    FunctionDeclContext *functionDecl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableDeclarationContext : public DeclarationContext {
  public:
    VariableDeclarationContext(DeclarationContext *ctx);

    VariableDeclContext *variableDecl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclarationContext* declaration();

  class  VariableDeclContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    VariableDeclListContext *variableDeclList();
    antlr4::tree::TerminalNode *Semi();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclContext* variableDecl();

  class  VariableDeclListContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VariableDeclListContext() = default;
    void copyFrom(VariableDeclListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SingleVariableContext : public VariableDeclListContext {
  public:
    SingleVariableContext(VariableDeclListContext *ctx);

    SingleVarDeclContext *singleVarDecl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultipleCSVariablesContext : public VariableDeclListContext {
  public:
    MultipleCSVariablesContext(VariableDeclListContext *ctx);

    SingleVarDeclContext *singleVarDecl();
    antlr4::tree::TerminalNode *Comma();
    VariableDeclListContext *variableDeclList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VariableDeclListContext* variableDeclList();

  class  SingleVarDeclContext : public antlr4::ParserRuleContext {
  public:
    SingleVarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SingleVarDeclContext() = default;
    void copyFrom(SingleVarDeclContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OneDarrayContext : public SingleVarDeclContext {
  public:
    OneDarrayContext(SingleVarDeclContext *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *RightBracket();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleVariableContext : public SingleVarDeclContext {
  public:
    SimpleVariableContext(SingleVarDeclContext *ctx);

    antlr4::tree::TerminalNode *Id();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TwoDarrayContext : public SingleVarDeclContext {
  public:
    TwoDarrayContext(SingleVarDeclContext *ctx);

    antlr4::tree::TerminalNode *Id();
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IntegerLiteral();
    antlr4::tree::TerminalNode* IntegerLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SingleVarDeclContext* singleVarDecl();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DataTypeContext() = default;
    void copyFrom(DataTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BoolDataTypeContext : public DataTypeContext {
  public:
    BoolDataTypeContext(DataTypeContext *ctx);

    antlr4::tree::TerminalNode *Bool();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UlongDataTypeContext : public DataTypeContext {
  public:
    UlongDataTypeContext(DataTypeContext *ctx);

    antlr4::tree::TerminalNode *Ulong();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntDataTypeContext : public DataTypeContext {
  public:
    IntDataTypeContext(DataTypeContext *ctx);

    antlr4::tree::TerminalNode *Int();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UintDataTypeContext : public DataTypeContext {
  public:
    UintDataTypeContext(DataTypeContext *ctx);

    antlr4::tree::TerminalNode *Uint();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharDataTypeContext : public DataTypeContext {
  public:
    CharDataTypeContext(DataTypeContext *ctx);

    antlr4::tree::TerminalNode *Char();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LongDataTypeContext : public DataTypeContext {
  public:
    LongDataTypeContext(DataTypeContext *ctx);

    antlr4::tree::TerminalNode *Long();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamsListContext* paramsList();

  class  StatementListContext : public antlr4::ParserRuleContext {
  public:
    StatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementListContext* statementList();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprStmtContext : public StatementContext {
  public:
    ExprStmtContext(StatementContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *Semi();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BreakStmtContext : public StatementContext {
  public:
    BreakStmtContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Semi();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableDeclStmtContext : public StatementContext {
  public:
    VariableDeclStmtContext(StatementContext *ctx);

    VariableDeclContext *variableDecl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IterationStmtContext : public StatementContext {
  public:
    IterationStmtContext(StatementContext *ctx);

    IterativeStmtContext *iterativeStmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReturnStmtContext : public StatementContext {
  public:
    ReturnStmtContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *Return();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Semi();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ContinueStmtContext : public StatementContext {
  public:
    ContinueStmtContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Semi();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignmentStmtContext : public StatementContext {
  public:
    AssignmentStmtContext(StatementContext *ctx);

    LocationContext *location();
    AssignOpContext *assignOp();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Semi();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConditionStmtContext : public StatementContext {
  public:
    ConditionStmtContext(StatementContext *ctx);

    ConditionalStmtContext *conditionalStmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  LocationContext : public antlr4::ParserRuleContext {
  public:
    LocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LocationContext() = default;
    void copyFrom(LocationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TwoDarrayLocationContext : public LocationContext {
  public:
    TwoDarrayLocationContext(LocationContext *ctx);

    antlr4::tree::TerminalNode *Id();
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<ArrayExprContext *> arrayExpr();
    ArrayExprContext* arrayExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleVarLocationContext : public LocationContext {
  public:
    SimpleVarLocationContext(LocationContext *ctx);

    antlr4::tree::TerminalNode *Id();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OneDarrayLocationContext : public LocationContext {
  public:
    OneDarrayLocationContext(LocationContext *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *LeftBracket();
    ArrayExprContext *arrayExpr();
    antlr4::tree::TerminalNode *RightBracket();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LocationContext* location();

  class  AssignOpContext : public antlr4::ParserRuleContext {
  public:
    AssignOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignOpContext() = default;
    void copyFrom(AssignOpContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PlusAssignContext : public AssignOpContext {
  public:
    PlusAssignContext(AssignOpContext *ctx);

    antlr4::tree::TerminalNode *PlusAssign();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualAssignContext : public AssignOpContext {
  public:
    EqualAssignContext(AssignOpContext *ctx);

    antlr4::tree::TerminalNode *Assign();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MinusAssignContext : public AssignOpContext {
  public:
    MinusAssignContext(AssignOpContext *ctx);

    antlr4::tree::TerminalNode *MinusAssign();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignOpContext* assignOp();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExponentExprContext : public ExprContext {
  public:
    ExponentExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Caret();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubExprContext : public ExprContext {
  public:
    AddSubExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntLitExprContext : public ExprContext {
  public:
    IntLitExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *IntegerLiteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringLitExprContext : public ExprContext {
  public:
    StringLitExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *StringLiteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelopExprContext : public ExprContext {
  public:
    RelopExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivModExprContext : public ExprContext {
  public:
    MulDivModExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalANDExprContext : public ExprContext {
  public:
    LogicalANDExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *And();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesesExprContext : public ExprContext {
  public:
    ParenthesesExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalORExprContext : public ExprContext {
  public:
    LogicalORExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Or();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegateExprContext : public ExprContext {
  public:
    NegateExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Minus();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharLitExprContext : public ExprContext {
  public:
    CharLitExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CharLiteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExprContext : public ExprContext {
  public:
    NotExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *Not();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TernaryExprContext : public ExprContext {
  public:
    TernaryExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Question();
    antlr4::tree::TerminalNode *Colon();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LocationExprContext : public ExprContext {
  public:
    LocationExprContext(ExprContext *ctx);

    LocationContext *location();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallExprContext : public ExprContext {
  public:
    FunctionCallExprContext(ExprContext *ctx);

    FunctionCallContext *functionCall();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolLitExprContext : public ExprContext {
  public:
    BoolLitExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *BoolLiteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualityExprContext : public ExprContext {
  public:
    EqualityExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  ArrayExprContext : public antlr4::ParserRuleContext {
  public:
    ArrayExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArrayExprContext() = default;
    void copyFrom(ArrayExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LogicalANDArrayExprContext : public ArrayExprContext {
  public:
    LogicalANDArrayExprContext(ArrayExprContext *ctx);

    std::vector<ArrayExprContext *> arrayExpr();
    ArrayExprContext* arrayExpr(size_t i);
    antlr4::tree::TerminalNode *And();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubArrayExprContext : public ArrayExprContext {
  public:
    AddSubArrayExprContext(ArrayExprContext *ctx);

    std::vector<ArrayExprContext *> arrayExpr();
    ArrayExprContext* arrayExpr(size_t i);
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LocationArrayExprContext : public ArrayExprContext {
  public:
    LocationArrayExprContext(ArrayExprContext *ctx);

    LocationContext *location();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualityArrayExprContext : public ArrayExprContext {
  public:
    EqualityArrayExprContext(ArrayExprContext *ctx);

    std::vector<ArrayExprContext *> arrayExpr();
    ArrayExprContext* arrayExpr(size_t i);
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExponentArrayExprContext : public ArrayExprContext {
  public:
    ExponentArrayExprContext(ArrayExprContext *ctx);

    std::vector<ArrayExprContext *> arrayExpr();
    ArrayExprContext* arrayExpr(size_t i);
    antlr4::tree::TerminalNode *Caret();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalORArrayExprContext : public ArrayExprContext {
  public:
    LogicalORArrayExprContext(ArrayExprContext *ctx);

    std::vector<ArrayExprContext *> arrayExpr();
    ArrayExprContext* arrayExpr(size_t i);
    antlr4::tree::TerminalNode *Or();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotArrayExprContext : public ArrayExprContext {
  public:
    NotArrayExprContext(ArrayExprContext *ctx);

    antlr4::tree::TerminalNode *Not();
    ArrayExprContext *arrayExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivModArrayExprContext : public ArrayExprContext {
  public:
    MulDivModArrayExprContext(ArrayExprContext *ctx);

    std::vector<ArrayExprContext *> arrayExpr();
    ArrayExprContext* arrayExpr(size_t i);
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesesArrayExprContext : public ArrayExprContext {
  public:
    ParenthesesArrayExprContext(ArrayExprContext *ctx);

    antlr4::tree::TerminalNode *LeftParen();
    ArrayExprContext *arrayExpr();
    antlr4::tree::TerminalNode *RightParen();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallArrayExprContext : public ArrayExprContext {
  public:
    FunctionCallArrayExprContext(ArrayExprContext *ctx);

    FunctionCallContext *functionCall();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelopArrayExprContext : public ArrayExprContext {
  public:
    RelopArrayExprContext(ArrayExprContext *ctx);

    std::vector<ArrayExprContext *> arrayExpr();
    ArrayExprContext* arrayExpr(size_t i);
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntLitArrayExprContext : public ArrayExprContext {
  public:
    IntLitArrayExprContext(ArrayExprContext *ctx);

    antlr4::tree::TerminalNode *IntegerLiteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArrayExprContext* arrayExpr();
  ArrayExprContext* arrayExpr(int precedence);
  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunctionCallContext() = default;
    void copyFrom(FunctionCallContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LibFnCallContext : public FunctionCallContext {
  public:
    LibFnCallContext(FunctionCallContext *ctx);

    antlr4::tree::TerminalNode *Callout();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *RightParen();
    CalloutArgsContext *calloutArgs();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UserDefFnCallContext : public FunctionCallContext {
  public:
    UserDefFnCallContext(FunctionCallContext *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ArgsListContext *argsList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CalloutArgsContext* calloutArgs();

  class  ConditionalStmtContext : public antlr4::ParserRuleContext {
  public:
    ConditionalStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConditionalStmtContext() = default;
    void copyFrom(ConditionalStmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfStmtContext : public ConditionalStmtContext {
  public:
    IfStmtContext(ConditionalStmtContext *ctx);

    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StatementListContext *statementList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfElseStmtContext : public ConditionalStmtContext {
  public:
    IfElseStmtContext(ConditionalStmtContext *ctx);

    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<antlr4::tree::TerminalNode *> LeftBrace();
    antlr4::tree::TerminalNode* LeftBrace(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBrace();
    antlr4::tree::TerminalNode* RightBrace(size_t i);
    antlr4::tree::TerminalNode *Else();
    std::vector<StatementListContext *> statementList();
    StatementListContext* statementList(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConditionalStmtContext* conditionalStmt();

  class  IterativeStmtContext : public antlr4::ParserRuleContext {
  public:
    IterativeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IterativeStmtContext() = default;
    void copyFrom(IterativeStmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ForStmtContext : public IterativeStmtContext {
  public:
    ForStmtContext(IterativeStmtContext *ctx);

    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<LocationContext *> location();
    LocationContext* location(size_t i);
    antlr4::tree::TerminalNode *Assign();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Semi();
    antlr4::tree::TerminalNode* Semi(size_t i);
    AssignOpContext *assignOp();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StatementListContext *statementList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileStmtContext : public IterativeStmtContext {
  public:
    WhileStmtContext(IterativeStmtContext *ctx);

    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StatementListContext *statementList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
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

