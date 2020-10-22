
// Generated from miniCgrammar.g4 by ANTLR 4.8


#include "miniCgrammarVisitor.h"

#include "miniCgrammarParser.h"


using namespace antlrcpp;
using namespace antlr4;

miniCgrammarParser::miniCgrammarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

miniCgrammarParser::~miniCgrammarParser() {
  delete _interpreter;
}

std::string miniCgrammarParser::getGrammarFileName() const {
  return "miniCgrammar.g4";
}

const std::vector<std::string>& miniCgrammarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& miniCgrammarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

miniCgrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

miniCgrammarParser::DeclarationListContext* miniCgrammarParser::ProgramContext::declarationList() {
  return getRuleContext<miniCgrammarParser::DeclarationListContext>(0);
}

tree::TerminalNode* miniCgrammarParser::ProgramContext::EOF() {
  return getToken(miniCgrammarParser::EOF, 0);
}


size_t miniCgrammarParser::ProgramContext::getRuleIndex() const {
  return miniCgrammarParser::RuleProgram;
}


antlrcpp::Any miniCgrammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::ProgramContext* miniCgrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, miniCgrammarParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    declarationList();
    setState(41);
    match(miniCgrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationListContext ------------------------------------------------------------------

miniCgrammarParser::DeclarationListContext::DeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<miniCgrammarParser::DeclarationContext *> miniCgrammarParser::DeclarationListContext::declaration() {
  return getRuleContexts<miniCgrammarParser::DeclarationContext>();
}

miniCgrammarParser::DeclarationContext* miniCgrammarParser::DeclarationListContext::declaration(size_t i) {
  return getRuleContext<miniCgrammarParser::DeclarationContext>(i);
}


size_t miniCgrammarParser::DeclarationListContext::getRuleIndex() const {
  return miniCgrammarParser::RuleDeclarationList;
}


antlrcpp::Any miniCgrammarParser::DeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::DeclarationListContext* miniCgrammarParser::declarationList() {
  DeclarationListContext *_localctx = _tracker.createInstance<DeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 2, miniCgrammarParser::RuleDeclarationList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(43);
      declaration();
      setState(46); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << miniCgrammarParser::Bool)
      | (1ULL << miniCgrammarParser::Char)
      | (1ULL << miniCgrammarParser::Int)
      | (1ULL << miniCgrammarParser::Long)
      | (1ULL << miniCgrammarParser::Uint)
      | (1ULL << miniCgrammarParser::Ulong))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

miniCgrammarParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::DeclarationContext::getRuleIndex() const {
  return miniCgrammarParser::RuleDeclaration;
}

void miniCgrammarParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

miniCgrammarParser::FunctionDeclContext* miniCgrammarParser::FunctionDeclarationContext::functionDecl() {
  return getRuleContext<miniCgrammarParser::FunctionDeclContext>(0);
}

