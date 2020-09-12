// Generated from /home/shivanih/Desktop/IIITHsem3/Compilers/MajorProject/miniCParser/antlr/miniCgrammar.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class miniCgrammarParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Bool=1, Break=2, Callout=3, Char=4, Continue=5, Else=6, False=7, Float=8, 
		For=9, If=10, Int=11, Long=12, Return=13, True=14, Uint=15, Ulong=16, 
		While=17, LeftParen=18, RightParen=19, LeftBracket=20, RightBracket=21, 
		LeftBrace=22, RightBrace=23, Less=24, LessEqual=25, Greater=26, GreaterEqual=27, 
		Plus=28, Minus=29, Star=30, Div=31, Mod=32, Caret=33, And=34, Or=35, Not=36, 
		Question=37, Colon=38, Semi=39, Comma=40, SingleQuote=41, DoubleQuote=42, 
		Assign=43, PlusAssign=44, MinusAssign=45, Equal=46, NotEqual=47, CharLiteral=48, 
		StringLiteral=49, BoolLiteral=50, IntegerLiteral=51, Id=52, Newline=53, 
		Whitespace=54, Comment=55, BlockComment=56;
	public static final int
		RULE_program = 0, RULE_declarationList = 1, RULE_declaration = 2, RULE_variableDecl = 3, 
		RULE_variableDeclList = 4, RULE_singleVarDecl = 5, RULE_dataType = 6, 
		RULE_functionDecl = 7, RULE_paramsList = 8, RULE_statementList = 9, RULE_statement = 10, 
		RULE_location = 11, RULE_assignOp = 12, RULE_expr = 13, RULE_arrayExpr = 14, 
		RULE_functionCall = 15, RULE_argsList = 16, RULE_calloutArgs = 17, RULE_conditionalStmt = 18, 
		RULE_iterativeStmt = 19;
	public static final String[] ruleNames = {
		"program", "declarationList", "declaration", "variableDecl", "variableDeclList", 
		"singleVarDecl", "dataType", "functionDecl", "paramsList", "statementList", 
		"statement", "location", "assignOp", "expr", "arrayExpr", "functionCall", 
		"argsList", "calloutArgs", "conditionalStmt", "iterativeStmt"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'bool'", "'break'", "'callout'", "'char'", "'continue'", "'else'", 
		"'false'", "'float'", "'for'", "'if'", "'int'", "'long'", "'return'", 
		"'true'", "'uint'", "'ulong'", "'while'", "'('", "')'", "'['", "']'", 
		"'{'", "'}'", "'<'", "'<='", "'>'", "'>='", "'+'", "'-'", "'*'", "'/'", 
		"'%'", "'^'", "'&&'", "'||'", "'!'", "'?'", "':'", "';'", "','", "'''", 
		"'\"'", "'='", "'+='", "'-='", "'=='", "'!='"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "Bool", "Break", "Callout", "Char", "Continue", "Else", "False", 
		"Float", "For", "If", "Int", "Long", "Return", "True", "Uint", "Ulong", 
		"While", "LeftParen", "RightParen", "LeftBracket", "RightBracket", "LeftBrace", 
		"RightBrace", "Less", "LessEqual", "Greater", "GreaterEqual", "Plus", 
		"Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Not", "Question", 
		"Colon", "Semi", "Comma", "SingleQuote", "DoubleQuote", "Assign", "PlusAssign", 
		"MinusAssign", "Equal", "NotEqual", "CharLiteral", "StringLiteral", "BoolLiteral", 
		"IntegerLiteral", "Id", "Newline", "Whitespace", "Comment", "BlockComment"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "miniCgrammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public miniCgrammarParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProgramContext extends ParserRuleContext {
		public DeclarationListContext declarationList() {
			return getRuleContext(DeclarationListContext.class,0);
		}
		public TerminalNode EOF() { return getToken(miniCgrammarParser.EOF, 0); }
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(40);
			declarationList();
			setState(41);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationListContext extends ParserRuleContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public DeclarationListContext declarationList() {
			return getRuleContext(DeclarationListContext.class,0);
		}
		public DeclarationListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationList; }
	}

	public final DeclarationListContext declarationList() throws RecognitionException {
		DeclarationListContext _localctx = new DeclarationListContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_declarationList);
		try {
			setState(47);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(43);
				declaration();
				setState(44);
				declarationList();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(46);
				declaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationContext extends ParserRuleContext {
		public VariableDeclContext variableDecl() {
			return getRuleContext(VariableDeclContext.class,0);
		}
		public FunctionDeclContext functionDecl() {
			return getRuleContext(FunctionDeclContext.class,0);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_declaration);
		try {
			setState(51);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(49);
				variableDecl();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(50);
				functionDecl();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableDeclContext extends ParserRuleContext {
		public DataTypeContext dataType() {
			return getRuleContext(DataTypeContext.class,0);
		}
		public VariableDeclListContext variableDeclList() {
			return getRuleContext(VariableDeclListContext.class,0);
		}
		public VariableDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDecl; }
	}

	public final VariableDeclContext variableDecl() throws RecognitionException {
		VariableDeclContext _localctx = new VariableDeclContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_variableDecl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(53);
			dataType();
			setState(54);
			variableDeclList();
			setState(55);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableDeclListContext extends ParserRuleContext {
		public SingleVarDeclContext singleVarDecl() {
			return getRuleContext(SingleVarDeclContext.class,0);
		}
		public VariableDeclListContext variableDeclList() {
			return getRuleContext(VariableDeclListContext.class,0);
		}
		public VariableDeclListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclList; }
	}

	public final VariableDeclListContext variableDeclList() throws RecognitionException {
		VariableDeclListContext _localctx = new VariableDeclListContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_variableDeclList);
		try {
			setState(62);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(57);
				singleVarDecl();
				setState(58);
				match(Comma);
				setState(59);
				variableDeclList();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(61);
				singleVarDecl();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SingleVarDeclContext extends ParserRuleContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public List<TerminalNode> IntegerLiteral() { return getTokens(miniCgrammarParser.IntegerLiteral); }
		public TerminalNode IntegerLiteral(int i) {
			return getToken(miniCgrammarParser.IntegerLiteral, i);
		}
		public SingleVarDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleVarDecl; }
	}

	public final SingleVarDeclContext singleVarDecl() throws RecognitionException {
		SingleVarDeclContext _localctx = new SingleVarDeclContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_singleVarDecl);
		try {
			setState(76);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(64);
				match(Id);
				setState(65);
				match(LeftBracket);
				setState(66);
				match(IntegerLiteral);
				setState(67);
				match(RightBracket);
				setState(68);
				match(LeftBracket);
				setState(69);
				match(IntegerLiteral);
				setState(70);
				match(RightBracket);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(71);
				match(Id);
				setState(72);
				match(LeftBracket);
				setState(73);
				match(IntegerLiteral);
				setState(74);
				match(RightBracket);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(75);
				match(Id);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DataTypeContext extends ParserRuleContext {
		public TerminalNode Int() { return getToken(miniCgrammarParser.Int, 0); }
		public TerminalNode Char() { return getToken(miniCgrammarParser.Char, 0); }
		public TerminalNode Bool() { return getToken(miniCgrammarParser.Bool, 0); }
		public TerminalNode Long() { return getToken(miniCgrammarParser.Long, 0); }
		public TerminalNode Uint() { return getToken(miniCgrammarParser.Uint, 0); }
		public TerminalNode Ulong() { return getToken(miniCgrammarParser.Ulong, 0); }
		public DataTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dataType; }
	}

	public final DataTypeContext dataType() throws RecognitionException {
		DataTypeContext _localctx = new DataTypeContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_dataType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(78);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Char) | (1L << Int) | (1L << Long) | (1L << Uint) | (1L << Ulong))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionDeclContext extends ParserRuleContext {
		public DataTypeContext dataType() {
			return getRuleContext(DataTypeContext.class,0);
		}
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public TerminalNode Return() { return getToken(miniCgrammarParser.Return, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ParamsListContext paramsList() {
			return getRuleContext(ParamsListContext.class,0);
		}
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public FunctionDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDecl; }
	}

	public final FunctionDeclContext functionDecl() throws RecognitionException {
		FunctionDeclContext _localctx = new FunctionDeclContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_functionDecl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(80);
			dataType();
			setState(81);
			match(Id);
			setState(82);
			match(LeftParen);
			setState(84);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Char) | (1L << Int) | (1L << Long) | (1L << Uint) | (1L << Ulong))) != 0)) {
				{
				setState(83);
				paramsList();
				}
			}

			setState(86);
			match(RightParen);
			setState(87);
			match(LeftBrace);
			setState(89);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				setState(88);
				statementList();
				}
				break;
			}
			setState(91);
			match(Return);
			setState(92);
			expr(0);
			setState(93);
			match(Semi);
			setState(94);
			match(RightBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamsListContext extends ParserRuleContext {
		public List<DataTypeContext> dataType() {
			return getRuleContexts(DataTypeContext.class);
		}
		public DataTypeContext dataType(int i) {
			return getRuleContext(DataTypeContext.class,i);
		}
		public List<TerminalNode> Id() { return getTokens(miniCgrammarParser.Id); }
		public TerminalNode Id(int i) {
			return getToken(miniCgrammarParser.Id, i);
		}
		public ParamsListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramsList; }
	}

	public final ParamsListContext paramsList() throws RecognitionException {
		ParamsListContext _localctx = new ParamsListContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_paramsList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(96);
			dataType();
			setState(97);
			match(Id);
			}
			setState(105);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(99);
				match(Comma);
				setState(100);
				dataType();
				setState(101);
				match(Id);
				}
				}
				setState(107);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementListContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public StatementListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statementList; }
	}

	public final StatementListContext statementList() throws RecognitionException {
		StatementListContext _localctx = new StatementListContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_statementList);
		try {
			setState(112);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(108);
				statement();
				setState(109);
				statementList();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(111);
				statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public VariableDeclContext variableDecl() {
			return getRuleContext(VariableDeclContext.class,0);
		}
		public LocationContext location() {
			return getRuleContext(LocationContext.class,0);
		}
		public AssignOpContext assignOp() {
			return getRuleContext(AssignOpContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ConditionalStmtContext conditionalStmt() {
			return getRuleContext(ConditionalStmtContext.class,0);
		}
		public IterativeStmtContext iterativeStmt() {
			return getRuleContext(IterativeStmtContext.class,0);
		}
		public TerminalNode Return() { return getToken(miniCgrammarParser.Return, 0); }
		public TerminalNode Break() { return getToken(miniCgrammarParser.Break, 0); }
		public TerminalNode Continue() { return getToken(miniCgrammarParser.Continue, 0); }
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_statement);
		try {
			setState(133);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(114);
				variableDecl();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(115);
				location();
				setState(116);
				assignOp();
				setState(117);
				expr(0);
				setState(118);
				match(Semi);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(120);
				expr(0);
				setState(121);
				match(Semi);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(123);
				conditionalStmt();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(124);
				iterativeStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(125);
				match(Return);
				setState(126);
				expr(0);
				setState(127);
				match(Semi);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(129);
				match(Break);
				setState(130);
				match(Semi);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(131);
				match(Continue);
				setState(132);
				match(Semi);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LocationContext extends ParserRuleContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public List<ArrayExprContext> arrayExpr() {
			return getRuleContexts(ArrayExprContext.class);
		}
		public ArrayExprContext arrayExpr(int i) {
			return getRuleContext(ArrayExprContext.class,i);
		}
		public LocationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_location; }
	}

	public final LocationContext location() throws RecognitionException {
		LocationContext _localctx = new LocationContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_location);
		try {
			setState(149);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(135);
				match(Id);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(136);
				match(Id);
				setState(137);
				match(LeftBracket);
				setState(138);
				arrayExpr(0);
				setState(139);
				match(RightBracket);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(141);
				match(Id);
				setState(142);
				match(LeftBracket);
				setState(143);
				arrayExpr(0);
				setState(144);
				match(RightBracket);
				setState(145);
				match(LeftBracket);
				setState(146);
				arrayExpr(0);
				setState(147);
				match(RightBracket);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignOpContext extends ParserRuleContext {
		public AssignOpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignOp; }
	}

	public final AssignOpContext assignOp() throws RecognitionException {
		AssignOpContext _localctx = new AssignOpContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_assignOp);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(151);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Assign) | (1L << PlusAssign) | (1L << MinusAssign))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public TerminalNode BoolLiteral() { return getToken(miniCgrammarParser.BoolLiteral, 0); }
		public TerminalNode IntegerLiteral() { return getToken(miniCgrammarParser.IntegerLiteral, 0); }
		public TerminalNode StringLiteral() { return getToken(miniCgrammarParser.StringLiteral, 0); }
		public TerminalNode CharLiteral() { return getToken(miniCgrammarParser.CharLiteral, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public LocationContext location() {
			return getRuleContext(LocationContext.class,0);
		}
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(168);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				{
				setState(154);
				match(BoolLiteral);
				}
				break;
			case 2:
				{
				setState(155);
				match(IntegerLiteral);
				}
				break;
			case 3:
				{
				setState(156);
				match(StringLiteral);
				}
				break;
			case 4:
				{
				setState(157);
				match(CharLiteral);
				}
				break;
			case 5:
				{
				setState(158);
				match(LeftParen);
				setState(159);
				expr(0);
				setState(160);
				match(RightParen);
				}
				break;
			case 6:
				{
				setState(162);
				location();
				}
				break;
			case 7:
				{
				setState(163);
				functionCall();
				}
				break;
			case 8:
				{
				setState(164);
				match(Minus);
				setState(165);
				expr(10);
				}
				break;
			case 9:
				{
				setState(166);
				match(Not);
				setState(167);
				expr(9);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(199);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(197);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(170);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(171);
						match(Caret);
						setState(172);
						expr(8);
						}
						break;
					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(173);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(174);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Star) | (1L << Div) | (1L << Mod))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(175);
						expr(8);
						}
						break;
					case 3:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(176);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(177);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(178);
						expr(7);
						}
						break;
					case 4:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(179);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(180);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Less) | (1L << LessEqual) | (1L << Greater) | (1L << GreaterEqual))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(181);
						expr(6);
						}
						break;
					case 5:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(182);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(183);
						_la = _input.LA(1);
						if ( !(_la==Equal || _la==NotEqual) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(184);
						expr(5);
						}
						break;
					case 6:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(185);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(186);
						match(And);
						setState(187);
						expr(4);
						}
						break;
					case 7:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(188);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(189);
						match(Or);
						setState(190);
						expr(3);
						}
						break;
					case 8:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(191);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(192);
						match(Question);
						setState(193);
						expr(0);
						setState(194);
						match(Colon);
						setState(195);
						expr(2);
						}
						break;
					}
					} 
				}
				setState(201);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ArrayExprContext extends ParserRuleContext {
		public TerminalNode IntegerLiteral() { return getToken(miniCgrammarParser.IntegerLiteral, 0); }
		public List<ArrayExprContext> arrayExpr() {
			return getRuleContexts(ArrayExprContext.class);
		}
		public ArrayExprContext arrayExpr(int i) {
			return getRuleContext(ArrayExprContext.class,i);
		}
		public LocationContext location() {
			return getRuleContext(LocationContext.class,0);
		}
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public ArrayExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrayExpr; }
	}

	public final ArrayExprContext arrayExpr() throws RecognitionException {
		return arrayExpr(0);
	}

	private ArrayExprContext arrayExpr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ArrayExprContext _localctx = new ArrayExprContext(_ctx, _parentState);
		ArrayExprContext _prevctx = _localctx;
		int _startState = 28;
		enterRecursionRule(_localctx, 28, RULE_arrayExpr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(212);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				setState(203);
				match(IntegerLiteral);
				}
				break;
			case 2:
				{
				setState(204);
				match(LeftParen);
				setState(205);
				arrayExpr(0);
				setState(206);
				match(RightParen);
				}
				break;
			case 3:
				{
				setState(208);
				location();
				}
				break;
			case 4:
				{
				setState(209);
				functionCall();
				}
				break;
			case 5:
				{
				setState(210);
				match(Not);
				setState(211);
				arrayExpr(8);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(237);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(235);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
					case 1:
						{
						_localctx = new ArrayExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(214);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(215);
						match(Caret);
						setState(216);
						arrayExpr(7);
						}
						break;
					case 2:
						{
						_localctx = new ArrayExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(217);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(218);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Star) | (1L << Div) | (1L << Mod))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(219);
						arrayExpr(7);
						}
						break;
					case 3:
						{
						_localctx = new ArrayExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(220);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(221);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(222);
						arrayExpr(6);
						}
						break;
					case 4:
						{
						_localctx = new ArrayExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(223);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(224);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Less) | (1L << LessEqual) | (1L << Greater) | (1L << GreaterEqual))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(225);
						arrayExpr(5);
						}
						break;
					case 5:
						{
						_localctx = new ArrayExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(226);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(227);
						_la = _input.LA(1);
						if ( !(_la==Equal || _la==NotEqual) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(228);
						arrayExpr(4);
						}
						break;
					case 6:
						{
						_localctx = new ArrayExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(229);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(230);
						match(And);
						setState(231);
						arrayExpr(3);
						}
						break;
					case 7:
						{
						_localctx = new ArrayExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(232);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(233);
						match(Or);
						setState(234);
						arrayExpr(2);
						}
						break;
					}
					} 
				}
				setState(239);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class FunctionCallContext extends ParserRuleContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public ArgsListContext argsList() {
			return getRuleContext(ArgsListContext.class,0);
		}
		public TerminalNode Callout() { return getToken(miniCgrammarParser.Callout, 0); }
		public TerminalNode StringLiteral() { return getToken(miniCgrammarParser.StringLiteral, 0); }
		public CalloutArgsContext calloutArgs() {
			return getRuleContext(CalloutArgsContext.class,0);
		}
		public FunctionCallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionCall; }
	}

	public final FunctionCallContext functionCall() throws RecognitionException {
		FunctionCallContext _localctx = new FunctionCallContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_functionCall);
		int _la;
		try {
			setState(253);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Id:
				enterOuterAlt(_localctx, 1);
				{
				setState(240);
				match(Id);
				setState(241);
				match(LeftParen);
				setState(243);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Callout) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(242);
					argsList();
					}
				}

				setState(245);
				match(RightParen);
				}
				break;
			case Callout:
				enterOuterAlt(_localctx, 2);
				{
				setState(246);
				match(Callout);
				setState(247);
				match(LeftParen);
				setState(248);
				match(StringLiteral);
				setState(250);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(249);
					calloutArgs();
					}
				}

				setState(252);
				match(RightParen);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArgsListContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ArgsListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argsList; }
	}

	public final ArgsListContext argsList() throws RecognitionException {
		ArgsListContext _localctx = new ArgsListContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_argsList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(255);
			expr(0);
			{
			setState(260);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(256);
				match(Comma);
				setState(257);
				expr(0);
				}
				}
				setState(262);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CalloutArgsContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public CalloutArgsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_calloutArgs; }
	}

	public final CalloutArgsContext calloutArgs() throws RecognitionException {
		CalloutArgsContext _localctx = new CalloutArgsContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_calloutArgs);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(265); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(263);
				match(Comma);
				setState(264);
				expr(0);
				}
				}
				setState(267); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==Comma );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionalStmtContext extends ParserRuleContext {
		public TerminalNode If() { return getToken(miniCgrammarParser.If, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<StatementListContext> statementList() {
			return getRuleContexts(StatementListContext.class);
		}
		public StatementListContext statementList(int i) {
			return getRuleContext(StatementListContext.class,i);
		}
		public TerminalNode Else() { return getToken(miniCgrammarParser.Else, 0); }
		public ConditionalStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditionalStmt; }
	}

	public final ConditionalStmtContext conditionalStmt() throws RecognitionException {
		ConditionalStmtContext _localctx = new ConditionalStmtContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_conditionalStmt);
		int _la;
		try {
			setState(295);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(269);
				match(If);
				setState(270);
				match(LeftParen);
				setState(271);
				expr(0);
				setState(272);
				match(RightParen);
				setState(273);
				match(LeftBrace);
				setState(275);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(274);
					statementList();
					}
				}

				setState(277);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(279);
				match(If);
				setState(280);
				match(LeftParen);
				setState(281);
				expr(0);
				setState(282);
				match(RightParen);
				setState(283);
				match(LeftBrace);
				setState(285);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(284);
					statementList();
					}
				}

				setState(287);
				match(RightBrace);
				setState(288);
				match(Else);
				setState(289);
				match(LeftBrace);
				setState(291);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(290);
					statementList();
					}
				}

				setState(293);
				match(RightBrace);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IterativeStmtContext extends ParserRuleContext {
		public TerminalNode While() { return getToken(miniCgrammarParser.While, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public TerminalNode For() { return getToken(miniCgrammarParser.For, 0); }
		public List<LocationContext> location() {
			return getRuleContexts(LocationContext.class);
		}
		public LocationContext location(int i) {
			return getRuleContext(LocationContext.class,i);
		}
		public AssignOpContext assignOp() {
			return getRuleContext(AssignOpContext.class,0);
		}
		public IterativeStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_iterativeStmt; }
	}

	public final IterativeStmtContext iterativeStmt() throws RecognitionException {
		IterativeStmtContext _localctx = new IterativeStmtContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_iterativeStmt);
		int _la;
		try {
			setState(325);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case While:
				enterOuterAlt(_localctx, 1);
				{
				setState(297);
				match(While);
				setState(298);
				match(LeftParen);
				setState(299);
				expr(0);
				setState(300);
				match(RightParen);
				setState(301);
				match(LeftBrace);
				setState(303);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(302);
					statementList();
					}
				}

				setState(305);
				match(RightBrace);
				}
				break;
			case For:
				enterOuterAlt(_localctx, 2);
				{
				setState(307);
				match(For);
				setState(308);
				match(LeftParen);
				setState(309);
				location();
				setState(310);
				match(Assign);
				setState(311);
				expr(0);
				setState(312);
				match(Semi);
				setState(313);
				expr(0);
				setState(314);
				match(Semi);
				setState(315);
				location();
				setState(316);
				assignOp();
				setState(317);
				expr(0);
				setState(318);
				match(RightParen);
				setState(319);
				match(LeftBrace);
				setState(321);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(320);
					statementList();
					}
				}

				setState(323);
				match(RightBrace);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 13:
			return expr_sempred((ExprContext)_localctx, predIndex);
		case 14:
			return arrayExpr_sempred((ArrayExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 8);
		case 1:
			return precpred(_ctx, 7);
		case 2:
			return precpred(_ctx, 6);
		case 3:
			return precpred(_ctx, 5);
		case 4:
			return precpred(_ctx, 4);
		case 5:
			return precpred(_ctx, 3);
		case 6:
			return precpred(_ctx, 2);
		case 7:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean arrayExpr_sempred(ArrayExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return precpred(_ctx, 7);
		case 9:
			return precpred(_ctx, 6);
		case 10:
			return precpred(_ctx, 5);
		case 11:
			return precpred(_ctx, 4);
		case 12:
			return precpred(_ctx, 3);
		case 13:
			return precpred(_ctx, 2);
		case 14:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3:\u014a\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\3\2\3\2\3\2\3\3\3\3\3\3\3\3\5\3\62\n\3"+
		"\3\4\3\4\5\4\66\n\4\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\5\6A\n\6\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7O\n\7\3\b\3\b\3\t\3\t\3"+
		"\t\3\t\5\tW\n\t\3\t\3\t\3\t\5\t\\\n\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n"+
		"\3\n\3\n\3\n\3\n\7\nj\n\n\f\n\16\nm\13\n\3\13\3\13\3\13\3\13\5\13s\n\13"+
		"\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3"+
		"\f\3\f\5\f\u0088\n\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3"+
		"\r\3\r\5\r\u0098\n\r\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u00ab\n\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\7\17\u00c8\n\17\f\17\16"+
		"\17\u00cb\13\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\5\20"+
		"\u00d7\n\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\7\20\u00ee\n\20\f\20\16"+
		"\20\u00f1\13\20\3\21\3\21\3\21\5\21\u00f6\n\21\3\21\3\21\3\21\3\21\3\21"+
		"\5\21\u00fd\n\21\3\21\5\21\u0100\n\21\3\22\3\22\3\22\7\22\u0105\n\22\f"+
		"\22\16\22\u0108\13\22\3\23\3\23\6\23\u010c\n\23\r\23\16\23\u010d\3\24"+
		"\3\24\3\24\3\24\3\24\3\24\5\24\u0116\n\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\5\24\u0120\n\24\3\24\3\24\3\24\3\24\5\24\u0126\n\24\3\24\3"+
		"\24\5\24\u012a\n\24\3\25\3\25\3\25\3\25\3\25\3\25\5\25\u0132\n\25\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\3\25\5\25\u0144\n\25\3\25\3\25\5\25\u0148\n\25\3\25\2\4\34\36\26\2\4"+
		"\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(\2\b\6\2\3\3\6\6\r\16\21\22\3"+
		"\2-/\3\2 \"\3\2\36\37\3\2\32\35\3\2\60\61\2\u016e\2*\3\2\2\2\4\61\3\2"+
		"\2\2\6\65\3\2\2\2\b\67\3\2\2\2\n@\3\2\2\2\fN\3\2\2\2\16P\3\2\2\2\20R\3"+
		"\2\2\2\22b\3\2\2\2\24r\3\2\2\2\26\u0087\3\2\2\2\30\u0097\3\2\2\2\32\u0099"+
		"\3\2\2\2\34\u00aa\3\2\2\2\36\u00d6\3\2\2\2 \u00ff\3\2\2\2\"\u0101\3\2"+
		"\2\2$\u010b\3\2\2\2&\u0129\3\2\2\2(\u0147\3\2\2\2*+\5\4\3\2+,\7\2\2\3"+
		",\3\3\2\2\2-.\5\6\4\2./\5\4\3\2/\62\3\2\2\2\60\62\5\6\4\2\61-\3\2\2\2"+
		"\61\60\3\2\2\2\62\5\3\2\2\2\63\66\5\b\5\2\64\66\5\20\t\2\65\63\3\2\2\2"+
		"\65\64\3\2\2\2\66\7\3\2\2\2\678\5\16\b\289\5\n\6\29:\7)\2\2:\t\3\2\2\2"+
		";<\5\f\7\2<=\7*\2\2=>\5\n\6\2>A\3\2\2\2?A\5\f\7\2@;\3\2\2\2@?\3\2\2\2"+
		"A\13\3\2\2\2BC\7\66\2\2CD\7\26\2\2DE\7\65\2\2EF\7\27\2\2FG\7\26\2\2GH"+
		"\7\65\2\2HO\7\27\2\2IJ\7\66\2\2JK\7\26\2\2KL\7\65\2\2LO\7\27\2\2MO\7\66"+
		"\2\2NB\3\2\2\2NI\3\2\2\2NM\3\2\2\2O\r\3\2\2\2PQ\t\2\2\2Q\17\3\2\2\2RS"+
		"\5\16\b\2ST\7\66\2\2TV\7\24\2\2UW\5\22\n\2VU\3\2\2\2VW\3\2\2\2WX\3\2\2"+
		"\2XY\7\25\2\2Y[\7\30\2\2Z\\\5\24\13\2[Z\3\2\2\2[\\\3\2\2\2\\]\3\2\2\2"+
		"]^\7\17\2\2^_\5\34\17\2_`\7)\2\2`a\7\31\2\2a\21\3\2\2\2bc\5\16\b\2cd\7"+
		"\66\2\2dk\3\2\2\2ef\7*\2\2fg\5\16\b\2gh\7\66\2\2hj\3\2\2\2ie\3\2\2\2j"+
		"m\3\2\2\2ki\3\2\2\2kl\3\2\2\2l\23\3\2\2\2mk\3\2\2\2no\5\26\f\2op\5\24"+
		"\13\2ps\3\2\2\2qs\5\26\f\2rn\3\2\2\2rq\3\2\2\2s\25\3\2\2\2t\u0088\5\b"+
		"\5\2uv\5\30\r\2vw\5\32\16\2wx\5\34\17\2xy\7)\2\2y\u0088\3\2\2\2z{\5\34"+
		"\17\2{|\7)\2\2|\u0088\3\2\2\2}\u0088\5&\24\2~\u0088\5(\25\2\177\u0080"+
		"\7\17\2\2\u0080\u0081\5\34\17\2\u0081\u0082\7)\2\2\u0082\u0088\3\2\2\2"+
		"\u0083\u0084\7\4\2\2\u0084\u0088\7)\2\2\u0085\u0086\7\7\2\2\u0086\u0088"+
		"\7)\2\2\u0087t\3\2\2\2\u0087u\3\2\2\2\u0087z\3\2\2\2\u0087}\3\2\2\2\u0087"+
		"~\3\2\2\2\u0087\177\3\2\2\2\u0087\u0083\3\2\2\2\u0087\u0085\3\2\2\2\u0088"+
		"\27\3\2\2\2\u0089\u0098\7\66\2\2\u008a\u008b\7\66\2\2\u008b\u008c\7\26"+
		"\2\2\u008c\u008d\5\36\20\2\u008d\u008e\7\27\2\2\u008e\u0098\3\2\2\2\u008f"+
		"\u0090\7\66\2\2\u0090\u0091\7\26\2\2\u0091\u0092\5\36\20\2\u0092\u0093"+
		"\7\27\2\2\u0093\u0094\7\26\2\2\u0094\u0095\5\36\20\2\u0095\u0096\7\27"+
		"\2\2\u0096\u0098\3\2\2\2\u0097\u0089\3\2\2\2\u0097\u008a\3\2\2\2\u0097"+
		"\u008f\3\2\2\2\u0098\31\3\2\2\2\u0099\u009a\t\3\2\2\u009a\33\3\2\2\2\u009b"+
		"\u009c\b\17\1\2\u009c\u00ab\7\64\2\2\u009d\u00ab\7\65\2\2\u009e\u00ab"+
		"\7\63\2\2\u009f\u00ab\7\62\2\2\u00a0\u00a1\7\24\2\2\u00a1\u00a2\5\34\17"+
		"\2\u00a2\u00a3\7\25\2\2\u00a3\u00ab\3\2\2\2\u00a4\u00ab\5\30\r\2\u00a5"+
		"\u00ab\5 \21\2\u00a6\u00a7\7\37\2\2\u00a7\u00ab\5\34\17\f\u00a8\u00a9"+
		"\7&\2\2\u00a9\u00ab\5\34\17\13\u00aa\u009b\3\2\2\2\u00aa\u009d\3\2\2\2"+
		"\u00aa\u009e\3\2\2\2\u00aa\u009f\3\2\2\2\u00aa\u00a0\3\2\2\2\u00aa\u00a4"+
		"\3\2\2\2\u00aa\u00a5\3\2\2\2\u00aa\u00a6\3\2\2\2\u00aa\u00a8\3\2\2\2\u00ab"+
		"\u00c9\3\2\2\2\u00ac\u00ad\f\n\2\2\u00ad\u00ae\7#\2\2\u00ae\u00c8\5\34"+
		"\17\n\u00af\u00b0\f\t\2\2\u00b0\u00b1\t\4\2\2\u00b1\u00c8\5\34\17\n\u00b2"+
		"\u00b3\f\b\2\2\u00b3\u00b4\t\5\2\2\u00b4\u00c8\5\34\17\t\u00b5\u00b6\f"+
		"\7\2\2\u00b6\u00b7\t\6\2\2\u00b7\u00c8\5\34\17\b\u00b8\u00b9\f\6\2\2\u00b9"+
		"\u00ba\t\7\2\2\u00ba\u00c8\5\34\17\7\u00bb\u00bc\f\5\2\2\u00bc\u00bd\7"+
		"$\2\2\u00bd\u00c8\5\34\17\6\u00be\u00bf\f\4\2\2\u00bf\u00c0\7%\2\2\u00c0"+
		"\u00c8\5\34\17\5\u00c1\u00c2\f\3\2\2\u00c2\u00c3\7\'\2\2\u00c3\u00c4\5"+
		"\34\17\2\u00c4\u00c5\7(\2\2\u00c5\u00c6\5\34\17\4\u00c6\u00c8\3\2\2\2"+
		"\u00c7\u00ac\3\2\2\2\u00c7\u00af\3\2\2\2\u00c7\u00b2\3\2\2\2\u00c7\u00b5"+
		"\3\2\2\2\u00c7\u00b8\3\2\2\2\u00c7\u00bb\3\2\2\2\u00c7\u00be\3\2\2\2\u00c7"+
		"\u00c1\3\2\2\2\u00c8\u00cb\3\2\2\2\u00c9\u00c7\3\2\2\2\u00c9\u00ca\3\2"+
		"\2\2\u00ca\35\3\2\2\2\u00cb\u00c9\3\2\2\2\u00cc\u00cd\b\20\1\2\u00cd\u00d7"+
		"\7\65\2\2\u00ce\u00cf\7\24\2\2\u00cf\u00d0\5\36\20\2\u00d0\u00d1\7\25"+
		"\2\2\u00d1\u00d7\3\2\2\2\u00d2\u00d7\5\30\r\2\u00d3\u00d7\5 \21\2\u00d4"+
		"\u00d5\7&\2\2\u00d5\u00d7\5\36\20\n\u00d6\u00cc\3\2\2\2\u00d6\u00ce\3"+
		"\2\2\2\u00d6\u00d2\3\2\2\2\u00d6\u00d3\3\2\2\2\u00d6\u00d4\3\2\2\2\u00d7"+
		"\u00ef\3\2\2\2\u00d8\u00d9\f\t\2\2\u00d9\u00da\7#\2\2\u00da\u00ee\5\36"+
		"\20\t\u00db\u00dc\f\b\2\2\u00dc\u00dd\t\4\2\2\u00dd\u00ee\5\36\20\t\u00de"+
		"\u00df\f\7\2\2\u00df\u00e0\t\5\2\2\u00e0\u00ee\5\36\20\b\u00e1\u00e2\f"+
		"\6\2\2\u00e2\u00e3\t\6\2\2\u00e3\u00ee\5\36\20\7\u00e4\u00e5\f\5\2\2\u00e5"+
		"\u00e6\t\7\2\2\u00e6\u00ee\5\36\20\6\u00e7\u00e8\f\4\2\2\u00e8\u00e9\7"+
		"$\2\2\u00e9\u00ee\5\36\20\5\u00ea\u00eb\f\3\2\2\u00eb\u00ec\7%\2\2\u00ec"+
		"\u00ee\5\36\20\4\u00ed\u00d8\3\2\2\2\u00ed\u00db\3\2\2\2\u00ed\u00de\3"+
		"\2\2\2\u00ed\u00e1\3\2\2\2\u00ed\u00e4\3\2\2\2\u00ed\u00e7\3\2\2\2\u00ed"+
		"\u00ea\3\2\2\2\u00ee\u00f1\3\2\2\2\u00ef\u00ed\3\2\2\2\u00ef\u00f0\3\2"+
		"\2\2\u00f0\37\3\2\2\2\u00f1\u00ef\3\2\2\2\u00f2\u00f3\7\66\2\2\u00f3\u00f5"+
		"\7\24\2\2\u00f4\u00f6\5\"\22\2\u00f5\u00f4\3\2\2\2\u00f5\u00f6\3\2\2\2"+
		"\u00f6\u00f7\3\2\2\2\u00f7\u0100\7\25\2\2\u00f8\u00f9\7\5\2\2\u00f9\u00fa"+
		"\7\24\2\2\u00fa\u00fc\7\63\2\2\u00fb\u00fd\5$\23\2\u00fc\u00fb\3\2\2\2"+
		"\u00fc\u00fd\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe\u0100\7\25\2\2\u00ff\u00f2"+
		"\3\2\2\2\u00ff\u00f8\3\2\2\2\u0100!\3\2\2\2\u0101\u0106\5\34\17\2\u0102"+
		"\u0103\7*\2\2\u0103\u0105\5\34\17\2\u0104\u0102\3\2\2\2\u0105\u0108\3"+
		"\2\2\2\u0106\u0104\3\2\2\2\u0106\u0107\3\2\2\2\u0107#\3\2\2\2\u0108\u0106"+
		"\3\2\2\2\u0109\u010a\7*\2\2\u010a\u010c\5\34\17\2\u010b\u0109\3\2\2\2"+
		"\u010c\u010d\3\2\2\2\u010d\u010b\3\2\2\2\u010d\u010e\3\2\2\2\u010e%\3"+
		"\2\2\2\u010f\u0110\7\f\2\2\u0110\u0111\7\24\2\2\u0111\u0112\5\34\17\2"+
		"\u0112\u0113\7\25\2\2\u0113\u0115\7\30\2\2\u0114\u0116\5\24\13\2\u0115"+
		"\u0114\3\2\2\2\u0115\u0116\3\2\2\2\u0116\u0117\3\2\2\2\u0117\u0118\7\31"+
		"\2\2\u0118\u012a\3\2\2\2\u0119\u011a\7\f\2\2\u011a\u011b\7\24\2\2\u011b"+
		"\u011c\5\34\17\2\u011c\u011d\7\25\2\2\u011d\u011f\7\30\2\2\u011e\u0120"+
		"\5\24\13\2\u011f\u011e\3\2\2\2\u011f\u0120\3\2\2\2\u0120\u0121\3\2\2\2"+
		"\u0121\u0122\7\31\2\2\u0122\u0123\7\b\2\2\u0123\u0125\7\30\2\2\u0124\u0126"+
		"\5\24\13\2\u0125\u0124\3\2\2\2\u0125\u0126\3\2\2\2\u0126\u0127\3\2\2\2"+
		"\u0127\u0128\7\31\2\2\u0128\u012a\3\2\2\2\u0129\u010f\3\2\2\2\u0129\u0119"+
		"\3\2\2\2\u012a\'\3\2\2\2\u012b\u012c\7\23\2\2\u012c\u012d\7\24\2\2\u012d"+
		"\u012e\5\34\17\2\u012e\u012f\7\25\2\2\u012f\u0131\7\30\2\2\u0130\u0132"+
		"\5\24\13\2\u0131\u0130\3\2\2\2\u0131\u0132\3\2\2\2\u0132\u0133\3\2\2\2"+
		"\u0133\u0134\7\31\2\2\u0134\u0148\3\2\2\2\u0135\u0136\7\13\2\2\u0136\u0137"+
		"\7\24\2\2\u0137\u0138\5\30\r\2\u0138\u0139\7-\2\2\u0139\u013a\5\34\17"+
		"\2\u013a\u013b\7)\2\2\u013b\u013c\5\34\17\2\u013c\u013d\7)\2\2\u013d\u013e"+
		"\5\30\r\2\u013e\u013f\5\32\16\2\u013f\u0140\5\34\17\2\u0140\u0141\7\25"+
		"\2\2\u0141\u0143\7\30\2\2\u0142\u0144\5\24\13\2\u0143\u0142\3\2\2\2\u0143"+
		"\u0144\3\2\2\2\u0144\u0145\3\2\2\2\u0145\u0146\7\31\2\2\u0146\u0148\3"+
		"\2\2\2\u0147\u012b\3\2\2\2\u0147\u0135\3\2\2\2\u0148)\3\2\2\2\36\61\65"+
		"@NV[kr\u0087\u0097\u00aa\u00c7\u00c9\u00d6\u00ed\u00ef\u00f5\u00fc\u00ff"+
		"\u0106\u010d\u0115\u011f\u0125\u0129\u0131\u0143\u0147";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}