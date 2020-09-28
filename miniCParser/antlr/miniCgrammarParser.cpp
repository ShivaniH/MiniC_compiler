
// Generated from miniCgrammar.g4 by ANTLR 4.8


#include "miniCgrammarListener.h"

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

void miniCgrammarParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void miniCgrammarParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
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

miniCgrammarParser::DeclarationContext* miniCgrammarParser::DeclarationListContext::declaration() {
  return getRuleContext<miniCgrammarParser::DeclarationContext>(0);
}

miniCgrammarParser::DeclarationListContext* miniCgrammarParser::DeclarationListContext::declarationList() {
  return getRuleContext<miniCgrammarParser::DeclarationListContext>(0);
}


size_t miniCgrammarParser::DeclarationListContext::getRuleIndex() const {
  return miniCgrammarParser::RuleDeclarationList;
}

void miniCgrammarParser::DeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationList(this);
}

void miniCgrammarParser::DeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationList(this);
}

miniCgrammarParser::DeclarationListContext* miniCgrammarParser::declarationList() {
  DeclarationListContext *_localctx = _tracker.createInstance<DeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 2, miniCgrammarParser::RuleDeclarationList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(47);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(43);
      declaration();
      setState(44);
      declarationList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(46);
      declaration();
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

//----------------- DeclarationContext ------------------------------------------------------------------

miniCgrammarParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

miniCgrammarParser::VariableDeclContext* miniCgrammarParser::DeclarationContext::variableDecl() {
  return getRuleContext<miniCgrammarParser::VariableDeclContext>(0);
}

miniCgrammarParser::FunctionDeclContext* miniCgrammarParser::DeclarationContext::functionDecl() {
  return getRuleContext<miniCgrammarParser::FunctionDeclContext>(0);
}


size_t miniCgrammarParser::DeclarationContext::getRuleIndex() const {
  return miniCgrammarParser::RuleDeclaration;
}

void miniCgrammarParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void miniCgrammarParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

miniCgrammarParser::DeclarationContext* miniCgrammarParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, miniCgrammarParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(51);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(49);
      variableDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(50);
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

void miniCgrammarParser::VariableDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDecl(this);
}

void miniCgrammarParser::VariableDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDecl(this);
}

miniCgrammarParser::VariableDeclContext* miniCgrammarParser::variableDecl() {
  VariableDeclContext *_localctx = _tracker.createInstance<VariableDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, miniCgrammarParser::RuleVariableDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    dataType();
    setState(54);
    variableDeclList();
    setState(55);
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

miniCgrammarParser::SingleVarDeclContext* miniCgrammarParser::VariableDeclListContext::singleVarDecl() {
  return getRuleContext<miniCgrammarParser::SingleVarDeclContext>(0);
}

tree::TerminalNode* miniCgrammarParser::VariableDeclListContext::Comma() {
  return getToken(miniCgrammarParser::Comma, 0);
}

miniCgrammarParser::VariableDeclListContext* miniCgrammarParser::VariableDeclListContext::variableDeclList() {
  return getRuleContext<miniCgrammarParser::VariableDeclListContext>(0);
}


size_t miniCgrammarParser::VariableDeclListContext::getRuleIndex() const {
  return miniCgrammarParser::RuleVariableDeclList;
}

void miniCgrammarParser::VariableDeclListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclList(this);
}

void miniCgrammarParser::VariableDeclListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclList(this);
}

miniCgrammarParser::VariableDeclListContext* miniCgrammarParser::variableDeclList() {
  VariableDeclListContext *_localctx = _tracker.createInstance<VariableDeclListContext>(_ctx, getState());
  enterRule(_localctx, 8, miniCgrammarParser::RuleVariableDeclList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(57);
      singleVarDecl();
      setState(58);
      match(miniCgrammarParser::Comma);
      setState(59);
      variableDeclList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(61);
      singleVarDecl();
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

//----------------- SingleVarDeclContext ------------------------------------------------------------------

miniCgrammarParser::SingleVarDeclContext::SingleVarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* miniCgrammarParser::SingleVarDeclContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::SingleVarDeclContext::LeftBracket() {
  return getTokens(miniCgrammarParser::LeftBracket);
}

tree::TerminalNode* miniCgrammarParser::SingleVarDeclContext::LeftBracket(size_t i) {
  return getToken(miniCgrammarParser::LeftBracket, i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::SingleVarDeclContext::IntegerLiteral() {
  return getTokens(miniCgrammarParser::IntegerLiteral);
}

tree::TerminalNode* miniCgrammarParser::SingleVarDeclContext::IntegerLiteral(size_t i) {
  return getToken(miniCgrammarParser::IntegerLiteral, i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::SingleVarDeclContext::RightBracket() {
  return getTokens(miniCgrammarParser::RightBracket);
}

tree::TerminalNode* miniCgrammarParser::SingleVarDeclContext::RightBracket(size_t i) {
  return getToken(miniCgrammarParser::RightBracket, i);
}


size_t miniCgrammarParser::SingleVarDeclContext::getRuleIndex() const {
  return miniCgrammarParser::RuleSingleVarDecl;
}

void miniCgrammarParser::SingleVarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleVarDecl(this);
}

void miniCgrammarParser::SingleVarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleVarDecl(this);
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

tree::TerminalNode* miniCgrammarParser::DataTypeContext::Int() {
  return getToken(miniCgrammarParser::Int, 0);
}

tree::TerminalNode* miniCgrammarParser::DataTypeContext::Char() {
  return getToken(miniCgrammarParser::Char, 0);
}

tree::TerminalNode* miniCgrammarParser::DataTypeContext::Bool() {
  return getToken(miniCgrammarParser::Bool, 0);
}

tree::TerminalNode* miniCgrammarParser::DataTypeContext::Long() {
  return getToken(miniCgrammarParser::Long, 0);
}

tree::TerminalNode* miniCgrammarParser::DataTypeContext::Uint() {
  return getToken(miniCgrammarParser::Uint, 0);
}

tree::TerminalNode* miniCgrammarParser::DataTypeContext::Ulong() {
  return getToken(miniCgrammarParser::Ulong, 0);
}


size_t miniCgrammarParser::DataTypeContext::getRuleIndex() const {
  return miniCgrammarParser::RuleDataType;
}

void miniCgrammarParser::DataTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDataType(this);
}

void miniCgrammarParser::DataTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDataType(this);
}

miniCgrammarParser::DataTypeContext* miniCgrammarParser::dataType() {
  DataTypeContext *_localctx = _tracker.createInstance<DataTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, miniCgrammarParser::RuleDataType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << miniCgrammarParser::Bool)
      | (1ULL << miniCgrammarParser::Char)
      | (1ULL << miniCgrammarParser::Int)
      | (1ULL << miniCgrammarParser::Long)
      | (1ULL << miniCgrammarParser::Uint)
      | (1ULL << miniCgrammarParser::Ulong))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
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

void miniCgrammarParser::FunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDecl(this);
}

void miniCgrammarParser::FunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDecl(this);
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
    setState(80);
    dataType();
    setState(81);
    match(miniCgrammarParser::Id);
    setState(82);
    match(miniCgrammarParser::LeftParen);
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << miniCgrammarParser::Bool)
      | (1ULL << miniCgrammarParser::Char)
      | (1ULL << miniCgrammarParser::Int)
      | (1ULL << miniCgrammarParser::Long)
      | (1ULL << miniCgrammarParser::Uint)
      | (1ULL << miniCgrammarParser::Ulong))) != 0)) {
      setState(83);
      paramsList();
    }
    setState(86);
    match(miniCgrammarParser::RightParen);
    setState(87);
    match(miniCgrammarParser::LeftBrace);
    setState(89);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(88);
      statementList();
      break;
    }

    }
    setState(91);
    match(miniCgrammarParser::Return);
    setState(92);
    expr(0);
    setState(93);
    match(miniCgrammarParser::Semi);
    setState(94);
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