miniCgrammarParser::FunctionDeclarationContext::FunctionDeclarationContext(DeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableDeclarationContext ------------------------------------------------------------------

miniCgrammarParser::VariableDeclContext* miniCgrammarParser::VariableDeclarationContext::variableDecl() {
  return getRuleContext<miniCgrammarParser::VariableDeclContext>(0);
}

miniCgrammarParser::VariableDeclarationContext::VariableDeclarationContext(DeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}
miniCgrammarParser::DeclarationContext* miniCgrammarParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, miniCgrammarParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<miniCgrammarParser::VariableDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(48);
      variableDecl();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<miniCgrammarParser::FunctionDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(49);
      functionDecl();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclContext ------------------------------------------------------------------

miniCgrammarParser::VariableDeclContext::VariableDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

miniCgrammarParser::DataTypeContext* miniCgrammarParser::VariableDeclContext::dataType() {
  return getRuleContext<miniCgrammarParser::DataTypeContext>(0);
}

miniCgrammarParser::VariableDeclListContext* miniCgrammarParser::VariableDeclContext::variableDeclList() {
  return getRuleContext<miniCgrammarParser::VariableDeclListContext>(0);
}

tree::TerminalNode* miniCgrammarParser::VariableDeclContext::Semi() {
  return getToken(miniCgrammarParser::Semi, 0);
}


size_t miniCgrammarParser::VariableDeclContext::getRuleIndex() const {
  return miniCgrammarParser::RuleVariableDecl;
}


antlrcpp::Any miniCgrammarParser::VariableDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitVariableDecl(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::VariableDeclContext* miniCgrammarParser::variableDecl() {
  VariableDeclContext *_localctx = _tracker.createInstance<VariableDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, miniCgrammarParser::RuleVariableDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    dataType();
    setState(53);
    variableDeclList();
    setState(54);
    match(miniCgrammarParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclListContext ------------------------------------------------------------------

miniCgrammarParser::VariableDeclListContext::VariableDeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<miniCgrammarParser::SingleVarDeclContext *> miniCgrammarParser::VariableDeclListContext::singleVarDecl() {
  return getRuleContexts<miniCgrammarParser::SingleVarDeclContext>();
}

miniCgrammarParser::SingleVarDeclContext* miniCgrammarParser::VariableDeclListContext::singleVarDecl(size_t i) {
  return getRuleContext<miniCgrammarParser::SingleVarDeclContext>(i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::VariableDeclListContext::Comma() {
  return getTokens(miniCgrammarParser::Comma);
}

tree::TerminalNode* miniCgrammarParser::VariableDeclListContext::Comma(size_t i) {
  return getToken(miniCgrammarParser::Comma, i);
}


size_t miniCgrammarParser::VariableDeclListContext::getRuleIndex() const {
  return miniCgrammarParser::RuleVariableDeclList;
}


antlrcpp::Any miniCgrammarParser::VariableDeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitVariableDeclList(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::VariableDeclListContext* miniCgrammarParser::variableDeclList() {
  VariableDeclListContext *_localctx = _tracker.createInstance<VariableDeclListContext>(_ctx, getState());
  enterRule(_localctx, 8, miniCgrammarParser::RuleVariableDeclList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    singleVarDecl();
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == miniCgrammarParser::Comma) {
      setState(57);
      match(miniCgrammarParser::Comma);
      setState(58);
      singleVarDecl();
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleVarDeclContext ------------------------------------------------------------------

miniCgrammarParser::SingleVarDeclContext::SingleVarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::SingleVarDeclContext::getRuleIndex() const {
  return miniCgrammarParser::RuleSingleVarDecl;
}

void miniCgrammarParser::SingleVarDeclContext::copyFrom(SingleVarDeclContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OneDarrayContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::OneDarrayContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

tree::TerminalNode* miniCgrammarParser::OneDarrayContext::LeftBracket() {
  return getToken(miniCgrammarParser::LeftBracket, 0);
}

tree::TerminalNode* miniCgrammarParser::OneDarrayContext::IntegerLiteral() {
  return getToken(miniCgrammarParser::IntegerLiteral, 0);
}

tree::TerminalNode* miniCgrammarParser::OneDarrayContext::RightBracket() {
  return getToken(miniCgrammarParser::RightBracket, 0);
}

miniCgrammarParser::OneDarrayContext::OneDarrayContext(SingleVarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::OneDarrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitOneDarray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleVariableContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::SimpleVariableContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

miniCgrammarParser::SimpleVariableContext::SimpleVariableContext(SingleVarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::SimpleVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitSimpleVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TwoDarrayContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::TwoDarrayContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::TwoDarrayContext::LeftBracket() {
  return getTokens(miniCgrammarParser::LeftBracket);
}

tree::TerminalNode* miniCgrammarParser::TwoDarrayContext::LeftBracket(size_t i) {
  return getToken(miniCgrammarParser::LeftBracket, i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::TwoDarrayContext::IntegerLiteral() {
  return getTokens(miniCgrammarParser::IntegerLiteral);
}

tree::TerminalNode* miniCgrammarParser::TwoDarrayContext::IntegerLiteral(size_t i) {
  return getToken(miniCgrammarParser::IntegerLiteral, i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::TwoDarrayContext::RightBracket() {
  return getTokens(miniCgrammarParser::RightBracket);
}

tree::TerminalNode* miniCgrammarParser::TwoDarrayContext::RightBracket(size_t i) {
  return getToken(miniCgrammarParser::RightBracket, i);
}

miniCgrammarParser::TwoDarrayContext::TwoDarrayContext(SingleVarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::TwoDarrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitTwoDarray(this);
  else
    return visitor->visitChildren(this);
}
miniCgrammarParser::SingleVarDeclContext* miniCgrammarParser::singleVarDecl() {
  SingleVarDeclContext *_localctx = _tracker.createInstance<SingleVarDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, miniCgrammarParser::RuleSingleVarDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<SingleVarDeclContext *>(_tracker.createInstance<miniCgrammarParser::TwoDarrayContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(64);
      match(miniCgrammarParser::Id);
      setState(65);
      match(miniCgrammarParser::LeftBracket);
      setState(66);
      match(miniCgrammarParser::IntegerLiteral);
      setState(67);
      match(miniCgrammarParser::RightBracket);
      setState(68);
      match(miniCgrammarParser::LeftBracket);
      setState(69);
      match(miniCgrammarParser::IntegerLiteral);
      setState(70);
      match(miniCgrammarParser::RightBracket);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<SingleVarDeclContext *>(_tracker.createInstance<miniCgrammarParser::OneDarrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(71);
      match(miniCgrammarParser::Id);
      setState(72);
      match(miniCgrammarParser::LeftBracket);
      setState(73);
      match(miniCgrammarParser::IntegerLiteral);
      setState(74);
      match(miniCgrammarParser::RightBracket);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<SingleVarDeclContext *>(_tracker.createInstance<miniCgrammarParser::SimpleVariableContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(75);
      match(miniCgrammarParser::Id);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataTypeContext ------------------------------------------------------------------

miniCgrammarParser::DataTypeContext::DataTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::DataTypeContext::getRuleIndex() const {
  return miniCgrammarParser::RuleDataType;
}

void miniCgrammarParser::DataTypeContext::copyFrom(DataTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BoolDataTypeContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::BoolDataTypeContext::Bool() {
  return getToken(miniCgrammarParser::Bool, 0);
}

miniCgrammarParser::BoolDataTypeContext::BoolDataTypeContext(DataTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::BoolDataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitBoolDataType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UlongDataTypeContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::UlongDataTypeContext::Ulong() {
  return getToken(miniCgrammarParser::Ulong, 0);
}

miniCgrammarParser::UlongDataTypeContext::UlongDataTypeContext(DataTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::UlongDataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitUlongDataType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntDataTypeContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::IntDataTypeContext::Int() {
  return getToken(miniCgrammarParser::Int, 0);
}

miniCgrammarParser::IntDataTypeContext::IntDataTypeContext(DataTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::IntDataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitIntDataType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UintDataTypeContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::UintDataTypeContext::Uint() {
  return getToken(miniCgrammarParser::Uint, 0);
}

miniCgrammarParser::UintDataTypeContext::UintDataTypeContext(DataTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::UintDataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitUintDataType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharDataTypeContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::CharDataTypeContext::Char() {
  return getToken(miniCgrammarParser::Char, 0);
}

miniCgrammarParser::CharDataTypeContext::CharDataTypeContext(DataTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::CharDataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitCharDataType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LongDataTypeContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::LongDataTypeContext::Long() {
  return getToken(miniCgrammarParser::Long, 0);
}

miniCgrammarParser::LongDataTypeContext::LongDataTypeContext(DataTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::LongDataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitLongDataType(this);
  else
    return visitor->visitChildren(this);
}
miniCgrammarParser::DataTypeContext* miniCgrammarParser::dataType() {
  DataTypeContext *_localctx = _tracker.createInstance<DataTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, miniCgrammarParser::RuleDataType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case miniCgrammarParser::Int: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<miniCgrammarParser::IntDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(78);
        match(miniCgrammarParser::Int);
        break;
      }

      case miniCgrammarParser::Char: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<miniCgrammarParser::CharDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(79);
        match(miniCgrammarParser::Char);
        break;
      }

      case miniCgrammarParser::Bool: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<miniCgrammarParser::BoolDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(80);
        match(miniCgrammarParser::Bool);
        break;
      }

      case miniCgrammarParser::Long: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<miniCgrammarParser::LongDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(81);
        match(miniCgrammarParser::Long);
        break;
      }

      case miniCgrammarParser::Uint: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<miniCgrammarParser::UintDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(82);
        match(miniCgrammarParser::Uint);
        break;
      }

      case miniCgrammarParser::Ulong: {
        _localctx = dynamic_cast<DataTypeContext *>(_tracker.createInstance<miniCgrammarParser::UlongDataTypeContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(83);
        match(miniCgrammarParser::Ulong);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

miniCgrammarParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

miniCgrammarParser::DataTypeContext* miniCgrammarParser::FunctionDeclContext::dataType() {
  return getRuleContext<miniCgrammarParser::DataTypeContext>(0);
}

tree::TerminalNode* miniCgrammarParser::FunctionDeclContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

tree::TerminalNode* miniCgrammarParser::FunctionDeclContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

tree::TerminalNode* miniCgrammarParser::FunctionDeclContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

tree::TerminalNode* miniCgrammarParser::FunctionDeclContext::LeftBrace() {
  return getToken(miniCgrammarParser::LeftBrace, 0);
}

tree::TerminalNode* miniCgrammarParser::FunctionDeclContext::Return() {
  return getToken(miniCgrammarParser::Return, 0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::FunctionDeclContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::FunctionDeclContext::Semi() {
  return getToken(miniCgrammarParser::Semi, 0);
}

tree::TerminalNode* miniCgrammarParser::FunctionDeclContext::RightBrace() {
  return getToken(miniCgrammarParser::RightBrace, 0);
}

miniCgrammarParser::ParamsListContext* miniCgrammarParser::FunctionDeclContext::paramsList() {
  return getRuleContext<miniCgrammarParser::ParamsListContext>(0);
}

miniCgrammarParser::StatementListContext* miniCgrammarParser::FunctionDeclContext::statementList() {
  return getRuleContext<miniCgrammarParser::StatementListContext>(0);
}


size_t miniCgrammarParser::FunctionDeclContext::getRuleIndex() const {
  return miniCgrammarParser::RuleFunctionDecl;
}


antlrcpp::Any miniCgrammarParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::FunctionDeclContext* miniCgrammarParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 14, miniCgrammarParser::RuleFunctionDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    dataType();
    setState(87);
    match(miniCgrammarParser::Id);
    setState(88);
    match(miniCgrammarParser::LeftParen);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << miniCgrammarParser::Bool)
      | (1ULL << miniCgrammarParser::Char)
      | (1ULL << miniCgrammarParser::Int)
      | (1ULL << miniCgrammarParser::Long)
      | (1ULL << miniCgrammarParser::Uint)
      | (1ULL << miniCgrammarParser::Ulong))) != 0)) {
      setState(89);
      paramsList();
    }
    setState(92);
    match(miniCgrammarParser::RightParen);
    setState(93);
    match(miniCgrammarParser::LeftBrace);
    setState(95);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(94);
      statementList();
      break;
    }

    }
    setState(97);
    match(miniCgrammarParser::Return);
    setState(98);
    expr(0);
    setState(99);
    match(miniCgrammarParser::Semi);
    setState(100);
    match(miniCgrammarParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsListContext ------------------------------------------------------------------

miniCgrammarParser::ParamsListContext::ParamsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<miniCgrammarParser::DataTypeContext *> miniCgrammarParser::ParamsListContext::dataType() {
  return getRuleContexts<miniCgrammarParser::DataTypeContext>();
}

miniCgrammarParser::DataTypeContext* miniCgrammarParser::ParamsListContext::dataType(size_t i) {
  return getRuleContext<miniCgrammarParser::DataTypeContext>(i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::ParamsListContext::Id() {
  return getTokens(miniCgrammarParser::Id);
}

tree::TerminalNode* miniCgrammarParser::ParamsListContext::Id(size_t i) {
  return getToken(miniCgrammarParser::Id, i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::ParamsListContext::Comma() {
  return getTokens(miniCgrammarParser::Comma);
}

tree::TerminalNode* miniCgrammarParser::ParamsListContext::Comma(size_t i) {
  return getToken(miniCgrammarParser::Comma, i);
}


size_t miniCgrammarParser::ParamsListContext::getRuleIndex() const {
  return miniCgrammarParser::RuleParamsList;
}


antlrcpp::Any miniCgrammarParser::ParamsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitParamsList(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::ParamsListContext* miniCgrammarParser::paramsList() {
  ParamsListContext *_localctx = _tracker.createInstance<ParamsListContext>(_ctx, getState());
  enterRule(_localctx, 16, miniCgrammarParser::RuleParamsList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    dataType();
    setState(103);
    match(miniCgrammarParser::Id);
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == miniCgrammarParser::Comma) {
      setState(105);
      match(miniCgrammarParser::Comma);
      setState(106);
      dataType();
      setState(107);
      match(miniCgrammarParser::Id);
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementListContext ------------------------------------------------------------------

miniCgrammarParser::StatementListContext::StatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<miniCgrammarParser::StatementContext *> miniCgrammarParser::StatementListContext::statement() {
  return getRuleContexts<miniCgrammarParser::StatementContext>();
}

miniCgrammarParser::StatementContext* miniCgrammarParser::StatementListContext::statement(size_t i) {
  return getRuleContext<miniCgrammarParser::StatementContext>(i);
}


size_t miniCgrammarParser::StatementListContext::getRuleIndex() const {
  return miniCgrammarParser::RuleStatementList;
}


antlrcpp::Any miniCgrammarParser::StatementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitStatementList(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::StatementListContext* miniCgrammarParser::statementList() {
  StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, getState());
  enterRule(_localctx, 18, miniCgrammarParser::RuleStatementList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(115); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(114);
              statement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(117); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

miniCgrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::StatementContext::getRuleIndex() const {
  return miniCgrammarParser::RuleStatement;
}

void miniCgrammarParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprStmtContext ------------------------------------------------------------------

miniCgrammarParser::ExprContext* miniCgrammarParser::ExprStmtContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::ExprStmtContext::Semi() {
  return getToken(miniCgrammarParser::Semi, 0);
}

miniCgrammarParser::ExprStmtContext::ExprStmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStmtContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::BreakStmtContext::Break() {
  return getToken(miniCgrammarParser::Break, 0);
}

tree::TerminalNode* miniCgrammarParser::BreakStmtContext::Semi() {
  return getToken(miniCgrammarParser::Semi, 0);
}

miniCgrammarParser::BreakStmtContext::BreakStmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableDeclStmtContext ------------------------------------------------------------------

miniCgrammarParser::VariableDeclContext* miniCgrammarParser::VariableDeclStmtContext::variableDecl() {
  return getRuleContext<miniCgrammarParser::VariableDeclContext>(0);
}

miniCgrammarParser::VariableDeclStmtContext::VariableDeclStmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::VariableDeclStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitVariableDeclStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IterationStmtContext ------------------------------------------------------------------

miniCgrammarParser::IterativeStmtContext* miniCgrammarParser::IterationStmtContext::iterativeStmt() {
  return getRuleContext<miniCgrammarParser::IterativeStmtContext>(0);
}

miniCgrammarParser::IterationStmtContext::IterationStmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::IterationStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitIterationStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::ReturnStmtContext::Return() {
  return getToken(miniCgrammarParser::Return, 0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::ReturnStmtContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::ReturnStmtContext::Semi() {
  return getToken(miniCgrammarParser::Semi, 0);
}

miniCgrammarParser::ReturnStmtContext::ReturnStmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueStmtContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::ContinueStmtContext::Continue() {
  return getToken(miniCgrammarParser::Continue, 0);
}

tree::TerminalNode* miniCgrammarParser::ContinueStmtContext::Semi() {
  return getToken(miniCgrammarParser::Semi, 0);
}

miniCgrammarParser::ContinueStmtContext::ContinueStmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentStmtContext ------------------------------------------------------------------

miniCgrammarParser::LocationContext* miniCgrammarParser::AssignmentStmtContext::location() {
  return getRuleContext<miniCgrammarParser::LocationContext>(0);
}

miniCgrammarParser::AssignOpContext* miniCgrammarParser::AssignmentStmtContext::assignOp() {
  return getRuleContext<miniCgrammarParser::AssignOpContext>(0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::AssignmentStmtContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::AssignmentStmtContext::Semi() {
  return getToken(miniCgrammarParser::Semi, 0);
}

miniCgrammarParser::AssignmentStmtContext::AssignmentStmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConditionStmtContext ------------------------------------------------------------------

miniCgrammarParser::ConditionalStmtContext* miniCgrammarParser::ConditionStmtContext::conditionalStmt() {
  return getRuleContext<miniCgrammarParser::ConditionalStmtContext>(0);
}

miniCgrammarParser::ConditionStmtContext::ConditionStmtContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::ConditionStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitConditionStmt(this);
  else
    return visitor->visitChildren(this);
}
miniCgrammarParser::StatementContext* miniCgrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 20, miniCgrammarParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<miniCgrammarParser::VariableDeclStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(119);
      variableDecl();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<miniCgrammarParser::AssignmentStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(120);
      location();
      setState(121);
      assignOp();
      setState(122);
      expr(0);
      setState(123);
      match(miniCgrammarParser::Semi);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<miniCgrammarParser::ExprStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(125);
      expr(0);
      setState(126);
      match(miniCgrammarParser::Semi);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<miniCgrammarParser::ConditionStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(128);
      conditionalStmt();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<miniCgrammarParser::IterationStmtContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(129);
      iterativeStmt();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<miniCgrammarParser::ReturnStmtContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(130);
      match(miniCgrammarParser::Return);
      setState(131);
      expr(0);
      setState(132);
      match(miniCgrammarParser::Semi);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<miniCgrammarParser::BreakStmtContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(134);
      match(miniCgrammarParser::Break);
      setState(135);
      match(miniCgrammarParser::Semi);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<miniCgrammarParser::ContinueStmtContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(136);
      match(miniCgrammarParser::Continue);
      setState(137);
      match(miniCgrammarParser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocationContext ------------------------------------------------------------------

miniCgrammarParser::LocationContext::LocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::LocationContext::getRuleIndex() const {
  return miniCgrammarParser::RuleLocation;
}

void miniCgrammarParser::LocationContext::copyFrom(LocationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TwoDarrayLocationContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::TwoDarrayLocationContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::TwoDarrayLocationContext::LeftBracket() {
  return getTokens(miniCgrammarParser::LeftBracket);
}

tree::TerminalNode* miniCgrammarParser::TwoDarrayLocationContext::LeftBracket(size_t i) {
  return getToken(miniCgrammarParser::LeftBracket, i);
}

std::vector<miniCgrammarParser::ArrayExprContext *> miniCgrammarParser::TwoDarrayLocationContext::arrayExpr() {
  return getRuleContexts<miniCgrammarParser::ArrayExprContext>();
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::TwoDarrayLocationContext::arrayExpr(size_t i) {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::TwoDarrayLocationContext::RightBracket() {
  return getTokens(miniCgrammarParser::RightBracket);
}

tree::TerminalNode* miniCgrammarParser::TwoDarrayLocationContext::RightBracket(size_t i) {
  return getToken(miniCgrammarParser::RightBracket, i);
}

miniCgrammarParser::TwoDarrayLocationContext::TwoDarrayLocationContext(LocationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::TwoDarrayLocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitTwoDarrayLocation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleVarLocationContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::SimpleVarLocationContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

miniCgrammarParser::SimpleVarLocationContext::SimpleVarLocationContext(LocationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::SimpleVarLocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitSimpleVarLocation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OneDarrayLocationContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::OneDarrayLocationContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

tree::TerminalNode* miniCgrammarParser::OneDarrayLocationContext::LeftBracket() {
  return getToken(miniCgrammarParser::LeftBracket, 0);
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::OneDarrayLocationContext::arrayExpr() {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::OneDarrayLocationContext::RightBracket() {
  return getToken(miniCgrammarParser::RightBracket, 0);
}

miniCgrammarParser::OneDarrayLocationContext::OneDarrayLocationContext(LocationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::OneDarrayLocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitOneDarrayLocation(this);
  else
    return visitor->visitChildren(this);
}
miniCgrammarParser::LocationContext* miniCgrammarParser::location() {
  LocationContext *_localctx = _tracker.createInstance<LocationContext>(_ctx, getState());
  enterRule(_localctx, 22, miniCgrammarParser::RuleLocation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(154);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<LocationContext *>(_tracker.createInstance<miniCgrammarParser::SimpleVarLocationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(140);
      match(miniCgrammarParser::Id);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<LocationContext *>(_tracker.createInstance<miniCgrammarParser::OneDarrayLocationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(141);
      match(miniCgrammarParser::Id);
      setState(142);
      match(miniCgrammarParser::LeftBracket);
      setState(143);
      arrayExpr(0);
      setState(144);
      match(miniCgrammarParser::RightBracket);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<LocationContext *>(_tracker.createInstance<miniCgrammarParser::TwoDarrayLocationContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(146);
      match(miniCgrammarParser::Id);
      setState(147);
      match(miniCgrammarParser::LeftBracket);
      setState(148);
      arrayExpr(0);
      setState(149);
      match(miniCgrammarParser::RightBracket);
      setState(150);
      match(miniCgrammarParser::LeftBracket);
      setState(151);
      arrayExpr(0);
      setState(152);
      match(miniCgrammarParser::RightBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignOpContext ------------------------------------------------------------------

miniCgrammarParser::AssignOpContext::AssignOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::AssignOpContext::getRuleIndex() const {
  return miniCgrammarParser::RuleAssignOp;
}

void miniCgrammarParser::AssignOpContext::copyFrom(AssignOpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PlusAssignContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::PlusAssignContext::PlusAssign() {
  return getToken(miniCgrammarParser::PlusAssign, 0);
}

miniCgrammarParser::PlusAssignContext::PlusAssignContext(AssignOpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::PlusAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitPlusAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualAssignContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::EqualAssignContext::Assign() {
  return getToken(miniCgrammarParser::Assign, 0);
}

miniCgrammarParser::EqualAssignContext::EqualAssignContext(AssignOpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::EqualAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitEqualAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusAssignContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::MinusAssignContext::MinusAssign() {
  return getToken(miniCgrammarParser::MinusAssign, 0);
}

miniCgrammarParser::MinusAssignContext::MinusAssignContext(AssignOpContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::MinusAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitMinusAssign(this);
  else
    return visitor->visitChildren(this);
}
miniCgrammarParser::AssignOpContext* miniCgrammarParser::assignOp() {
  AssignOpContext *_localctx = _tracker.createInstance<AssignOpContext>(_ctx, getState());
  enterRule(_localctx, 24, miniCgrammarParser::RuleAssignOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(159);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case miniCgrammarParser::Assign: {
        _localctx = dynamic_cast<AssignOpContext *>(_tracker.createInstance<miniCgrammarParser::EqualAssignContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(156);
        match(miniCgrammarParser::Assign);
        break;
      }

      case miniCgrammarParser::PlusAssign: {
        _localctx = dynamic_cast<AssignOpContext *>(_tracker.createInstance<miniCgrammarParser::PlusAssignContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(157);
        match(miniCgrammarParser::PlusAssign);
        break;
      }

      case miniCgrammarParser::MinusAssign: {
        _localctx = dynamic_cast<AssignOpContext *>(_tracker.createInstance<miniCgrammarParser::MinusAssignContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(158);
        match(miniCgrammarParser::MinusAssign);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

miniCgrammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::ExprContext::getRuleIndex() const {
  return miniCgrammarParser::RuleExpr;
}

void miniCgrammarParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExponentExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::ExponentExprContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::ExponentExprContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::ExponentExprContext::Caret() {
  return getToken(miniCgrammarParser::Caret, 0);
}

miniCgrammarParser::ExponentExprContext::ExponentExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::ExponentExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitExponentExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::AddSubExprContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::AddSubExprContext::Plus() {
  return getToken(miniCgrammarParser::Plus, 0);
}

tree::TerminalNode* miniCgrammarParser::AddSubExprContext::Minus() {
  return getToken(miniCgrammarParser::Minus, 0);
}

miniCgrammarParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLitExprContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::IntLitExprContext::IntegerLiteral() {
  return getToken(miniCgrammarParser::IntegerLiteral, 0);
}

miniCgrammarParser::IntLitExprContext::IntLitExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::IntLitExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitIntLitExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringLitExprContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::StringLitExprContext::StringLiteral() {
  return getToken(miniCgrammarParser::StringLiteral, 0);
}

miniCgrammarParser::StringLitExprContext::StringLitExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::StringLitExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitStringLitExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelopExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::RelopExprContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::RelopExprContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::RelopExprContext::Less() {
  return getToken(miniCgrammarParser::Less, 0);
}

tree::TerminalNode* miniCgrammarParser::RelopExprContext::Greater() {
  return getToken(miniCgrammarParser::Greater, 0);
}

tree::TerminalNode* miniCgrammarParser::RelopExprContext::LessEqual() {
  return getToken(miniCgrammarParser::LessEqual, 0);
}

tree::TerminalNode* miniCgrammarParser::RelopExprContext::GreaterEqual() {
  return getToken(miniCgrammarParser::GreaterEqual, 0);
}

miniCgrammarParser::RelopExprContext::RelopExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::RelopExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitRelopExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivModExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::MulDivModExprContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::MulDivModExprContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::MulDivModExprContext::Star() {
  return getToken(miniCgrammarParser::Star, 0);
}

tree::TerminalNode* miniCgrammarParser::MulDivModExprContext::Div() {
  return getToken(miniCgrammarParser::Div, 0);
}

tree::TerminalNode* miniCgrammarParser::MulDivModExprContext::Mod() {
  return getToken(miniCgrammarParser::Mod, 0);
}

miniCgrammarParser::MulDivModExprContext::MulDivModExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::MulDivModExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitMulDivModExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalANDExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::LogicalANDExprContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::LogicalANDExprContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::LogicalANDExprContext::And() {
  return getToken(miniCgrammarParser::And, 0);
}

miniCgrammarParser::LogicalANDExprContext::LogicalANDExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::LogicalANDExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitLogicalANDExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesesExprContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::ParenthesesExprContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::ParenthesesExprContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::ParenthesesExprContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

miniCgrammarParser::ParenthesesExprContext::ParenthesesExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::ParenthesesExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitParenthesesExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalORExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::LogicalORExprContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::LogicalORExprContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::LogicalORExprContext::Or() {
  return getToken(miniCgrammarParser::Or, 0);
}

miniCgrammarParser::LogicalORExprContext::LogicalORExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::LogicalORExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitLogicalORExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegateExprContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::NegateExprContext::Minus() {
  return getToken(miniCgrammarParser::Minus, 0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::NegateExprContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

miniCgrammarParser::NegateExprContext::NegateExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::NegateExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitNegateExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharLitExprContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::CharLitExprContext::CharLiteral() {
  return getToken(miniCgrammarParser::CharLiteral, 0);
}

miniCgrammarParser::CharLitExprContext::CharLitExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::CharLitExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitCharLitExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExprContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::NotExprContext::Not() {
  return getToken(miniCgrammarParser::Not, 0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::NotExprContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

miniCgrammarParser::NotExprContext::NotExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::NotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitNotExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::TernaryExprContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::TernaryExprContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::TernaryExprContext::Question() {
  return getToken(miniCgrammarParser::Question, 0);
}

tree::TerminalNode* miniCgrammarParser::TernaryExprContext::Colon() {
  return getToken(miniCgrammarParser::Colon, 0);
}

miniCgrammarParser::TernaryExprContext::TernaryExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::TernaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitTernaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LocationExprContext ------------------------------------------------------------------

miniCgrammarParser::LocationContext* miniCgrammarParser::LocationExprContext::location() {
  return getRuleContext<miniCgrammarParser::LocationContext>(0);
}

miniCgrammarParser::LocationExprContext::LocationExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::LocationExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitLocationExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallExprContext ------------------------------------------------------------------

miniCgrammarParser::FunctionCallContext* miniCgrammarParser::FunctionCallExprContext::functionCall() {
  return getRuleContext<miniCgrammarParser::FunctionCallContext>(0);
}

miniCgrammarParser::FunctionCallExprContext::FunctionCallExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::FunctionCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolLitExprContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::BoolLitExprContext::BoolLiteral() {
  return getToken(miniCgrammarParser::BoolLiteral, 0);
}

miniCgrammarParser::BoolLitExprContext::BoolLitExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::BoolLitExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitBoolLitExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::EqualityExprContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::EqualityExprContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::EqualityExprContext::Equal() {
  return getToken(miniCgrammarParser::Equal, 0);
}

tree::TerminalNode* miniCgrammarParser::EqualityExprContext::NotEqual() {
  return getToken(miniCgrammarParser::NotEqual, 0);
}

miniCgrammarParser::EqualityExprContext::EqualityExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::EqualityExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitEqualityExpr(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::expr() {
   return expr(0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  miniCgrammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  miniCgrammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, miniCgrammarParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BoolLitExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(162);
      match(miniCgrammarParser::BoolLiteral);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IntLitExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(163);
      match(miniCgrammarParser::IntegerLiteral);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StringLitExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(164);
      match(miniCgrammarParser::StringLiteral);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CharLitExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(165);
      match(miniCgrammarParser::CharLiteral);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParenthesesExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(166);
      match(miniCgrammarParser::LeftParen);
      setState(167);
      expr(0);
      setState(168);
      match(miniCgrammarParser::RightParen);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LocationExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(170);
      location();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<FunctionCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(171);
      functionCall();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NegateExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(172);
      match(miniCgrammarParser::Minus);
      setState(173);
      expr(10);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(174);
      match(miniCgrammarParser::Not);
      setState(175);
      expr(9);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(207);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(205);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExponentExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(178);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(179);
          match(miniCgrammarParser::Caret);
          setState(180);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulDivModExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(181);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(182);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << miniCgrammarParser::Star)
            | (1ULL << miniCgrammarParser::Div)
            | (1ULL << miniCgrammarParser::Mod))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(183);
          expr(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(184);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(185);
          _la = _input->LA(1);
          if (!(_la == miniCgrammarParser::Plus

          || _la == miniCgrammarParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(186);
          expr(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelopExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(187);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(188);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << miniCgrammarParser::Less)
            | (1ULL << miniCgrammarParser::LessEqual)
            | (1ULL << miniCgrammarParser::Greater)
            | (1ULL << miniCgrammarParser::GreaterEqual))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(189);
          expr(6);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<EqualityExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(190);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(191);
          _la = _input->LA(1);
          if (!(_la == miniCgrammarParser::Equal

          || _la == miniCgrammarParser::NotEqual)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(192);
          expr(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LogicalANDExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(193);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(194);
          match(miniCgrammarParser::And);
          setState(195);
          expr(4);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<LogicalORExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(196);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(197);
          match(miniCgrammarParser::Or);
          setState(198);
          expr(3);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<TernaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(199);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(200);
          match(miniCgrammarParser::Question);
          setState(201);
          expr(0);
          setState(202);
          match(miniCgrammarParser::Colon);
          setState(203);
          expr(1);
          break;
        }

        } 
      }
      setState(209);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArrayExprContext ------------------------------------------------------------------

miniCgrammarParser::ArrayExprContext::ArrayExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::ArrayExprContext::getRuleIndex() const {
  return miniCgrammarParser::RuleArrayExpr;
}

void miniCgrammarParser::ArrayExprContext::copyFrom(ArrayExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LogicalANDArrayExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ArrayExprContext *> miniCgrammarParser::LogicalANDArrayExprContext::arrayExpr() {
  return getRuleContexts<miniCgrammarParser::ArrayExprContext>();
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::LogicalANDArrayExprContext::arrayExpr(size_t i) {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::LogicalANDArrayExprContext::And() {
  return getToken(miniCgrammarParser::And, 0);
}

miniCgrammarParser::LogicalANDArrayExprContext::LogicalANDArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::LogicalANDArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitLogicalANDArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubArrayExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ArrayExprContext *> miniCgrammarParser::AddSubArrayExprContext::arrayExpr() {
  return getRuleContexts<miniCgrammarParser::ArrayExprContext>();
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::AddSubArrayExprContext::arrayExpr(size_t i) {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::AddSubArrayExprContext::Plus() {
  return getToken(miniCgrammarParser::Plus, 0);
}

tree::TerminalNode* miniCgrammarParser::AddSubArrayExprContext::Minus() {
  return getToken(miniCgrammarParser::Minus, 0);
}

miniCgrammarParser::AddSubArrayExprContext::AddSubArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::AddSubArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitAddSubArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LocationArrayExprContext ------------------------------------------------------------------

miniCgrammarParser::LocationContext* miniCgrammarParser::LocationArrayExprContext::location() {
  return getRuleContext<miniCgrammarParser::LocationContext>(0);
}

miniCgrammarParser::LocationArrayExprContext::LocationArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::LocationArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitLocationArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityArrayExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ArrayExprContext *> miniCgrammarParser::EqualityArrayExprContext::arrayExpr() {
  return getRuleContexts<miniCgrammarParser::ArrayExprContext>();
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::EqualityArrayExprContext::arrayExpr(size_t i) {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::EqualityArrayExprContext::Equal() {
  return getToken(miniCgrammarParser::Equal, 0);
}

tree::TerminalNode* miniCgrammarParser::EqualityArrayExprContext::NotEqual() {
  return getToken(miniCgrammarParser::NotEqual, 0);
}

miniCgrammarParser::EqualityArrayExprContext::EqualityArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::EqualityArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitEqualityArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExponentArrayExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ArrayExprContext *> miniCgrammarParser::ExponentArrayExprContext::arrayExpr() {
  return getRuleContexts<miniCgrammarParser::ArrayExprContext>();
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::ExponentArrayExprContext::arrayExpr(size_t i) {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::ExponentArrayExprContext::Caret() {
  return getToken(miniCgrammarParser::Caret, 0);
}

miniCgrammarParser::ExponentArrayExprContext::ExponentArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::ExponentArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitExponentArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalORArrayExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ArrayExprContext *> miniCgrammarParser::LogicalORArrayExprContext::arrayExpr() {
  return getRuleContexts<miniCgrammarParser::ArrayExprContext>();
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::LogicalORArrayExprContext::arrayExpr(size_t i) {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::LogicalORArrayExprContext::Or() {
  return getToken(miniCgrammarParser::Or, 0);
}

miniCgrammarParser::LogicalORArrayExprContext::LogicalORArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::LogicalORArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitLogicalORArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotArrayExprContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::NotArrayExprContext::Not() {
  return getToken(miniCgrammarParser::Not, 0);
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::NotArrayExprContext::arrayExpr() {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(0);
}

miniCgrammarParser::NotArrayExprContext::NotArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::NotArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitNotArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivModArrayExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ArrayExprContext *> miniCgrammarParser::MulDivModArrayExprContext::arrayExpr() {
  return getRuleContexts<miniCgrammarParser::ArrayExprContext>();
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::MulDivModArrayExprContext::arrayExpr(size_t i) {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::MulDivModArrayExprContext::Star() {
  return getToken(miniCgrammarParser::Star, 0);
}

tree::TerminalNode* miniCgrammarParser::MulDivModArrayExprContext::Div() {
  return getToken(miniCgrammarParser::Div, 0);
}

tree::TerminalNode* miniCgrammarParser::MulDivModArrayExprContext::Mod() {
  return getToken(miniCgrammarParser::Mod, 0);
}

miniCgrammarParser::MulDivModArrayExprContext::MulDivModArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::MulDivModArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitMulDivModArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesesArrayExprContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::ParenthesesArrayExprContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::ParenthesesArrayExprContext::arrayExpr() {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::ParenthesesArrayExprContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

miniCgrammarParser::ParenthesesArrayExprContext::ParenthesesArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::ParenthesesArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitParenthesesArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallArrayExprContext ------------------------------------------------------------------

miniCgrammarParser::FunctionCallContext* miniCgrammarParser::FunctionCallArrayExprContext::functionCall() {
  return getRuleContext<miniCgrammarParser::FunctionCallContext>(0);
}

miniCgrammarParser::FunctionCallArrayExprContext::FunctionCallArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::FunctionCallArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionCallArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelopArrayExprContext ------------------------------------------------------------------

std::vector<miniCgrammarParser::ArrayExprContext *> miniCgrammarParser::RelopArrayExprContext::arrayExpr() {
  return getRuleContexts<miniCgrammarParser::ArrayExprContext>();
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::RelopArrayExprContext::arrayExpr(size_t i) {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::RelopArrayExprContext::Less() {
  return getToken(miniCgrammarParser::Less, 0);
}

tree::TerminalNode* miniCgrammarParser::RelopArrayExprContext::Greater() {
  return getToken(miniCgrammarParser::Greater, 0);
}

tree::TerminalNode* miniCgrammarParser::RelopArrayExprContext::LessEqual() {
  return getToken(miniCgrammarParser::LessEqual, 0);
}

tree::TerminalNode* miniCgrammarParser::RelopArrayExprContext::GreaterEqual() {
  return getToken(miniCgrammarParser::GreaterEqual, 0);
}

miniCgrammarParser::RelopArrayExprContext::RelopArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::RelopArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitRelopArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLitArrayExprContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::IntLitArrayExprContext::IntegerLiteral() {
  return getToken(miniCgrammarParser::IntegerLiteral, 0);
}

miniCgrammarParser::IntLitArrayExprContext::IntLitArrayExprContext(ArrayExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::IntLitArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitIntLitArrayExpr(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::arrayExpr() {
   return arrayExpr(0);
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::arrayExpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  miniCgrammarParser::ArrayExprContext *_localctx = _tracker.createInstance<ArrayExprContext>(_ctx, parentState);
  miniCgrammarParser::ArrayExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, miniCgrammarParser::RuleArrayExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<IntLitArrayExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(211);
      match(miniCgrammarParser::IntegerLiteral);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ParenthesesArrayExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(212);
      match(miniCgrammarParser::LeftParen);
      setState(213);
      arrayExpr(0);
      setState(214);
      match(miniCgrammarParser::RightParen);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<LocationArrayExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(216);
      location();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FunctionCallArrayExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(217);
      functionCall();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NotArrayExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(218);
      match(miniCgrammarParser::Not);
      setState(219);
      arrayExpr(8);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(245);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(243);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExponentArrayExprContext>(_tracker.createInstance<ArrayExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArrayExpr);
          setState(222);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(223);
          match(miniCgrammarParser::Caret);
          setState(224);
          arrayExpr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulDivModArrayExprContext>(_tracker.createInstance<ArrayExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArrayExpr);
          setState(225);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(226);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << miniCgrammarParser::Star)
            | (1ULL << miniCgrammarParser::Div)
            | (1ULL << miniCgrammarParser::Mod))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(227);
          arrayExpr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddSubArrayExprContext>(_tracker.createInstance<ArrayExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArrayExpr);
          setState(228);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(229);
          _la = _input->LA(1);
          if (!(_la == miniCgrammarParser::Plus

          || _la == miniCgrammarParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(230);
          arrayExpr(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelopArrayExprContext>(_tracker.createInstance<ArrayExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArrayExpr);
          setState(231);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(232);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << miniCgrammarParser::Less)
            | (1ULL << miniCgrammarParser::LessEqual)
            | (1ULL << miniCgrammarParser::Greater)
            | (1ULL << miniCgrammarParser::GreaterEqual))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(233);
          arrayExpr(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<EqualityArrayExprContext>(_tracker.createInstance<ArrayExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArrayExpr);
          setState(234);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(235);
          _la = _input->LA(1);
          if (!(_la == miniCgrammarParser::Equal

          || _la == miniCgrammarParser::NotEqual)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(236);
          arrayExpr(4);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LogicalANDArrayExprContext>(_tracker.createInstance<ArrayExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArrayExpr);
          setState(237);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(238);
          match(miniCgrammarParser::And);
          setState(239);
          arrayExpr(3);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<LogicalORArrayExprContext>(_tracker.createInstance<ArrayExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArrayExpr);
          setState(240);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(241);
          match(miniCgrammarParser::Or);
          setState(242);
          arrayExpr(2);
          break;
        }

        } 
      }
      setState(247);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

miniCgrammarParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::FunctionCallContext::getRuleIndex() const {
  return miniCgrammarParser::RuleFunctionCall;
}

void miniCgrammarParser::FunctionCallContext::copyFrom(FunctionCallContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LibFnCallContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::LibFnCallContext::Callout() {
  return getToken(miniCgrammarParser::Callout, 0);
}

tree::TerminalNode* miniCgrammarParser::LibFnCallContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

tree::TerminalNode* miniCgrammarParser::LibFnCallContext::StringLiteral() {
  return getToken(miniCgrammarParser::StringLiteral, 0);
}

tree::TerminalNode* miniCgrammarParser::LibFnCallContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

miniCgrammarParser::CalloutArgsContext* miniCgrammarParser::LibFnCallContext::calloutArgs() {
  return getRuleContext<miniCgrammarParser::CalloutArgsContext>(0);
}

miniCgrammarParser::LibFnCallContext::LibFnCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::LibFnCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitLibFnCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UserDefFnCallContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::UserDefFnCallContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

tree::TerminalNode* miniCgrammarParser::UserDefFnCallContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

tree::TerminalNode* miniCgrammarParser::UserDefFnCallContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

miniCgrammarParser::ArgsListContext* miniCgrammarParser::UserDefFnCallContext::argsList() {
  return getRuleContext<miniCgrammarParser::ArgsListContext>(0);
}

miniCgrammarParser::UserDefFnCallContext::UserDefFnCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::UserDefFnCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitUserDefFnCall(this);
  else
    return visitor->visitChildren(this);
}
miniCgrammarParser::FunctionCallContext* miniCgrammarParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 30, miniCgrammarParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(261);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case miniCgrammarParser::Id: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<miniCgrammarParser::UserDefFnCallContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(248);
        match(miniCgrammarParser::Id);
        setState(249);
        match(miniCgrammarParser::LeftParen);
        setState(251);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << miniCgrammarParser::Callout)
          | (1ULL << miniCgrammarParser::LeftParen)
          | (1ULL << miniCgrammarParser::Minus)
          | (1ULL << miniCgrammarParser::Not)
          | (1ULL << miniCgrammarParser::CharLiteral)
          | (1ULL << miniCgrammarParser::StringLiteral)
          | (1ULL << miniCgrammarParser::BoolLiteral)
          | (1ULL << miniCgrammarParser::IntegerLiteral)
          | (1ULL << miniCgrammarParser::Id))) != 0)) {
          setState(250);
          argsList();
        }
        setState(253);
        match(miniCgrammarParser::RightParen);
        break;
      }

      case miniCgrammarParser::Callout: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<miniCgrammarParser::LibFnCallContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(254);
        match(miniCgrammarParser::Callout);
        setState(255);
        match(miniCgrammarParser::LeftParen);
        setState(256);
        match(miniCgrammarParser::StringLiteral);
        setState(258);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == miniCgrammarParser::Comma) {
          setState(257);
          calloutArgs();
        }
        setState(260);
        match(miniCgrammarParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsListContext ------------------------------------------------------------------

miniCgrammarParser::ArgsListContext::ArgsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::ArgsListContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::ArgsListContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::ArgsListContext::Comma() {
  return getTokens(miniCgrammarParser::Comma);
}

tree::TerminalNode* miniCgrammarParser::ArgsListContext::Comma(size_t i) {
  return getToken(miniCgrammarParser::Comma, i);
}


size_t miniCgrammarParser::ArgsListContext::getRuleIndex() const {
  return miniCgrammarParser::RuleArgsList;
}


antlrcpp::Any miniCgrammarParser::ArgsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitArgsList(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::ArgsListContext* miniCgrammarParser::argsList() {
  ArgsListContext *_localctx = _tracker.createInstance<ArgsListContext>(_ctx, getState());
  enterRule(_localctx, 32, miniCgrammarParser::RuleArgsList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    expr(0);

    setState(268);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == miniCgrammarParser::Comma) {
      setState(264);
      match(miniCgrammarParser::Comma);
      setState(265);
      expr(0);
      setState(270);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CalloutArgsContext ------------------------------------------------------------------

miniCgrammarParser::CalloutArgsContext::CalloutArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> miniCgrammarParser::CalloutArgsContext::Comma() {
  return getTokens(miniCgrammarParser::Comma);
}

tree::TerminalNode* miniCgrammarParser::CalloutArgsContext::Comma(size_t i) {
  return getToken(miniCgrammarParser::Comma, i);
}

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::CalloutArgsContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::CalloutArgsContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}


size_t miniCgrammarParser::CalloutArgsContext::getRuleIndex() const {
  return miniCgrammarParser::RuleCalloutArgs;
}


antlrcpp::Any miniCgrammarParser::CalloutArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitCalloutArgs(this);
  else
    return visitor->visitChildren(this);
}

miniCgrammarParser::CalloutArgsContext* miniCgrammarParser::calloutArgs() {
  CalloutArgsContext *_localctx = _tracker.createInstance<CalloutArgsContext>(_ctx, getState());
  enterRule(_localctx, 34, miniCgrammarParser::RuleCalloutArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(271);
      match(miniCgrammarParser::Comma);
      setState(272);
      expr(0);
      setState(275); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == miniCgrammarParser::Comma);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalStmtContext ------------------------------------------------------------------

miniCgrammarParser::ConditionalStmtContext::ConditionalStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::ConditionalStmtContext::getRuleIndex() const {
  return miniCgrammarParser::RuleConditionalStmt;
}

void miniCgrammarParser::ConditionalStmtContext::copyFrom(ConditionalStmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfStmtContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::IfStmtContext::If() {
  return getToken(miniCgrammarParser::If, 0);
}

tree::TerminalNode* miniCgrammarParser::IfStmtContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::IfStmtContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::IfStmtContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

tree::TerminalNode* miniCgrammarParser::IfStmtContext::LeftBrace() {
  return getToken(miniCgrammarParser::LeftBrace, 0);
}

tree::TerminalNode* miniCgrammarParser::IfStmtContext::RightBrace() {
  return getToken(miniCgrammarParser::RightBrace, 0);
}

miniCgrammarParser::StatementListContext* miniCgrammarParser::IfStmtContext::statementList() {
  return getRuleContext<miniCgrammarParser::StatementListContext>(0);
}

miniCgrammarParser::IfStmtContext::IfStmtContext(ConditionalStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseStmtContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::IfElseStmtContext::If() {
  return getToken(miniCgrammarParser::If, 0);
}

tree::TerminalNode* miniCgrammarParser::IfElseStmtContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::IfElseStmtContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::IfElseStmtContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::IfElseStmtContext::LeftBrace() {
  return getTokens(miniCgrammarParser::LeftBrace);
}

tree::TerminalNode* miniCgrammarParser::IfElseStmtContext::LeftBrace(size_t i) {
  return getToken(miniCgrammarParser::LeftBrace, i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::IfElseStmtContext::RightBrace() {
  return getTokens(miniCgrammarParser::RightBrace);
}

tree::TerminalNode* miniCgrammarParser::IfElseStmtContext::RightBrace(size_t i) {
  return getToken(miniCgrammarParser::RightBrace, i);
}

tree::TerminalNode* miniCgrammarParser::IfElseStmtContext::Else() {
  return getToken(miniCgrammarParser::Else, 0);
}

std::vector<miniCgrammarParser::StatementListContext *> miniCgrammarParser::IfElseStmtContext::statementList() {
  return getRuleContexts<miniCgrammarParser::StatementListContext>();
}

miniCgrammarParser::StatementListContext* miniCgrammarParser::IfElseStmtContext::statementList(size_t i) {
  return getRuleContext<miniCgrammarParser::StatementListContext>(i);
}

miniCgrammarParser::IfElseStmtContext::IfElseStmtContext(ConditionalStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::IfElseStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitIfElseStmt(this);
  else
    return visitor->visitChildren(this);
}
miniCgrammarParser::ConditionalStmtContext* miniCgrammarParser::conditionalStmt() {
  ConditionalStmtContext *_localctx = _tracker.createInstance<ConditionalStmtContext>(_ctx, getState());
  enterRule(_localctx, 36, miniCgrammarParser::RuleConditionalStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(303);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ConditionalStmtContext *>(_tracker.createInstance<miniCgrammarParser::IfStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(277);
      match(miniCgrammarParser::If);
      setState(278);
      match(miniCgrammarParser::LeftParen);
      setState(279);
      expr(0);
      setState(280);
      match(miniCgrammarParser::RightParen);
      setState(281);
      match(miniCgrammarParser::LeftBrace);
      setState(283);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << miniCgrammarParser::Bool)
        | (1ULL << miniCgrammarParser::Break)
        | (1ULL << miniCgrammarParser::Callout)
        | (1ULL << miniCgrammarParser::Char)
        | (1ULL << miniCgrammarParser::Continue)
        | (1ULL << miniCgrammarParser::For)
        | (1ULL << miniCgrammarParser::If)
        | (1ULL << miniCgrammarParser::Int)
        | (1ULL << miniCgrammarParser::Long)
        | (1ULL << miniCgrammarParser::Return)
        | (1ULL << miniCgrammarParser::Uint)
        | (1ULL << miniCgrammarParser::Ulong)
        | (1ULL << miniCgrammarParser::While)
        | (1ULL << miniCgrammarParser::LeftParen)
        | (1ULL << miniCgrammarParser::Minus)
        | (1ULL << miniCgrammarParser::Not)
        | (1ULL << miniCgrammarParser::CharLiteral)
        | (1ULL << miniCgrammarParser::StringLiteral)
        | (1ULL << miniCgrammarParser::BoolLiteral)
        | (1ULL << miniCgrammarParser::IntegerLiteral)
        | (1ULL << miniCgrammarParser::Id))) != 0)) {
        setState(282);
        statementList();
      }
      setState(285);
      match(miniCgrammarParser::RightBrace);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ConditionalStmtContext *>(_tracker.createInstance<miniCgrammarParser::IfElseStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(287);
      match(miniCgrammarParser::If);
      setState(288);
      match(miniCgrammarParser::LeftParen);
      setState(289);
      expr(0);
      setState(290);
      match(miniCgrammarParser::RightParen);
      setState(291);
      match(miniCgrammarParser::LeftBrace);
      setState(293);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << miniCgrammarParser::Bool)
        | (1ULL << miniCgrammarParser::Break)
        | (1ULL << miniCgrammarParser::Callout)
        | (1ULL << miniCgrammarParser::Char)
        | (1ULL << miniCgrammarParser::Continue)
        | (1ULL << miniCgrammarParser::For)
        | (1ULL << miniCgrammarParser::If)
        | (1ULL << miniCgrammarParser::Int)
        | (1ULL << miniCgrammarParser::Long)
        | (1ULL << miniCgrammarParser::Return)
        | (1ULL << miniCgrammarParser::Uint)
        | (1ULL << miniCgrammarParser::Ulong)
        | (1ULL << miniCgrammarParser::While)
        | (1ULL << miniCgrammarParser::LeftParen)
        | (1ULL << miniCgrammarParser::Minus)
        | (1ULL << miniCgrammarParser::Not)
        | (1ULL << miniCgrammarParser::CharLiteral)
        | (1ULL << miniCgrammarParser::StringLiteral)
        | (1ULL << miniCgrammarParser::BoolLiteral)
        | (1ULL << miniCgrammarParser::IntegerLiteral)
        | (1ULL << miniCgrammarParser::Id))) != 0)) {
        setState(292);
        statementList();
      }
      setState(295);
      match(miniCgrammarParser::RightBrace);
      setState(296);
      match(miniCgrammarParser::Else);
      setState(297);
      match(miniCgrammarParser::LeftBrace);
      setState(299);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << miniCgrammarParser::Bool)
        | (1ULL << miniCgrammarParser::Break)
        | (1ULL << miniCgrammarParser::Callout)
        | (1ULL << miniCgrammarParser::Char)
        | (1ULL << miniCgrammarParser::Continue)
        | (1ULL << miniCgrammarParser::For)
        | (1ULL << miniCgrammarParser::If)
        | (1ULL << miniCgrammarParser::Int)
        | (1ULL << miniCgrammarParser::Long)
        | (1ULL << miniCgrammarParser::Return)
        | (1ULL << miniCgrammarParser::Uint)
        | (1ULL << miniCgrammarParser::Ulong)
        | (1ULL << miniCgrammarParser::While)
        | (1ULL << miniCgrammarParser::LeftParen)
        | (1ULL << miniCgrammarParser::Minus)
        | (1ULL << miniCgrammarParser::Not)
        | (1ULL << miniCgrammarParser::CharLiteral)
        | (1ULL << miniCgrammarParser::StringLiteral)
        | (1ULL << miniCgrammarParser::BoolLiteral)
        | (1ULL << miniCgrammarParser::IntegerLiteral)
        | (1ULL << miniCgrammarParser::Id))) != 0)) {
        setState(298);
        statementList();
      }
      setState(301);
      match(miniCgrammarParser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterativeStmtContext ------------------------------------------------------------------

miniCgrammarParser::IterativeStmtContext::IterativeStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t miniCgrammarParser::IterativeStmtContext::getRuleIndex() const {
  return miniCgrammarParser::RuleIterativeStmt;
}

void miniCgrammarParser::IterativeStmtContext::copyFrom(IterativeStmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ForStmtContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::ForStmtContext::For() {
  return getToken(miniCgrammarParser::For, 0);
}

tree::TerminalNode* miniCgrammarParser::ForStmtContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

std::vector<miniCgrammarParser::LocationContext *> miniCgrammarParser::ForStmtContext::location() {
  return getRuleContexts<miniCgrammarParser::LocationContext>();
}

miniCgrammarParser::LocationContext* miniCgrammarParser::ForStmtContext::location(size_t i) {
  return getRuleContext<miniCgrammarParser::LocationContext>(i);
}

tree::TerminalNode* miniCgrammarParser::ForStmtContext::Assign() {
  return getToken(miniCgrammarParser::Assign, 0);
}

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::ForStmtContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::ForStmtContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::ForStmtContext::Semi() {
  return getTokens(miniCgrammarParser::Semi);
}

tree::TerminalNode* miniCgrammarParser::ForStmtContext::Semi(size_t i) {
  return getToken(miniCgrammarParser::Semi, i);
}

miniCgrammarParser::AssignOpContext* miniCgrammarParser::ForStmtContext::assignOp() {
  return getRuleContext<miniCgrammarParser::AssignOpContext>(0);
}

tree::TerminalNode* miniCgrammarParser::ForStmtContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

tree::TerminalNode* miniCgrammarParser::ForStmtContext::LeftBrace() {
  return getToken(miniCgrammarParser::LeftBrace, 0);
}

tree::TerminalNode* miniCgrammarParser::ForStmtContext::RightBrace() {
  return getToken(miniCgrammarParser::RightBrace, 0);
}

miniCgrammarParser::StatementListContext* miniCgrammarParser::ForStmtContext::statementList() {
  return getRuleContext<miniCgrammarParser::StatementListContext>(0);
}

miniCgrammarParser::ForStmtContext::ForStmtContext(IterativeStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStmtContext ------------------------------------------------------------------

tree::TerminalNode* miniCgrammarParser::WhileStmtContext::While() {
  return getToken(miniCgrammarParser::While, 0);
}

tree::TerminalNode* miniCgrammarParser::WhileStmtContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::WhileStmtContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::WhileStmtContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

tree::TerminalNode* miniCgrammarParser::WhileStmtContext::LeftBrace() {
  return getToken(miniCgrammarParser::LeftBrace, 0);
}

tree::TerminalNode* miniCgrammarParser::WhileStmtContext::RightBrace() {
  return getToken(miniCgrammarParser::RightBrace, 0);
}

miniCgrammarParser::StatementListContext* miniCgrammarParser::WhileStmtContext::statementList() {
  return getRuleContext<miniCgrammarParser::StatementListContext>(0);
}

miniCgrammarParser::WhileStmtContext::WhileStmtContext(IterativeStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any miniCgrammarParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<miniCgrammarVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
miniCgrammarParser::IterativeStmtContext* miniCgrammarParser::iterativeStmt() {
  IterativeStmtContext *_localctx = _tracker.createInstance<IterativeStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, miniCgrammarParser::RuleIterativeStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(333);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case miniCgrammarParser::While: {
        _localctx = dynamic_cast<IterativeStmtContext *>(_tracker.createInstance<miniCgrammarParser::WhileStmtContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(305);
        match(miniCgrammarParser::While);
        setState(306);
        match(miniCgrammarParser::LeftParen);
        setState(307);
        expr(0);
        setState(308);
        match(miniCgrammarParser::RightParen);
        setState(309);
        match(miniCgrammarParser::LeftBrace);
        setState(311);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << miniCgrammarParser::Bool)
          | (1ULL << miniCgrammarParser::Break)
          | (1ULL << miniCgrammarParser::Callout)
          | (1ULL << miniCgrammarParser::Char)
          | (1ULL << miniCgrammarParser::Continue)
          | (1ULL << miniCgrammarParser::For)
          | (1ULL << miniCgrammarParser::If)
          | (1ULL << miniCgrammarParser::Int)
          | (1ULL << miniCgrammarParser::Long)
          | (1ULL << miniCgrammarParser::Return)
          | (1ULL << miniCgrammarParser::Uint)
          | (1ULL << miniCgrammarParser::Ulong)
          | (1ULL << miniCgrammarParser::While)
          | (1ULL << miniCgrammarParser::LeftParen)
          | (1ULL << miniCgrammarParser::Minus)
          | (1ULL << miniCgrammarParser::Not)
          | (1ULL << miniCgrammarParser::CharLiteral)
          | (1ULL << miniCgrammarParser::StringLiteral)
          | (1ULL << miniCgrammarParser::BoolLiteral)
          | (1ULL << miniCgrammarParser::IntegerLiteral)
          | (1ULL << miniCgrammarParser::Id))) != 0)) {
          setState(310);
          statementList();
        }
        setState(313);
        match(miniCgrammarParser::RightBrace);
        break;
      }

      case miniCgrammarParser::For: {
        _localctx = dynamic_cast<IterativeStmtContext *>(_tracker.createInstance<miniCgrammarParser::ForStmtContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(315);
        match(miniCgrammarParser::For);
        setState(316);
        match(miniCgrammarParser::LeftParen);
        setState(317);
        location();
        setState(318);
        match(miniCgrammarParser::Assign);
        setState(319);
        expr(0);
        setState(320);
        match(miniCgrammarParser::Semi);
        setState(321);
        expr(0);
        setState(322);
        match(miniCgrammarParser::Semi);
        setState(323);
        location();
        setState(324);
        assignOp();
        setState(325);
        expr(0);
        setState(326);
        match(miniCgrammarParser::RightParen);
        setState(327);
        match(miniCgrammarParser::LeftBrace);
        setState(329);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << miniCgrammarParser::Bool)
          | (1ULL << miniCgrammarParser::Break)
          | (1ULL << miniCgrammarParser::Callout)
          | (1ULL << miniCgrammarParser::Char)
          | (1ULL << miniCgrammarParser::Continue)
          | (1ULL << miniCgrammarParser::For)
          | (1ULL << miniCgrammarParser::If)
          | (1ULL << miniCgrammarParser::Int)
          | (1ULL << miniCgrammarParser::Long)
          | (1ULL << miniCgrammarParser::Return)
          | (1ULL << miniCgrammarParser::Uint)
          | (1ULL << miniCgrammarParser::Ulong)
          | (1ULL << miniCgrammarParser::While)
          | (1ULL << miniCgrammarParser::LeftParen)
          | (1ULL << miniCgrammarParser::Minus)
          | (1ULL << miniCgrammarParser::Not)
          | (1ULL << miniCgrammarParser::CharLiteral)
          | (1ULL << miniCgrammarParser::StringLiteral)
          | (1ULL << miniCgrammarParser::BoolLiteral)
          | (1ULL << miniCgrammarParser::IntegerLiteral)
          | (1ULL << miniCgrammarParser::Id))) != 0)) {
          setState(328);
          statementList();
        }
        setState(331);
        match(miniCgrammarParser::RightBrace);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool miniCgrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 14: return arrayExprSempred(dynamic_cast<ArrayExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool miniCgrammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool miniCgrammarParser::arrayExprSempred(ArrayExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 7);
    case 9: return precpred(_ctx, 6);
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> miniCgrammarParser::_decisionToDFA;
atn::PredictionContextCache miniCgrammarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN miniCgrammarParser::_atn;
std::vector<uint16_t> miniCgrammarParser::_serializedATN;

std::vector<std::string> miniCgrammarParser::_ruleNames = {
  "program", "declarationList", "declaration", "variableDecl", "variableDeclList", 
  "singleVarDecl", "dataType", "functionDecl", "paramsList", "statementList", 
  "statement", "location", "assignOp", "expr", "arrayExpr", "functionCall", 
  "argsList", "calloutArgs", "conditionalStmt", "iterativeStmt"
};

std::vector<std::string> miniCgrammarParser::_literalNames = {
  "", "'bool'", "'break'", "'callout'", "'char'", "'continue'", "'else'", 
  "'false'", "'float'", "'for'", "'if'", "'int'", "'long'", "'return'", 
  "'true'", "'uint'", "'ulong'", "'while'", "'('", "')'", "'['", "']'", 
  "'{'", "'}'", "'<'", "'<='", "'>'", "'>='", "'+'", "'-'", "'*'", "'/'", 
  "'%'", "'^'", "'&&'", "'||'", "'!'", "'?'", "':'", "';'", "','", "'''", 
  "'\"'", "'='", "'+='", "'-='", "'=='", "'!='"
};

std::vector<std::string> miniCgrammarParser::_symbolicNames = {
  "", "Bool", "Break", "Callout", "Char", "Continue", "Else", "False", "Float", 
  "For", "If", "Int", "Long", "Return", "True", "Uint", "Ulong", "While", 
  "LeftParen", "RightParen", "LeftBracket", "RightBracket", "LeftBrace", 
  "RightBrace", "Less", "LessEqual", "Greater", "GreaterEqual", "Plus", 
  "Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Not", "Question", 
  "Colon", "Semi", "Comma", "SingleQuote", "DoubleQuote", "Assign", "PlusAssign", 
  "MinusAssign", "Equal", "NotEqual", "CharLiteral", "StringLiteral", "BoolLiteral", 
  "IntegerLiteral", "Id", "Newline", "Whitespace", "Comment", "BlockComment"
};

dfa::Vocabulary miniCgrammarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> miniCgrammarParser::_tokenNames;

miniCgrammarParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3a, 0x152, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x6, 0x3, 0x2f, 0xa, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0x30, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x35, 0xa, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x7, 0x6, 0x3e, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x41, 0xb, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x4f, 0xa, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x57, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x5d, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x62, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x70, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0x73, 0xb, 0xa, 0x3, 0xb, 0x6, 0xb, 0x76, 0xa, 0xb, 
    0xd, 0xb, 0xe, 0xb, 0x77, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0x8d, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x9d, 0xa, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0xa2, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xb3, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0xd0, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xd3, 0xb, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xdf, 0xa, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x7, 0x10, 0xf6, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xf9, 0xb, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xfe, 0xa, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x105, 0xa, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0x108, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x7, 0x12, 0x10d, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x110, 0xb, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0x114, 0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 
    0x115, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0x11e, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x128, 0xa, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x12e, 0xa, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x132, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x13a, 0xa, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x14c, 0xa, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x5, 0x15, 0x150, 0xa, 0x15, 0x3, 0x15, 0x2, 0x4, 0x1c, 0x1e, 
    0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x6, 0x3, 0x2, 
    0x20, 0x22, 0x3, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x1a, 0x1d, 0x3, 0x2, 0x30, 
    0x31, 0x2, 0x17d, 0x2, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x34, 0x3, 0x2, 0x2, 0x2, 0x8, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x3a, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x58, 0x3, 0x2, 0x2, 0x2, 0x12, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x75, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xde, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x107, 0x3, 0x2, 0x2, 0x2, 0x22, 0x109, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0x26, 0x131, 0x3, 0x2, 0x2, 0x2, 0x28, 0x14f, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x2c, 0x7, 
    0x2, 0x2, 0x3, 0x2c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2f, 0x5, 0x6, 
    0x4, 0x2, 0x2e, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x5, 0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x5, 0x8, 0x5, 0x2, 0x33, 
    0x35, 0x5, 0x10, 0x9, 0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x7, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x5, 
    0xe, 0x8, 0x2, 0x37, 0x38, 0x5, 0xa, 0x6, 0x2, 0x38, 0x39, 0x7, 0x29, 
    0x2, 0x2, 0x39, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3f, 0x5, 0xc, 0x7, 
    0x2, 0x3b, 0x3c, 0x7, 0x2a, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0xc, 0x7, 0x2, 
    0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 
    0x36, 0x2, 0x2, 0x43, 0x44, 0x7, 0x16, 0x2, 0x2, 0x44, 0x45, 0x7, 0x35, 
    0x2, 0x2, 0x45, 0x46, 0x7, 0x17, 0x2, 0x2, 0x46, 0x47, 0x7, 0x16, 0x2, 
    0x2, 0x47, 0x48, 0x7, 0x35, 0x2, 0x2, 0x48, 0x4f, 0x7, 0x17, 0x2, 0x2, 
    0x49, 0x4a, 0x7, 0x36, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x16, 0x2, 0x2, 0x4b, 
    0x4c, 0x7, 0x35, 0x2, 0x2, 0x4c, 0x4f, 0x7, 0x17, 0x2, 0x2, 0x4d, 0x4f, 
    0x7, 0x36, 0x2, 0x2, 0x4e, 0x42, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x57, 0x7, 0xd, 0x2, 0x2, 0x51, 0x57, 0x7, 0x6, 0x2, 
    0x2, 0x52, 0x57, 0x7, 0x3, 0x2, 0x2, 0x53, 0x57, 0x7, 0xe, 0x2, 0x2, 
    0x54, 0x57, 0x7, 0x11, 0x2, 0x2, 0x55, 0x57, 0x7, 0x12, 0x2, 0x2, 0x56, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0x56, 0x51, 0x3, 0x2, 0x2, 0x2, 0x56, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x53, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x59, 0x5, 0xe, 0x8, 0x2, 0x59, 0x5a, 0x7, 0x36, 0x2, 
    0x2, 0x5a, 0x5c, 0x7, 0x14, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0x12, 0xa, 0x2, 
    0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x15, 0x2, 0x2, 0x5f, 0x61, 
    0x7, 0x18, 0x2, 0x2, 0x60, 0x62, 0x5, 0x14, 0xb, 0x2, 0x61, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x64, 0x7, 0xf, 0x2, 0x2, 0x64, 0x65, 0x5, 0x1c, 0xf, 
    0x2, 0x65, 0x66, 0x7, 0x29, 0x2, 0x2, 0x66, 0x67, 0x7, 0x19, 0x2, 0x2, 
    0x67, 0x11, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x5, 0xe, 0x8, 0x2, 0x69, 
    0x6a, 0x7, 0x36, 0x2, 0x2, 0x6a, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x7, 0x2a, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0xe, 0x8, 0x2, 0x6d, 0x6e, 0x7, 
    0x36, 0x2, 0x2, 0x6e, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 0x5, 0x16, 0xc, 0x2, 0x75, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x8d, 0x5, 0x8, 0x5, 0x2, 0x7a, 0x7b, 0x5, 0x18, 
    0xd, 0x2, 0x7b, 0x7c, 0x5, 0x1a, 0xe, 0x2, 0x7c, 0x7d, 0x5, 0x1c, 0xf, 
    0x2, 0x7d, 0x7e, 0x7, 0x29, 0x2, 0x2, 0x7e, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x80, 0x5, 0x1c, 0xf, 0x2, 0x80, 0x81, 0x7, 0x29, 0x2, 0x2, 0x81, 
    0x8d, 0x3, 0x2, 0x2, 0x2, 0x82, 0x8d, 0x5, 0x26, 0x14, 0x2, 0x83, 0x8d, 
    0x5, 0x28, 0x15, 0x2, 0x84, 0x85, 0x7, 0xf, 0x2, 0x2, 0x85, 0x86, 0x5, 
    0x1c, 0xf, 0x2, 0x86, 0x87, 0x7, 0x29, 0x2, 0x2, 0x87, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x89, 0x7, 0x4, 0x2, 0x2, 0x89, 0x8d, 0x7, 0x29, 0x2, 
    0x2, 0x8a, 0x8b, 0x7, 0x7, 0x2, 0x2, 0x8b, 0x8d, 0x7, 0x29, 0x2, 0x2, 
    0x8c, 0x79, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x82, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x84, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x8e, 0x9d, 0x7, 0x36, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x36, 0x2, 
    0x2, 0x90, 0x91, 0x7, 0x16, 0x2, 0x2, 0x91, 0x92, 0x5, 0x1e, 0x10, 0x2, 
    0x92, 0x93, 0x7, 0x17, 0x2, 0x2, 0x93, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x95, 0x7, 0x36, 0x2, 0x2, 0x95, 0x96, 0x7, 0x16, 0x2, 0x2, 0x96, 0x97, 
    0x5, 0x1e, 0x10, 0x2, 0x97, 0x98, 0x7, 0x17, 0x2, 0x2, 0x98, 0x99, 0x7, 
    0x16, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x1e, 0x10, 0x2, 0x9a, 0x9b, 0x7, 0x17, 
    0x2, 0x2, 0x9b, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x19, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa2, 0x7, 0x2d, 0x2, 0x2, 0x9f, 
    0xa2, 0x7, 0x2e, 0x2, 0x2, 0xa0, 0xa2, 0x7, 0x2f, 0x2, 0x2, 0xa1, 0x9e, 
    0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa0, 0x3, 
    0x2, 0x2, 0x2, 0xa2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x8, 0xf, 
    0x1, 0x2, 0xa4, 0xb3, 0x7, 0x34, 0x2, 0x2, 0xa5, 0xb3, 0x7, 0x35, 0x2, 
    0x2, 0xa6, 0xb3, 0x7, 0x33, 0x2, 0x2, 0xa7, 0xb3, 0x7, 0x32, 0x2, 0x2, 
    0xa8, 0xa9, 0x7, 0x14, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x1c, 0xf, 0x2, 0xaa, 
    0xab, 0x7, 0x15, 0x2, 0x2, 0xab, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xac, 0xb3, 
    0x5, 0x18, 0xd, 0x2, 0xad, 0xb3, 0x5, 0x20, 0x11, 0x2, 0xae, 0xaf, 0x7, 
    0x1f, 0x2, 0x2, 0xaf, 0xb3, 0x5, 0x1c, 0xf, 0xc, 0xb0, 0xb1, 0x7, 0x26, 
    0x2, 0x2, 0xb1, 0xb3, 0x5, 0x1c, 0xf, 0xb, 0xb2, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb5, 0xc, 0xa, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x23, 
    0x2, 0x2, 0xb6, 0xd0, 0x5, 0x1c, 0xf, 0xa, 0xb7, 0xb8, 0xc, 0x9, 0x2, 
    0x2, 0xb8, 0xb9, 0x9, 0x2, 0x2, 0x2, 0xb9, 0xd0, 0x5, 0x1c, 0xf, 0xa, 
    0xba, 0xbb, 0xc, 0x8, 0x2, 0x2, 0xbb, 0xbc, 0x9, 0x3, 0x2, 0x2, 0xbc, 
    0xd0, 0x5, 0x1c, 0xf, 0x9, 0xbd, 0xbe, 0xc, 0x7, 0x2, 0x2, 0xbe, 0xbf, 
    0x9, 0x4, 0x2, 0x2, 0xbf, 0xd0, 0x5, 0x1c, 0xf, 0x8, 0xc0, 0xc1, 0xc, 
    0x6, 0x2, 0x2, 0xc1, 0xc2, 0x9, 0x5, 0x2, 0x2, 0xc2, 0xd0, 0x5, 0x1c, 
    0xf, 0x7, 0xc3, 0xc4, 0xc, 0x5, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x24, 0x2, 
    0x2, 0xc5, 0xd0, 0x5, 0x1c, 0xf, 0x6, 0xc6, 0xc7, 0xc, 0x4, 0x2, 0x2, 
    0xc7, 0xc8, 0x7, 0x25, 0x2, 0x2, 0xc8, 0xd0, 0x5, 0x1c, 0xf, 0x5, 0xc9, 
    0xca, 0xc, 0x3, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x27, 0x2, 0x2, 0xcb, 0xcc, 
    0x5, 0x1c, 0xf, 0x2, 0xcc, 0xcd, 0x7, 0x28, 0x2, 0x2, 0xcd, 0xce, 0x5, 
    0x1c, 0xf, 0x3, 0xce, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xb4, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xba, 0x3, 0x2, 0x2, 
    0x2, 0xcf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xcf, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x8, 0x10, 
    0x1, 0x2, 0xd5, 0xdf, 0x7, 0x35, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x14, 0x2, 
    0x2, 0xd7, 0xd8, 0x5, 0x1e, 0x10, 0x2, 0xd8, 0xd9, 0x7, 0x15, 0x2, 0x2, 
    0xd9, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdf, 0x5, 0x18, 0xd, 0x2, 0xdb, 
    0xdf, 0x5, 0x20, 0x11, 0x2, 0xdc, 0xdd, 0x7, 0x26, 0x2, 0x2, 0xdd, 0xdf, 
    0x5, 0x1e, 0x10, 0xa, 0xde, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xde, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xda, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xf7, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe1, 0xc, 0x9, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x23, 0x2, 0x2, 
    0xe2, 0xf6, 0x5, 0x1e, 0x10, 0x9, 0xe3, 0xe4, 0xc, 0x8, 0x2, 0x2, 0xe4, 
    0xe5, 0x9, 0x2, 0x2, 0x2, 0xe5, 0xf6, 0x5, 0x1e, 0x10, 0x9, 0xe6, 0xe7, 
    0xc, 0x7, 0x2, 0x2, 0xe7, 0xe8, 0x9, 0x3, 0x2, 0x2, 0xe8, 0xf6, 0x5, 
    0x1e, 0x10, 0x8, 0xe9, 0xea, 0xc, 0x6, 0x2, 0x2, 0xea, 0xeb, 0x9, 0x4, 
    0x2, 0x2, 0xeb, 0xf6, 0x5, 0x1e, 0x10, 0x7, 0xec, 0xed, 0xc, 0x5, 0x2, 
    0x2, 0xed, 0xee, 0x9, 0x5, 0x2, 0x2, 0xee, 0xf6, 0x5, 0x1e, 0x10, 0x6, 
    0xef, 0xf0, 0xc, 0x4, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x24, 0x2, 0x2, 0xf1, 
    0xf6, 0x5, 0x1e, 0x10, 0x5, 0xf2, 0xf3, 0xc, 0x3, 0x2, 0x2, 0xf3, 0xf4, 
    0x7, 0x25, 0x2, 0x2, 0xf4, 0xf6, 0x5, 0x1e, 0x10, 0x4, 0xf5, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xf5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xe6, 0x3, 0x2, 
    0x2, 0x2, 0xf5, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xf5, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x36, 0x2, 0x2, 0xfb, 0xfd, 0x7, 
    0x14, 0x2, 0x2, 0xfc, 0xfe, 0x5, 0x22, 0x12, 0x2, 0xfd, 0xfc, 0x3, 0x2, 
    0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0xff, 0x108, 0x7, 0x15, 0x2, 0x2, 0x100, 0x101, 0x7, 0x5, 0x2, 
    0x2, 0x101, 0x102, 0x7, 0x14, 0x2, 0x2, 0x102, 0x104, 0x7, 0x33, 0x2, 
    0x2, 0x103, 0x105, 0x5, 0x24, 0x13, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 
    0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x108, 0x7, 0x15, 0x2, 0x2, 0x107, 0xfa, 0x3, 0x2, 0x2, 
    0x2, 0x107, 0x100, 0x3, 0x2, 0x2, 0x2, 0x108, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0x10e, 0x5, 0x1c, 0xf, 0x2, 0x10a, 0x10b, 0x7, 0x2a, 0x2, 0x2, 
    0x10b, 0x10d, 0x5, 0x1c, 0xf, 0x2, 0x10c, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x10d, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x23, 0x3, 0x2, 0x2, 0x2, 0x110, 
    0x10e, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x2a, 0x2, 0x2, 0x112, 
    0x114, 0x5, 0x1c, 0xf, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x115, 
    0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x25, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 
    0x7, 0xc, 0x2, 0x2, 0x118, 0x119, 0x7, 0x14, 0x2, 0x2, 0x119, 0x11a, 
    0x5, 0x1c, 0xf, 0x2, 0x11a, 0x11b, 0x7, 0x15, 0x2, 0x2, 0x11b, 0x11d, 
    0x7, 0x18, 0x2, 0x2, 0x11c, 0x11e, 0x5, 0x14, 0xb, 0x2, 0x11d, 0x11c, 
    0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 
    0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x7, 0x19, 0x2, 0x2, 0x120, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x7, 0xc, 0x2, 0x2, 0x122, 0x123, 
    0x7, 0x14, 0x2, 0x2, 0x123, 0x124, 0x5, 0x1c, 0xf, 0x2, 0x124, 0x125, 
    0x7, 0x15, 0x2, 0x2, 0x125, 0x127, 0x7, 0x18, 0x2, 0x2, 0x126, 0x128, 
    0x5, 0x14, 0xb, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 
    0x7, 0x19, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x8, 0x2, 0x2, 0x12b, 0x12d, 
    0x7, 0x18, 0x2, 0x2, 0x12c, 0x12e, 0x5, 0x14, 0xb, 0x2, 0x12d, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 
    0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x7, 0x19, 0x2, 0x2, 0x130, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x131, 0x117, 0x3, 0x2, 0x2, 0x2, 0x131, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x132, 0x27, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 
    0x13, 0x2, 0x2, 0x134, 0x135, 0x7, 0x14, 0x2, 0x2, 0x135, 0x136, 0x5, 
    0x1c, 0xf, 0x2, 0x136, 0x137, 0x7, 0x15, 0x2, 0x2, 0x137, 0x139, 0x7, 
    0x18, 0x2, 0x2, 0x138, 0x13a, 0x5, 0x14, 0xb, 0x2, 0x139, 0x138, 0x3, 
    0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 
    0x2, 0x2, 0x2, 0x13b, 0x13c, 0x7, 0x19, 0x2, 0x2, 0x13c, 0x150, 0x3, 
    0x2, 0x2, 0x2, 0x13d, 0x13e, 0x7, 0xb, 0x2, 0x2, 0x13e, 0x13f, 0x7, 
    0x14, 0x2, 0x2, 0x13f, 0x140, 0x5, 0x18, 0xd, 0x2, 0x140, 0x141, 0x7, 
    0x2d, 0x2, 0x2, 0x141, 0x142, 0x5, 0x1c, 0xf, 0x2, 0x142, 0x143, 0x7, 
    0x29, 0x2, 0x2, 0x143, 0x144, 0x5, 0x1c, 0xf, 0x2, 0x144, 0x145, 0x7, 
    0x29, 0x2, 0x2, 0x145, 0x146, 0x5, 0x18, 0xd, 0x2, 0x146, 0x147, 0x5, 
    0x1a, 0xe, 0x2, 0x147, 0x148, 0x5, 0x1c, 0xf, 0x2, 0x148, 0x149, 0x7, 
    0x15, 0x2, 0x2, 0x149, 0x14b, 0x7, 0x18, 0x2, 0x2, 0x14a, 0x14c, 0x5, 
    0x14, 0xb, 0x2, 0x14b, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 
    0x2, 0x2, 0x2, 0x14c, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x7, 
    0x19, 0x2, 0x2, 0x14e, 0x150, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x133, 0x3, 
    0x2, 0x2, 0x2, 0x14f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x150, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x30, 0x34, 0x3f, 0x4e, 0x56, 0x5c, 0x61, 0x71, 0x77, 
    0x8c, 0x9c, 0xa1, 0xb2, 0xcf, 0xd1, 0xde, 0xf5, 0xf7, 0xfd, 0x104, 0x107, 
    0x10e, 0x115, 0x11d, 0x127, 0x12d, 0x131, 0x139, 0x14b, 0x14f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

miniCgrammarParser::Initializer miniCgrammarParser::_init;
