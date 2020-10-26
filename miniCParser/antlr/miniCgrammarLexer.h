
// Generated from miniCgrammar.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  miniCgrammarLexer : public antlr4::Lexer {
public:
  enum {
    BoolLiteral = 1, Bool = 2, Break = 3, Callout = 4, Char = 5, Continue = 6, 
    Else = 7, False = 8, Float = 9, For = 10, If = 11, Int = 12, Long = 13, 
    Return = 14, True = 15, Uint = 16, Ulong = 17, While = 18, LeftParen = 19, 
    RightParen = 20, LeftBracket = 21, RightBracket = 22, LeftBrace = 23, 
    RightBrace = 24, Less = 25, LessEqual = 26, Greater = 27, GreaterEqual = 28, 
    Plus = 29, Minus = 30, Star = 31, Div = 32, Mod = 33, Caret = 34, And = 35, 
    Or = 36, Not = 37, Question = 38, Colon = 39, Semi = 40, Comma = 41, 
    SingleQuote = 42, DoubleQuote = 43, Assign = 44, PlusAssign = 45, MinusAssign = 46, 
    Equal = 47, NotEqual = 48, CharLiteral = 49, StringLiteral = 50, IntegerLiteral = 51, 
    Id = 52, Newline = 53, Whitespace = 54, Comment = 55, BlockComment = 56
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