void miniCgrammarParser::ParamsListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamsList(this);
}

void miniCgrammarParser::ParamsListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamsList(this);
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
    setState(96);
    dataType();
    setState(97);
    match(miniCgrammarParser::Id);
    setState(105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == miniCgrammarParser::Comma) {
      setState(99);
      match(miniCgrammarParser::Comma);
      setState(100);
      dataType();
      setState(101);
      match(miniCgrammarParser::Id);
      setState(107);
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

miniCgrammarParser::StatementContext* miniCgrammarParser::StatementListContext::statement() {
  return getRuleContext<miniCgrammarParser::StatementContext>(0);
}

miniCgrammarParser::StatementListContext* miniCgrammarParser::StatementListContext::statementList() {
  return getRuleContext<miniCgrammarParser::StatementListContext>(0);
}


size_t miniCgrammarParser::StatementListContext::getRuleIndex() const {
  return miniCgrammarParser::RuleStatementList;
}

void miniCgrammarParser::StatementListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementList(this);
}

void miniCgrammarParser::StatementListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementList(this);
}

miniCgrammarParser::StatementListContext* miniCgrammarParser::statementList() {
  StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, getState());
  enterRule(_localctx, 18, miniCgrammarParser::RuleStatementList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(108);
      statement();
      setState(109);
      statementList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(111);
      statement();
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

//----------------- StatementContext ------------------------------------------------------------------

miniCgrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

miniCgrammarParser::VariableDeclContext* miniCgrammarParser::StatementContext::variableDecl() {
  return getRuleContext<miniCgrammarParser::VariableDeclContext>(0);
}

miniCgrammarParser::LocationContext* miniCgrammarParser::StatementContext::location() {
  return getRuleContext<miniCgrammarParser::LocationContext>(0);
}

miniCgrammarParser::AssignOpContext* miniCgrammarParser::StatementContext::assignOp() {
  return getRuleContext<miniCgrammarParser::AssignOpContext>(0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::StatementContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::StatementContext::Semi() {
  return getToken(miniCgrammarParser::Semi, 0);
}

miniCgrammarParser::ConditionalStmtContext* miniCgrammarParser::StatementContext::conditionalStmt() {
  return getRuleContext<miniCgrammarParser::ConditionalStmtContext>(0);
}

miniCgrammarParser::IterativeStmtContext* miniCgrammarParser::StatementContext::iterativeStmt() {
  return getRuleContext<miniCgrammarParser::IterativeStmtContext>(0);
}

tree::TerminalNode* miniCgrammarParser::StatementContext::Return() {
  return getToken(miniCgrammarParser::Return, 0);
}

tree::TerminalNode* miniCgrammarParser::StatementContext::Break() {
  return getToken(miniCgrammarParser::Break, 0);
}

tree::TerminalNode* miniCgrammarParser::StatementContext::Continue() {
  return getToken(miniCgrammarParser::Continue, 0);
}


size_t miniCgrammarParser::StatementContext::getRuleIndex() const {
  return miniCgrammarParser::RuleStatement;
}

void miniCgrammarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void miniCgrammarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

miniCgrammarParser::StatementContext* miniCgrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 20, miniCgrammarParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(114);
      variableDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
      location();
      setState(116);
      assignOp();
      setState(117);
      expr(0);
      setState(118);
      match(miniCgrammarParser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(120);
      expr(0);
      setState(121);
      match(miniCgrammarParser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(123);
      conditionalStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(124);
      iterativeStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(125);
      match(miniCgrammarParser::Return);
      setState(126);
      expr(0);
      setState(127);
      match(miniCgrammarParser::Semi);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(129);
      match(miniCgrammarParser::Break);
      setState(130);
      match(miniCgrammarParser::Semi);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(131);
      match(miniCgrammarParser::Continue);
      setState(132);
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

tree::TerminalNode* miniCgrammarParser::LocationContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::LocationContext::LeftBracket() {
  return getTokens(miniCgrammarParser::LeftBracket);
}

tree::TerminalNode* miniCgrammarParser::LocationContext::LeftBracket(size_t i) {
  return getToken(miniCgrammarParser::LeftBracket, i);
}

std::vector<miniCgrammarParser::ArrayExprContext *> miniCgrammarParser::LocationContext::arrayExpr() {
  return getRuleContexts<miniCgrammarParser::ArrayExprContext>();
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::LocationContext::arrayExpr(size_t i) {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::LocationContext::RightBracket() {
  return getTokens(miniCgrammarParser::RightBracket);
}

tree::TerminalNode* miniCgrammarParser::LocationContext::RightBracket(size_t i) {
  return getToken(miniCgrammarParser::RightBracket, i);
}


size_t miniCgrammarParser::LocationContext::getRuleIndex() const {
  return miniCgrammarParser::RuleLocation;
}

void miniCgrammarParser::LocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocation(this);
}

void miniCgrammarParser::LocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocation(this);
}

miniCgrammarParser::LocationContext* miniCgrammarParser::location() {
  LocationContext *_localctx = _tracker.createInstance<LocationContext>(_ctx, getState());
  enterRule(_localctx, 22, miniCgrammarParser::RuleLocation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(135);
      match(miniCgrammarParser::Id);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(136);
      match(miniCgrammarParser::Id);
      setState(137);
      match(miniCgrammarParser::LeftBracket);
      setState(138);
      arrayExpr(0);
      setState(139);
      match(miniCgrammarParser::RightBracket);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(141);
      match(miniCgrammarParser::Id);
      setState(142);
      match(miniCgrammarParser::LeftBracket);
      setState(143);
      arrayExpr(0);
      setState(144);
      match(miniCgrammarParser::RightBracket);
      setState(145);
      match(miniCgrammarParser::LeftBracket);
      setState(146);
      arrayExpr(0);
      setState(147);
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

tree::TerminalNode* miniCgrammarParser::AssignOpContext::Assign() {
  return getToken(miniCgrammarParser::Assign, 0);
}

tree::TerminalNode* miniCgrammarParser::AssignOpContext::PlusAssign() {
  return getToken(miniCgrammarParser::PlusAssign, 0);
}

tree::TerminalNode* miniCgrammarParser::AssignOpContext::MinusAssign() {
  return getToken(miniCgrammarParser::MinusAssign, 0);
}


size_t miniCgrammarParser::AssignOpContext::getRuleIndex() const {
  return miniCgrammarParser::RuleAssignOp;
}

void miniCgrammarParser::AssignOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignOp(this);
}

void miniCgrammarParser::AssignOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignOp(this);
}

miniCgrammarParser::AssignOpContext* miniCgrammarParser::assignOp() {
  AssignOpContext *_localctx = _tracker.createInstance<AssignOpContext>(_ctx, getState());
  enterRule(_localctx, 24, miniCgrammarParser::RuleAssignOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << miniCgrammarParser::Assign)
      | (1ULL << miniCgrammarParser::PlusAssign)
      | (1ULL << miniCgrammarParser::MinusAssign))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
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

tree::TerminalNode* miniCgrammarParser::ExprContext::BoolLiteral() {
  return getToken(miniCgrammarParser::BoolLiteral, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::IntegerLiteral() {
  return getToken(miniCgrammarParser::IntegerLiteral, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::StringLiteral() {
  return getToken(miniCgrammarParser::StringLiteral, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::CharLiteral() {
  return getToken(miniCgrammarParser::CharLiteral, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::ExprContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::ExprContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

miniCgrammarParser::LocationContext* miniCgrammarParser::ExprContext::location() {
  return getRuleContext<miniCgrammarParser::LocationContext>(0);
}

miniCgrammarParser::FunctionCallContext* miniCgrammarParser::ExprContext::functionCall() {
  return getRuleContext<miniCgrammarParser::FunctionCallContext>(0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Minus() {
  return getToken(miniCgrammarParser::Minus, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Not() {
  return getToken(miniCgrammarParser::Not, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Caret() {
  return getToken(miniCgrammarParser::Caret, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Star() {
  return getToken(miniCgrammarParser::Star, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Div() {
  return getToken(miniCgrammarParser::Div, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Mod() {
  return getToken(miniCgrammarParser::Mod, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Plus() {
  return getToken(miniCgrammarParser::Plus, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Less() {
  return getToken(miniCgrammarParser::Less, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Greater() {
  return getToken(miniCgrammarParser::Greater, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::LessEqual() {
  return getToken(miniCgrammarParser::LessEqual, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::GreaterEqual() {
  return getToken(miniCgrammarParser::GreaterEqual, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Equal() {
  return getToken(miniCgrammarParser::Equal, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::NotEqual() {
  return getToken(miniCgrammarParser::NotEqual, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::And() {
  return getToken(miniCgrammarParser::And, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Or() {
  return getToken(miniCgrammarParser::Or, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Question() {
  return getToken(miniCgrammarParser::Question, 0);
}

tree::TerminalNode* miniCgrammarParser::ExprContext::Colon() {
  return getToken(miniCgrammarParser::Colon, 0);
}


size_t miniCgrammarParser::ExprContext::getRuleIndex() const {
  return miniCgrammarParser::RuleExpr;
}

void miniCgrammarParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void miniCgrammarParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
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
    setState(168);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(154);
      match(miniCgrammarParser::BoolLiteral);
      break;
    }

    case 2: {
      setState(155);
      match(miniCgrammarParser::IntegerLiteral);
      break;
    }

    case 3: {
      setState(156);
      match(miniCgrammarParser::StringLiteral);
      break;
    }

    case 4: {
      setState(157);
      match(miniCgrammarParser::CharLiteral);
      break;
    }

    case 5: {
      setState(158);
      match(miniCgrammarParser::LeftParen);
      setState(159);
      expr(0);
      setState(160);
      match(miniCgrammarParser::RightParen);
      break;
    }

    case 6: {
      setState(162);
      location();
      break;
    }

    case 7: {
      setState(163);
      functionCall();
      break;
    }

    case 8: {
      setState(164);
      match(miniCgrammarParser::Minus);
      setState(165);
      expr(10);
      break;
    }

    case 9: {
      setState(166);
      match(miniCgrammarParser::Not);
      setState(167);
      expr(9);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(199);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(197);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(170);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(171);
          match(miniCgrammarParser::Caret);
          setState(172);
          expr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(173);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(174);
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
          setState(175);
          expr(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(176);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(177);
          _la = _input->LA(1);
          if (!(_la == miniCgrammarParser::Plus

          || _la == miniCgrammarParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(178);
          expr(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(179);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(180);
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
          setState(181);
          expr(6);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(182);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(183);
          _la = _input->LA(1);
          if (!(_la == miniCgrammarParser::Equal

          || _la == miniCgrammarParser::NotEqual)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(184);
          expr(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(185);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(186);
          match(miniCgrammarParser::And);
          setState(187);
          expr(4);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(188);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(189);
          match(miniCgrammarParser::Or);
          setState(190);
          expr(3);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(191);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(192);
          match(miniCgrammarParser::Question);
          setState(193);
          expr(0);
          setState(194);
          match(miniCgrammarParser::Colon);
          setState(195);
          expr(2);
          break;
        }

        } 
      }
      setState(201);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
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

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::IntegerLiteral() {
  return getToken(miniCgrammarParser::IntegerLiteral, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

std::vector<miniCgrammarParser::ArrayExprContext *> miniCgrammarParser::ArrayExprContext::arrayExpr() {
  return getRuleContexts<miniCgrammarParser::ArrayExprContext>();
}

miniCgrammarParser::ArrayExprContext* miniCgrammarParser::ArrayExprContext::arrayExpr(size_t i) {
  return getRuleContext<miniCgrammarParser::ArrayExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

miniCgrammarParser::LocationContext* miniCgrammarParser::ArrayExprContext::location() {
  return getRuleContext<miniCgrammarParser::LocationContext>(0);
}

miniCgrammarParser::FunctionCallContext* miniCgrammarParser::ArrayExprContext::functionCall() {
  return getRuleContext<miniCgrammarParser::FunctionCallContext>(0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Not() {
  return getToken(miniCgrammarParser::Not, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Caret() {
  return getToken(miniCgrammarParser::Caret, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Star() {
  return getToken(miniCgrammarParser::Star, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Div() {
  return getToken(miniCgrammarParser::Div, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Mod() {
  return getToken(miniCgrammarParser::Mod, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Plus() {
  return getToken(miniCgrammarParser::Plus, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Minus() {
  return getToken(miniCgrammarParser::Minus, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Less() {
  return getToken(miniCgrammarParser::Less, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Greater() {
  return getToken(miniCgrammarParser::Greater, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::LessEqual() {
  return getToken(miniCgrammarParser::LessEqual, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::GreaterEqual() {
  return getToken(miniCgrammarParser::GreaterEqual, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Equal() {
  return getToken(miniCgrammarParser::Equal, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::NotEqual() {
  return getToken(miniCgrammarParser::NotEqual, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::And() {
  return getToken(miniCgrammarParser::And, 0);
}

tree::TerminalNode* miniCgrammarParser::ArrayExprContext::Or() {
  return getToken(miniCgrammarParser::Or, 0);
}


size_t miniCgrammarParser::ArrayExprContext::getRuleIndex() const {
  return miniCgrammarParser::RuleArrayExpr;
}

void miniCgrammarParser::ArrayExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayExpr(this);
}

void miniCgrammarParser::ArrayExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayExpr(this);
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
    setState(212);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(203);
      match(miniCgrammarParser::IntegerLiteral);
      break;
    }

    case 2: {
      setState(204);
      match(miniCgrammarParser::LeftParen);
      setState(205);
      arrayExpr(0);
      setState(206);
      match(miniCgrammarParser::RightParen);
      break;
    }

    case 3: {
      setState(208);
      location();
      break;
    }

    case 4: {
      setState(209);
      functionCall();
      break;
    }

    case 5: {
      setState(210);
      match(miniCgrammarParser::Not);
      setState(211);
      arrayExpr(8);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(237);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(235);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ArrayExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArrayExpr);
          setState(214);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(215);
          match(miniCgrammarParser::Caret);
          setState(216);
          arrayExpr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ArrayExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArrayExpr);
          setState(217);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(218);
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
          setState(219);
          arrayExpr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ArrayExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArrayExpr);
          setState(220);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(221);
          _la = _input->LA(1);
          if (!(_la == miniCgrammarParser::Plus

          || _la == miniCgrammarParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(222);
          arrayExpr(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ArrayExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArrayExpr);
          setState(223);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(224);
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
          setState(225);
          arrayExpr(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ArrayExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArrayExpr);
          setState(226);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(227);
          _la = _input->LA(1);
          if (!(_la == miniCgrammarParser::Equal

          || _la == miniCgrammarParser::NotEqual)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(228);
          arrayExpr(4);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ArrayExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArrayExpr);
          setState(229);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(230);
          match(miniCgrammarParser::And);
          setState(231);
          arrayExpr(3);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ArrayExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArrayExpr);
          setState(232);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(233);
          match(miniCgrammarParser::Or);
          setState(234);
          arrayExpr(2);
          break;
        }

        } 
      }
      setState(239);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
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

tree::TerminalNode* miniCgrammarParser::FunctionCallContext::Id() {
  return getToken(miniCgrammarParser::Id, 0);
}

tree::TerminalNode* miniCgrammarParser::FunctionCallContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

tree::TerminalNode* miniCgrammarParser::FunctionCallContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

miniCgrammarParser::ArgsListContext* miniCgrammarParser::FunctionCallContext::argsList() {
  return getRuleContext<miniCgrammarParser::ArgsListContext>(0);
}

tree::TerminalNode* miniCgrammarParser::FunctionCallContext::Callout() {
  return getToken(miniCgrammarParser::Callout, 0);
}

tree::TerminalNode* miniCgrammarParser::FunctionCallContext::StringLiteral() {
  return getToken(miniCgrammarParser::StringLiteral, 0);
}

miniCgrammarParser::CalloutArgsContext* miniCgrammarParser::FunctionCallContext::calloutArgs() {
  return getRuleContext<miniCgrammarParser::CalloutArgsContext>(0);
}


size_t miniCgrammarParser::FunctionCallContext::getRuleIndex() const {
  return miniCgrammarParser::RuleFunctionCall;
}

void miniCgrammarParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void miniCgrammarParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

miniCgrammarParser::FunctionCallContext* miniCgrammarParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 30, miniCgrammarParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(253);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case miniCgrammarParser::Id: {
        enterOuterAlt(_localctx, 1);
        setState(240);
        match(miniCgrammarParser::Id);
        setState(241);
        match(miniCgrammarParser::LeftParen);
        setState(243);
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
          setState(242);
          argsList();
        }
        setState(245);
        match(miniCgrammarParser::RightParen);
        break;
      }

      case miniCgrammarParser::Callout: {
        enterOuterAlt(_localctx, 2);
        setState(246);
        match(miniCgrammarParser::Callout);
        setState(247);
        match(miniCgrammarParser::LeftParen);
        setState(248);
        match(miniCgrammarParser::StringLiteral);
        setState(250);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == miniCgrammarParser::Comma) {
          setState(249);
          calloutArgs();
        }
        setState(252);
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

void miniCgrammarParser::ArgsListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgsList(this);
}

void miniCgrammarParser::ArgsListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgsList(this);
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
    setState(255);
    expr(0);

    setState(260);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == miniCgrammarParser::Comma) {
      setState(256);
      match(miniCgrammarParser::Comma);
      setState(257);
      expr(0);
      setState(262);
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

void miniCgrammarParser::CalloutArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalloutArgs(this);
}

void miniCgrammarParser::CalloutArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalloutArgs(this);
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
    setState(265); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(263);
      match(miniCgrammarParser::Comma);
      setState(264);
      expr(0);
      setState(267); 
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

tree::TerminalNode* miniCgrammarParser::ConditionalStmtContext::If() {
  return getToken(miniCgrammarParser::If, 0);
}

tree::TerminalNode* miniCgrammarParser::ConditionalStmtContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

miniCgrammarParser::ExprContext* miniCgrammarParser::ConditionalStmtContext::expr() {
  return getRuleContext<miniCgrammarParser::ExprContext>(0);
}

tree::TerminalNode* miniCgrammarParser::ConditionalStmtContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::ConditionalStmtContext::LeftBrace() {
  return getTokens(miniCgrammarParser::LeftBrace);
}

tree::TerminalNode* miniCgrammarParser::ConditionalStmtContext::LeftBrace(size_t i) {
  return getToken(miniCgrammarParser::LeftBrace, i);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::ConditionalStmtContext::RightBrace() {
  return getTokens(miniCgrammarParser::RightBrace);
}

tree::TerminalNode* miniCgrammarParser::ConditionalStmtContext::RightBrace(size_t i) {
  return getToken(miniCgrammarParser::RightBrace, i);
}

std::vector<miniCgrammarParser::StatementListContext *> miniCgrammarParser::ConditionalStmtContext::statementList() {
  return getRuleContexts<miniCgrammarParser::StatementListContext>();
}

miniCgrammarParser::StatementListContext* miniCgrammarParser::ConditionalStmtContext::statementList(size_t i) {
  return getRuleContext<miniCgrammarParser::StatementListContext>(i);
}

tree::TerminalNode* miniCgrammarParser::ConditionalStmtContext::Else() {
  return getToken(miniCgrammarParser::Else, 0);
}


size_t miniCgrammarParser::ConditionalStmtContext::getRuleIndex() const {
  return miniCgrammarParser::RuleConditionalStmt;
}

void miniCgrammarParser::ConditionalStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalStmt(this);
}

void miniCgrammarParser::ConditionalStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalStmt(this);
}

miniCgrammarParser::ConditionalStmtContext* miniCgrammarParser::conditionalStmt() {
  ConditionalStmtContext *_localctx = _tracker.createInstance<ConditionalStmtContext>(_ctx, getState());
  enterRule(_localctx, 36, miniCgrammarParser::RuleConditionalStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(295);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(269);
      match(miniCgrammarParser::If);
      setState(270);
      match(miniCgrammarParser::LeftParen);
      setState(271);
      expr(0);
      setState(272);
      match(miniCgrammarParser::RightParen);
      setState(273);
      match(miniCgrammarParser::LeftBrace);
      setState(275);
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
        setState(274);
        statementList();
      }
      setState(277);
      match(miniCgrammarParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(279);
      match(miniCgrammarParser::If);
      setState(280);
      match(miniCgrammarParser::LeftParen);
      setState(281);
      expr(0);
      setState(282);
      match(miniCgrammarParser::RightParen);
      setState(283);
      match(miniCgrammarParser::LeftBrace);
      setState(285);
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
        setState(284);
        statementList();
      }
      setState(287);
      match(miniCgrammarParser::RightBrace);
      setState(288);
      match(miniCgrammarParser::Else);
      setState(289);
      match(miniCgrammarParser::LeftBrace);
      setState(291);
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
        setState(290);
        statementList();
      }
      setState(293);
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

tree::TerminalNode* miniCgrammarParser::IterativeStmtContext::While() {
  return getToken(miniCgrammarParser::While, 0);
}

tree::TerminalNode* miniCgrammarParser::IterativeStmtContext::LeftParen() {
  return getToken(miniCgrammarParser::LeftParen, 0);
}

std::vector<miniCgrammarParser::ExprContext *> miniCgrammarParser::IterativeStmtContext::expr() {
  return getRuleContexts<miniCgrammarParser::ExprContext>();
}

miniCgrammarParser::ExprContext* miniCgrammarParser::IterativeStmtContext::expr(size_t i) {
  return getRuleContext<miniCgrammarParser::ExprContext>(i);
}

tree::TerminalNode* miniCgrammarParser::IterativeStmtContext::RightParen() {
  return getToken(miniCgrammarParser::RightParen, 0);
}

tree::TerminalNode* miniCgrammarParser::IterativeStmtContext::LeftBrace() {
  return getToken(miniCgrammarParser::LeftBrace, 0);
}

tree::TerminalNode* miniCgrammarParser::IterativeStmtContext::RightBrace() {
  return getToken(miniCgrammarParser::RightBrace, 0);
}

miniCgrammarParser::StatementListContext* miniCgrammarParser::IterativeStmtContext::statementList() {
  return getRuleContext<miniCgrammarParser::StatementListContext>(0);
}

tree::TerminalNode* miniCgrammarParser::IterativeStmtContext::For() {
  return getToken(miniCgrammarParser::For, 0);
}

std::vector<miniCgrammarParser::LocationContext *> miniCgrammarParser::IterativeStmtContext::location() {
  return getRuleContexts<miniCgrammarParser::LocationContext>();
}

miniCgrammarParser::LocationContext* miniCgrammarParser::IterativeStmtContext::location(size_t i) {
  return getRuleContext<miniCgrammarParser::LocationContext>(i);
}

tree::TerminalNode* miniCgrammarParser::IterativeStmtContext::Assign() {
  return getToken(miniCgrammarParser::Assign, 0);
}

std::vector<tree::TerminalNode *> miniCgrammarParser::IterativeStmtContext::Semi() {
  return getTokens(miniCgrammarParser::Semi);
}

tree::TerminalNode* miniCgrammarParser::IterativeStmtContext::Semi(size_t i) {
  return getToken(miniCgrammarParser::Semi, i);
}

miniCgrammarParser::AssignOpContext* miniCgrammarParser::IterativeStmtContext::assignOp() {
  return getRuleContext<miniCgrammarParser::AssignOpContext>(0);
}


size_t miniCgrammarParser::IterativeStmtContext::getRuleIndex() const {
  return miniCgrammarParser::RuleIterativeStmt;
}

void miniCgrammarParser::IterativeStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterativeStmt(this);
}

void miniCgrammarParser::IterativeStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<miniCgrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterativeStmt(this);
}

miniCgrammarParser::IterativeStmtContext* miniCgrammarParser::iterativeStmt() {
  IterativeStmtContext *_localctx = _tracker.createInstance<IterativeStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, miniCgrammarParser::RuleIterativeStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case miniCgrammarParser::While: {
        enterOuterAlt(_localctx, 1);
        setState(297);
        match(miniCgrammarParser::While);
        setState(298);
        match(miniCgrammarParser::LeftParen);
        setState(299);
        expr(0);
        setState(300);
        match(miniCgrammarParser::RightParen);
        setState(301);
        match(miniCgrammarParser::LeftBrace);
        setState(303);
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
          setState(302);
          statementList();
        }
        setState(305);
        match(miniCgrammarParser::RightBrace);
        break;
      }

      case miniCgrammarParser::For: {
        enterOuterAlt(_localctx, 2);
        setState(307);
        match(miniCgrammarParser::For);
        setState(308);
        match(miniCgrammarParser::LeftParen);
        setState(309);
        location();
        setState(310);
        match(miniCgrammarParser::Assign);
        setState(311);
        expr(0);
        setState(312);
        match(miniCgrammarParser::Semi);
        setState(313);
        expr(0);
        setState(314);
        match(miniCgrammarParser::Semi);
        setState(315);
        location();
        setState(316);
        assignOp();
        setState(317);
        expr(0);
        setState(318);
        match(miniCgrammarParser::RightParen);
        setState(319);
        match(miniCgrammarParser::LeftBrace);
        setState(321);
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
          setState(320);
          statementList();
        }
        setState(323);
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
    0x3, 0x3a, 0x14a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x32, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x36, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x41, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x4f, 0xa, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x57, 0xa, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x5c, 0xa, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x6a, 0xa, 0xa, 0xc, 
    0xa, 0xe, 0xa, 0x6d, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x73, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0x88, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x98, 0xa, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x5, 0xf, 0xab, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xc8, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0xcb, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0xd7, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xee, 0xa, 0x10, 0xc, 0x10, 
    0xe, 0x10, 0xf1, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0xf6, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0xfd, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0x100, 0xa, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x105, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0x108, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0x10c, 
    0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0x10d, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x116, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x5, 0x14, 0x120, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x126, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
    0x12a, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x5, 0x15, 0x132, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x144, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x148, 
    0xa, 0x15, 0x3, 0x15, 0x2, 0x4, 0x1c, 0x1e, 0x16, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2, 0x8, 0x6, 0x2, 0x3, 0x3, 0x6, 0x6, 0xd, 
    0xe, 0x11, 0x12, 0x3, 0x2, 0x2d, 0x2f, 0x3, 0x2, 0x20, 0x22, 0x3, 0x2, 
    0x1e, 0x1f, 0x3, 0x2, 0x1a, 0x1d, 0x3, 0x2, 0x30, 0x31, 0x2, 0x16e, 
    0x2, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x31, 0x3, 0x2, 0x2, 0x2, 0x6, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x37, 0x3, 0x2, 0x2, 0x2, 0xa, 0x40, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x4e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x52, 0x3, 0x2, 0x2, 0x2, 0x12, 0x62, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x16, 0x87, 0x3, 0x2, 0x2, 0x2, 0x18, 0x97, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x20, 0xff, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x101, 0x3, 0x2, 0x2, 0x2, 0x24, 0x10b, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x129, 0x3, 0x2, 0x2, 0x2, 0x28, 0x147, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x2b, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x2c, 0x7, 0x2, 0x2, 0x3, 0x2c, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0x6, 0x4, 0x2, 0x2e, 0x2f, 
    0x5, 0x4, 0x3, 0x2, 0x2f, 0x32, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 0x5, 
    0x6, 0x4, 0x2, 0x31, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x31, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x5, 0x3, 0x2, 0x2, 0x2, 0x33, 0x36, 0x5, 0x8, 0x5, 
    0x2, 0x34, 0x36, 0x5, 0x10, 0x9, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x7, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x38, 0x5, 0xe, 0x8, 0x2, 0x38, 0x39, 0x5, 0xa, 0x6, 0x2, 0x39, 0x3a, 
    0x7, 0x29, 0x2, 0x2, 0x3a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x5, 
    0xc, 0x7, 0x2, 0x3c, 0x3d, 0x7, 0x2a, 0x2, 0x2, 0x3d, 0x3e, 0x5, 0xa, 
    0x6, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x41, 0x5, 0xc, 0x7, 
    0x2, 0x40, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0xb, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x36, 0x2, 0x2, 0x43, 
    0x44, 0x7, 0x16, 0x2, 0x2, 0x44, 0x45, 0x7, 0x35, 0x2, 0x2, 0x45, 0x46, 
    0x7, 0x17, 0x2, 0x2, 0x46, 0x47, 0x7, 0x16, 0x2, 0x2, 0x47, 0x48, 0x7, 
    0x35, 0x2, 0x2, 0x48, 0x4f, 0x7, 0x17, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x36, 
    0x2, 0x2, 0x4a, 0x4b, 0x7, 0x16, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x35, 0x2, 
    0x2, 0x4c, 0x4f, 0x7, 0x17, 0x2, 0x2, 0x4d, 0x4f, 0x7, 0x36, 0x2, 0x2, 
    0x4e, 0x42, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 
    0x9, 0x2, 0x2, 0x2, 0x51, 0xf, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x5, 
    0xe, 0x8, 0x2, 0x53, 0x54, 0x7, 0x36, 0x2, 0x2, 0x54, 0x56, 0x7, 0x14, 
    0x2, 0x2, 0x55, 0x57, 0x5, 0x12, 0xa, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x59, 0x7, 0x15, 0x2, 0x2, 0x59, 0x5b, 0x7, 0x18, 0x2, 0x2, 0x5a, 
    0x5c, 0x5, 0x14, 0xb, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 
    0xf, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x1c, 0xf, 0x2, 0x5f, 0x60, 0x7, 0x29, 
    0x2, 0x2, 0x60, 0x61, 0x7, 0x19, 0x2, 0x2, 0x61, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x63, 0x5, 0xe, 0x8, 0x2, 0x63, 0x64, 0x7, 0x36, 0x2, 0x2, 
    0x64, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x2a, 0x2, 0x2, 0x66, 
    0x67, 0x5, 0xe, 0x8, 0x2, 0x67, 0x68, 0x7, 0x36, 0x2, 0x2, 0x68, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x6f, 0x5, 0x16, 0xc, 0x2, 0x6f, 0x70, 0x5, 0x14, 0xb, 0x2, 
    0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x73, 0x5, 0x16, 0xc, 0x2, 0x72, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x88, 0x5, 0x8, 0x5, 0x2, 0x75, 0x76, 0x5, 
    0x18, 0xd, 0x2, 0x76, 0x77, 0x5, 0x1a, 0xe, 0x2, 0x77, 0x78, 0x5, 0x1c, 
    0xf, 0x2, 0x78, 0x79, 0x7, 0x29, 0x2, 0x2, 0x79, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x7b, 0x5, 0x1c, 0xf, 0x2, 0x7b, 0x7c, 0x7, 0x29, 0x2, 0x2, 
    0x7c, 0x88, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x88, 0x5, 0x26, 0x14, 0x2, 0x7e, 
    0x88, 0x5, 0x28, 0x15, 0x2, 0x7f, 0x80, 0x7, 0xf, 0x2, 0x2, 0x80, 0x81, 
    0x5, 0x1c, 0xf, 0x2, 0x81, 0x82, 0x7, 0x29, 0x2, 0x2, 0x82, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x4, 0x2, 0x2, 0x84, 0x88, 0x7, 0x29, 
    0x2, 0x2, 0x85, 0x86, 0x7, 0x7, 0x2, 0x2, 0x86, 0x88, 0x7, 0x29, 0x2, 
    0x2, 0x87, 0x74, 0x3, 0x2, 0x2, 0x2, 0x87, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x87, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x87, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x87, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x87, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x87, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x98, 0x7, 0x36, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x36, 
    0x2, 0x2, 0x8b, 0x8c, 0x7, 0x16, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x1e, 0x10, 
    0x2, 0x8d, 0x8e, 0x7, 0x17, 0x2, 0x2, 0x8e, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x90, 0x7, 0x36, 0x2, 0x2, 0x90, 0x91, 0x7, 0x16, 0x2, 0x2, 0x91, 
    0x92, 0x5, 0x1e, 0x10, 0x2, 0x92, 0x93, 0x7, 0x17, 0x2, 0x2, 0x93, 0x94, 
    0x7, 0x16, 0x2, 0x2, 0x94, 0x95, 0x5, 0x1e, 0x10, 0x2, 0x95, 0x96, 0x7, 
    0x17, 0x2, 0x2, 0x96, 0x98, 0x3, 0x2, 0x2, 0x2, 0x97, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x97, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x19, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x9, 0x3, 0x2, 0x2, 
    0x9a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x8, 0xf, 0x1, 0x2, 0x9c, 
    0xab, 0x7, 0x34, 0x2, 0x2, 0x9d, 0xab, 0x7, 0x35, 0x2, 0x2, 0x9e, 0xab, 
    0x7, 0x33, 0x2, 0x2, 0x9f, 0xab, 0x7, 0x32, 0x2, 0x2, 0xa0, 0xa1, 0x7, 
    0x14, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x1c, 0xf, 0x2, 0xa2, 0xa3, 0x7, 0x15, 
    0x2, 0x2, 0xa3, 0xab, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xab, 0x5, 0x18, 0xd, 
    0x2, 0xa5, 0xab, 0x5, 0x20, 0x11, 0x2, 0xa6, 0xa7, 0x7, 0x1f, 0x2, 0x2, 
    0xa7, 0xab, 0x5, 0x1c, 0xf, 0xc, 0xa8, 0xa9, 0x7, 0x26, 0x2, 0x2, 0xa9, 
    0xab, 0x5, 0x1c, 0xf, 0xb, 0xaa, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x9f, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xab, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0xad, 0xc, 0xa, 0x2, 0x2, 0xad, 0xae, 0x7, 0x23, 0x2, 0x2, 0xae, 
    0xc8, 0x5, 0x1c, 0xf, 0xa, 0xaf, 0xb0, 0xc, 0x9, 0x2, 0x2, 0xb0, 0xb1, 
    0x9, 0x4, 0x2, 0x2, 0xb1, 0xc8, 0x5, 0x1c, 0xf, 0xa, 0xb2, 0xb3, 0xc, 
    0x8, 0x2, 0x2, 0xb3, 0xb4, 0x9, 0x5, 0x2, 0x2, 0xb4, 0xc8, 0x5, 0x1c, 
    0xf, 0x9, 0xb5, 0xb6, 0xc, 0x7, 0x2, 0x2, 0xb6, 0xb7, 0x9, 0x6, 0x2, 
    0x2, 0xb7, 0xc8, 0x5, 0x1c, 0xf, 0x8, 0xb8, 0xb9, 0xc, 0x6, 0x2, 0x2, 
    0xb9, 0xba, 0x9, 0x7, 0x2, 0x2, 0xba, 0xc8, 0x5, 0x1c, 0xf, 0x7, 0xbb, 
    0xbc, 0xc, 0x5, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x24, 0x2, 0x2, 0xbd, 0xc8, 
    0x5, 0x1c, 0xf, 0x6, 0xbe, 0xbf, 0xc, 0x4, 0x2, 0x2, 0xbf, 0xc0, 0x7, 
    0x25, 0x2, 0x2, 0xc0, 0xc8, 0x5, 0x1c, 0xf, 0x5, 0xc1, 0xc2, 0xc, 0x3, 
    0x2, 0x2, 0xc2, 0xc3, 0x7, 0x27, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x1c, 0xf, 
    0x2, 0xc4, 0xc5, 0x7, 0x28, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x1c, 0xf, 0x4, 
    0xc6, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xac, 0x3, 0x2, 0x2, 0x2, 0xc7, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xc7, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x8, 0x10, 0x1, 0x2, 0xcd, 
    0xd7, 0x7, 0x35, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x14, 0x2, 0x2, 0xcf, 0xd0, 
    0x5, 0x1e, 0x10, 0x2, 0xd0, 0xd1, 0x7, 0x15, 0x2, 0x2, 0xd1, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0xd7, 0x5, 0x18, 0xd, 0x2, 0xd3, 0xd7, 0x5, 0x20, 
    0x11, 0x2, 0xd4, 0xd5, 0x7, 0x26, 0x2, 0x2, 0xd5, 0xd7, 0x5, 0x1e, 0x10, 
    0xa, 0xd6, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xd6, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd6, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xef, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 
    0xc, 0x9, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x23, 0x2, 0x2, 0xda, 0xee, 0x5, 
    0x1e, 0x10, 0x9, 0xdb, 0xdc, 0xc, 0x8, 0x2, 0x2, 0xdc, 0xdd, 0x9, 0x4, 
    0x2, 0x2, 0xdd, 0xee, 0x5, 0x1e, 0x10, 0x9, 0xde, 0xdf, 0xc, 0x7, 0x2, 
    0x2, 0xdf, 0xe0, 0x9, 0x5, 0x2, 0x2, 0xe0, 0xee, 0x5, 0x1e, 0x10, 0x8, 
    0xe1, 0xe2, 0xc, 0x6, 0x2, 0x2, 0xe2, 0xe3, 0x9, 0x6, 0x2, 0x2, 0xe3, 
    0xee, 0x5, 0x1e, 0x10, 0x7, 0xe4, 0xe5, 0xc, 0x5, 0x2, 0x2, 0xe5, 0xe6, 
    0x9, 0x7, 0x2, 0x2, 0xe6, 0xee, 0x5, 0x1e, 0x10, 0x6, 0xe7, 0xe8, 0xc, 
    0x4, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x24, 0x2, 0x2, 0xe9, 0xee, 0x5, 0x1e, 
    0x10, 0x5, 0xea, 0xeb, 0xc, 0x3, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x25, 0x2, 
    0x2, 0xec, 0xee, 0x5, 0x1e, 0x10, 0x4, 0xed, 0xd8, 0x3, 0x2, 0x2, 0x2, 
    0xed, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xde, 0x3, 0x2, 0x2, 0x2, 0xed, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0xed, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xed, 0xe7, 
    0x3, 0x2, 0x2, 0x2, 0xed, 0xea, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf3, 0x7, 0x36, 0x2, 0x2, 0xf3, 0xf5, 0x7, 0x14, 0x2, 0x2, 
    0xf4, 0xf6, 0x5, 0x22, 0x12, 0x2, 0xf5, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0x100, 
    0x7, 0x15, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x5, 0x2, 0x2, 0xf9, 0xfa, 0x7, 
    0x14, 0x2, 0x2, 0xfa, 0xfc, 0x7, 0x33, 0x2, 0x2, 0xfb, 0xfd, 0x5, 0x24, 
    0x13, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x100, 0x7, 0x15, 0x2, 0x2, 
    0xff, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xff, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x101, 0x106, 0x5, 0x1c, 0xf, 0x2, 0x102, 
    0x103, 0x7, 0x2a, 0x2, 0x2, 0x103, 0x105, 0x5, 0x1c, 0xf, 0x2, 0x104, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x108, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
    0x7, 0x2a, 0x2, 0x2, 0x10a, 0x10c, 0x5, 0x1c, 0xf, 0x2, 0x10b, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x110, 0x7, 0xc, 0x2, 0x2, 0x110, 0x111, 0x7, 
    0x14, 0x2, 0x2, 0x111, 0x112, 0x5, 0x1c, 0xf, 0x2, 0x112, 0x113, 0x7, 
    0x15, 0x2, 0x2, 0x113, 0x115, 0x7, 0x18, 0x2, 0x2, 0x114, 0x116, 0x5, 
    0x14, 0xb, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x7, 
    0x19, 0x2, 0x2, 0x118, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 
    0xc, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x14, 0x2, 0x2, 0x11b, 0x11c, 0x5, 
    0x1c, 0xf, 0x2, 0x11c, 0x11d, 0x7, 0x15, 0x2, 0x2, 0x11d, 0x11f, 0x7, 
    0x18, 0x2, 0x2, 0x11e, 0x120, 0x5, 0x14, 0xb, 0x2, 0x11f, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x122, 0x7, 0x19, 0x2, 0x2, 0x122, 0x123, 0x7, 
    0x8, 0x2, 0x2, 0x123, 0x125, 0x7, 0x18, 0x2, 0x2, 0x124, 0x126, 0x5, 
    0x14, 0xb, 0x2, 0x125, 0x124, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 
    0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x7, 
    0x19, 0x2, 0x2, 0x128, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x129, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x129, 0x119, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x12c, 0x7, 0x13, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x14, 
    0x2, 0x2, 0x12d, 0x12e, 0x5, 0x1c, 0xf, 0x2, 0x12e, 0x12f, 0x7, 0x15, 
    0x2, 0x2, 0x12f, 0x131, 0x7, 0x18, 0x2, 0x2, 0x130, 0x132, 0x5, 0x14, 
    0xb, 0x2, 0x131, 0x130, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 0x19, 
    0x2, 0x2, 0x134, 0x148, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x7, 0xb, 
    0x2, 0x2, 0x136, 0x137, 0x7, 0x14, 0x2, 0x2, 0x137, 0x138, 0x5, 0x18, 
    0xd, 0x2, 0x138, 0x139, 0x7, 0x2d, 0x2, 0x2, 0x139, 0x13a, 0x5, 0x1c, 
    0xf, 0x2, 0x13a, 0x13b, 0x7, 0x29, 0x2, 0x2, 0x13b, 0x13c, 0x5, 0x1c, 
    0xf, 0x2, 0x13c, 0x13d, 0x7, 0x29, 0x2, 0x2, 0x13d, 0x13e, 0x5, 0x18, 
    0xd, 0x2, 0x13e, 0x13f, 0x5, 0x1a, 0xe, 0x2, 0x13f, 0x140, 0x5, 0x1c, 
    0xf, 0x2, 0x140, 0x141, 0x7, 0x15, 0x2, 0x2, 0x141, 0x143, 0x7, 0x18, 
    0x2, 0x2, 0x142, 0x144, 0x5, 0x14, 0xb, 0x2, 0x143, 0x142, 0x3, 0x2, 
    0x2, 0x2, 0x143, 0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x146, 0x7, 0x19, 0x2, 0x2, 0x146, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x147, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x147, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x31, 0x35, 0x40, 0x4e, 
    0x56, 0x5b, 0x6b, 0x72, 0x87, 0x97, 0xaa, 0xc7, 0xc9, 0xd6, 0xed, 0xef, 
    0xf5, 0xfc, 0xff, 0x106, 0x10d, 0x115, 0x11f, 0x125, 0x129, 0x131, 0x143, 
    0x147, 
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
