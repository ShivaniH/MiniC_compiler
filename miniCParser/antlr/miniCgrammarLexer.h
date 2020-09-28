
// Generated from miniCgrammar.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  miniCgrammarLexer : public antlr4::Lexer {
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

  miniCgrammarLexer(antlr4::CharStream *input);
  ~miniCgrammarLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

