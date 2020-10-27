// Generated from /run/media/shivanih/DATA/shiva/IIITH/sem3/Compilers/MajorProject/minic-grammar-ShivaniH/miniCParser/antlr/miniCgrammar.g4 by ANTLR 4.7.1
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
		BoolLiteral=1, Bool=2, Break=3, Callout=4, Char=5, Continue=6, Else=7, 
		False=8, Float=9, For=10, If=11, Int=12, Long=13, Return=14, True=15, 
		Uint=16, Ulong=17, While=18, LeftParen=19, RightParen=20, LeftBracket=21, 
		RightBracket=22, LeftBrace=23, RightBrace=24, Less=25, LessEqual=26, Greater=27, 
		GreaterEqual=28, Plus=29, Minus=30, Star=31, Div=32, Mod=33, Caret=34, 
		And=35, Or=36, Not=37, Question=38, Colon=39, Semi=40, Comma=41, SingleQuote=42, 
		DoubleQuote=43, Assign=44, PlusAssign=45, MinusAssign=46, Equal=47, NotEqual=48, 
		CharLiteral=49, StringLiteral=50, IntegerLiteral=51, Id=52, Newline=53, 
		Whitespace=54, Comment=55, BlockComment=56;
	public static final int
		RULE_program = 0, RULE_declarationList = 1, RULE_declaration = 2, RULE_variableDecl = 3, 
		RULE_variableDeclList = 4, RULE_singleVarDecl = 5, RULE_dataType = 6, 
		RULE_functionDecl = 7, RULE_paramsList = 8, RULE_statementList = 9, RULE_statement = 10, 
		RULE_location = 11, RULE_expr = 12, RULE_functionCall = 13, RULE_argsList = 14, 
		RULE_calloutArgs = 15, RULE_conditionalStmt = 16, RULE_iterativeStmt = 17;
	public static final String[] ruleNames = {
		"program", "declarationList", "declaration", "variableDecl", "variableDeclList", 
		"singleVarDecl", "dataType", "functionDecl", "paramsList", "statementList", 
		"statement", "location", "expr", "functionCall", "argsList", "calloutArgs", 
		"conditionalStmt", "iterativeStmt"
	};

	private static final String[] _LITERAL_NAMES = {
		null, null, "'bool'", "'break'", "'callout'", "'char'", "'continue'", 
		"'else'", "'false'", "'float'", "'for'", "'if'", "'int'", "'long'", "'return'", 
		"'true'", "'uint'", "'ulong'", "'while'", "'('", "')'", "'['", "']'", 
		"'{'", "'}'", "'<'", "'<='", "'>'", "'>='", "'+'", "'-'", "'*'", "'/'", 
		"'%'", "'^'", "'&&'", "'||'", "'!'", "'?'", "':'", "';'", "','", "'''", 
		"'\"'", "'='", "'+='", "'-='", "'=='", "'!='"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "BoolLiteral", "Bool", "Break", "Callout", "Char", "Continue", "Else", 
		"False", "Float", "For", "If", "Int", "Long", "Return", "True", "Uint", 
		"Ulong", "While", "LeftParen", "RightParen", "LeftBracket", "RightBracket", 
		"LeftBrace", "RightBrace", "Less", "LessEqual", "Greater", "GreaterEqual", 
		"Plus", "Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Not", "Question", 
		"Colon", "Semi", "Comma", "SingleQuote", "DoubleQuote", "Assign", "PlusAssign", 
		"MinusAssign", "Equal", "NotEqual", "CharLiteral", "StringLiteral", "IntegerLiteral", 
		"Id", "Newline", "Whitespace", "Comment", "BlockComment"
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
			setState(36);
			declarationList();
			setState(37);
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
		public List<DeclarationContext> declaration() {
			return getRuleContexts(DeclarationContext.class);
		}
		public DeclarationContext declaration(int i) {
			return getRuleContext(DeclarationContext.class,i);
		}
		public DeclarationListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationList; }
	}

	public final DeclarationListContext declarationList() throws RecognitionException {
		DeclarationListContext _localctx = new DeclarationListContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_declarationList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(40); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(39);
				declaration();
				}
				}
				setState(42); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Char) | (1L << Int) | (1L << Long) | (1L << Uint) | (1L << Ulong))) != 0) );
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
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	 
		public DeclarationContext() { }
		public void copyFrom(DeclarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class FunctionDeclarationContext extends DeclarationContext {
		public FunctionDeclContext functionDecl() {
			return getRuleContext(FunctionDeclContext.class,0);
		}
		public FunctionDeclarationContext(DeclarationContext ctx) { copyFrom(ctx); }
	}
	public static class VariableDeclarationContext extends DeclarationContext {
		public VariableDeclContext variableDecl() {
			return getRuleContext(VariableDeclContext.class,0);
		}
		public VariableDeclarationContext(DeclarationContext ctx) { copyFrom(ctx); }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_declaration);
		try {
			setState(46);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				_localctx = new VariableDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(44);
				variableDecl();
				}
				break;
			case 2:
				_localctx = new FunctionDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(45);
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
			setState(48);
			dataType();
			setState(49);
			variableDeclList();
			setState(50);
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
		public List<SingleVarDeclContext> singleVarDecl() {
			return getRuleContexts(SingleVarDeclContext.class);
		}
		public SingleVarDeclContext singleVarDecl(int i) {
			return getRuleContext(SingleVarDeclContext.class,i);
		}
		public VariableDeclListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclList; }
	}

	public final VariableDeclListContext variableDeclList() throws RecognitionException {
		VariableDeclListContext _localctx = new VariableDeclListContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_variableDeclList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(52);
			singleVarDecl();
			setState(57);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(53);
				match(Comma);
				setState(54);
				singleVarDecl();
				}
				}
				setState(59);
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

	public static class SingleVarDeclContext extends ParserRuleContext {
		public SingleVarDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleVarDecl; }
	 
		public SingleVarDeclContext() { }
		public void copyFrom(SingleVarDeclContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class OneDarrayContext extends SingleVarDeclContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public TerminalNode IntegerLiteral() { return getToken(miniCgrammarParser.IntegerLiteral, 0); }
		public OneDarrayContext(SingleVarDeclContext ctx) { copyFrom(ctx); }
	}
	public static class SimpleVariableContext extends SingleVarDeclContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public SimpleVariableContext(SingleVarDeclContext ctx) { copyFrom(ctx); }
	}
	public static class TwoDarrayContext extends SingleVarDeclContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public List<TerminalNode> IntegerLiteral() { return getTokens(miniCgrammarParser.IntegerLiteral); }
		public TerminalNode IntegerLiteral(int i) {
			return getToken(miniCgrammarParser.IntegerLiteral, i);
		}
		public TwoDarrayContext(SingleVarDeclContext ctx) { copyFrom(ctx); }
	}

	public final SingleVarDeclContext singleVarDecl() throws RecognitionException {
		SingleVarDeclContext _localctx = new SingleVarDeclContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_singleVarDecl);
		try {
			setState(72);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				_localctx = new TwoDarrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(60);
				match(Id);
				setState(61);
				match(LeftBracket);
				setState(62);
				match(IntegerLiteral);
				setState(63);
				match(RightBracket);
				setState(64);
				match(LeftBracket);
				setState(65);
				match(IntegerLiteral);
				setState(66);
				match(RightBracket);
				}
				break;
			case 2:
				_localctx = new OneDarrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(67);
				match(Id);
				setState(68);
				match(LeftBracket);
				setState(69);
				match(IntegerLiteral);
				setState(70);
				match(RightBracket);
				}
				break;
			case 3:
				_localctx = new SimpleVariableContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(71);
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
		public DataTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dataType; }
	 
		public DataTypeContext() { }
		public void copyFrom(DataTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class BoolDataTypeContext extends DataTypeContext {
		public TerminalNode Bool() { return getToken(miniCgrammarParser.Bool, 0); }
		public BoolDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}
	public static class UlongDataTypeContext extends DataTypeContext {
		public TerminalNode Ulong() { return getToken(miniCgrammarParser.Ulong, 0); }
		public UlongDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}
	public static class IntDataTypeContext extends DataTypeContext {
		public TerminalNode Int() { return getToken(miniCgrammarParser.Int, 0); }
		public IntDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}
	public static class UintDataTypeContext extends DataTypeContext {
		public TerminalNode Uint() { return getToken(miniCgrammarParser.Uint, 0); }
		public UintDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}
	public static class CharDataTypeContext extends DataTypeContext {
		public TerminalNode Char() { return getToken(miniCgrammarParser.Char, 0); }
		public CharDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}
	public static class LongDataTypeContext extends DataTypeContext {
		public TerminalNode Long() { return getToken(miniCgrammarParser.Long, 0); }
		public LongDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}

	public final DataTypeContext dataType() throws RecognitionException {
		DataTypeContext _localctx = new DataTypeContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_dataType);
		try {
			setState(80);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Int:
				_localctx = new IntDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(74);
				match(Int);
				}
				break;
			case Char:
				_localctx = new CharDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(75);
				match(Char);
				}
				break;
			case Bool:
				_localctx = new BoolDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(76);
				match(Bool);
				}
				break;
			case Long:
				_localctx = new LongDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(77);
				match(Long);
				}
				break;
			case Uint:
				_localctx = new UintDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(78);
				match(Uint);
				}
				break;
			case Ulong:
				_localctx = new UlongDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(79);
				match(Ulong);
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
			setState(82);
			dataType();
			setState(83);
			match(Id);
			setState(84);
			match(LeftParen);
			setState(86);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Char) | (1L << Int) | (1L << Long) | (1L << Uint) | (1L << Ulong))) != 0)) {
				{
				setState(85);
				paramsList();
				}
			}

			setState(88);
			match(RightParen);
			setState(89);
			match(LeftBrace);
			setState(91);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(90);
				statementList();
				}
				break;
			}
			setState(93);
			match(Return);
			setState(94);
			expr(0);
			setState(95);
			match(Semi);
			setState(96);
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
			setState(98);
			dataType();
			setState(99);
			match(Id);
			}
			setState(107);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(101);
				match(Comma);
				setState(102);
				dataType();
				setState(103);
				match(Id);
				}
				}
				setState(109);
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
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
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
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(111); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(110);
					statement();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(113); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
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
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ExprStmtContext extends StatementContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ExprStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class BreakStmtContext extends StatementContext {
		public TerminalNode Break() { return getToken(miniCgrammarParser.Break, 0); }
		public BreakStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class VariableDeclStmtContext extends StatementContext {
		public VariableDeclContext variableDecl() {
			return getRuleContext(VariableDeclContext.class,0);
		}
		public VariableDeclStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class IterationStmtContext extends StatementContext {
		public IterativeStmtContext iterativeStmt() {
			return getRuleContext(IterativeStmtContext.class,0);
		}
		public IterationStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ReturnStmtContext extends StatementContext {
		public TerminalNode Return() { return getToken(miniCgrammarParser.Return, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ReturnStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ContinueStmtContext extends StatementContext {
		public TerminalNode Continue() { return getToken(miniCgrammarParser.Continue, 0); }
		public ContinueStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class AssignmentStmtContext extends StatementContext {
		public Token op;
		public LocationContext location() {
			return getRuleContext(LocationContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AssignmentStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ConditionStmtContext extends StatementContext {
		public ConditionalStmtContext conditionalStmt() {
			return getRuleContext(ConditionalStmtContext.class,0);
		}
		public ConditionStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_statement);
		int _la;
		try {
			setState(134);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				_localctx = new VariableDeclStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(115);
				variableDecl();
				}
				break;
			case 2:
				_localctx = new AssignmentStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(116);
				location();
				setState(117);
				((AssignmentStmtContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Assign) | (1L << PlusAssign) | (1L << MinusAssign))) != 0)) ) {
					((AssignmentStmtContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(118);
				expr(0);
				setState(119);
				match(Semi);
				}
				break;
			case 3:
				_localctx = new ExprStmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(121);
				expr(0);
				setState(122);
				match(Semi);
				}
				break;
			case 4:
				_localctx = new ConditionStmtContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(124);
				conditionalStmt();
				}
				break;
			case 5:
				_localctx = new IterationStmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(125);
				iterativeStmt();
				}
				break;
			case 6:
				_localctx = new ReturnStmtContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(126);
				match(Return);
				setState(127);
				expr(0);
				setState(128);
				match(Semi);
				}
				break;
			case 7:
				_localctx = new BreakStmtContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(130);
				match(Break);
				setState(131);
				match(Semi);
				}
				break;
			case 8:
				_localctx = new ContinueStmtContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(132);
				match(Continue);
				setState(133);
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
		public LocationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_location; }
	 
		public LocationContext() { }
		public void copyFrom(LocationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class TwoDarrayLocationContext extends LocationContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TwoDarrayLocationContext(LocationContext ctx) { copyFrom(ctx); }
	}
	public static class SimpleVarLocationContext extends LocationContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public SimpleVarLocationContext(LocationContext ctx) { copyFrom(ctx); }
	}
	public static class OneDarrayLocationContext extends LocationContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public OneDarrayLocationContext(LocationContext ctx) { copyFrom(ctx); }
	}

	public final LocationContext location() throws RecognitionException {
		LocationContext _localctx = new LocationContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_location);
		try {
			setState(150);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				_localctx = new SimpleVarLocationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(136);
				match(Id);
				}
				break;
			case 2:
				_localctx = new OneDarrayLocationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(137);
				match(Id);
				setState(138);
				match(LeftBracket);
				setState(139);
				expr(0);
				setState(140);
				match(RightBracket);
				}
				break;
			case 3:
				_localctx = new TwoDarrayLocationContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(142);
				match(Id);
				setState(143);
				match(LeftBracket);
				setState(144);
				expr(0);
				setState(145);
				match(RightBracket);
				setState(146);
				match(LeftBracket);
				setState(147);
				expr(0);
				setState(148);
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

	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ExponentExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ExponentExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class AddSubExprContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public AddSubExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class IntLitExprContext extends ExprContext {
		public TerminalNode IntegerLiteral() { return getToken(miniCgrammarParser.IntegerLiteral, 0); }
		public IntLitExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class StringLitExprContext extends ExprContext {
		public TerminalNode StringLiteral() { return getToken(miniCgrammarParser.StringLiteral, 0); }
		public StringLitExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class RelopExprContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public RelopExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class MulDivModExprContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public MulDivModExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class LogicalANDExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public LogicalANDExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ParenthesesExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ParenthesesExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class LogicalORExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public LogicalORExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class NegateExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public NegateExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class CharLitExprContext extends ExprContext {
		public TerminalNode CharLiteral() { return getToken(miniCgrammarParser.CharLiteral, 0); }
		public CharLitExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class NotExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public NotExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class TernaryExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TernaryExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class LocationExprContext extends ExprContext {
		public LocationContext location() {
			return getRuleContext(LocationContext.class,0);
		}
		public LocationExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class FunctionCallExprContext extends ExprContext {
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public FunctionCallExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class BoolLitExprContext extends ExprContext {
		public TerminalNode BoolLiteral() { return getToken(miniCgrammarParser.BoolLiteral, 0); }
		public BoolLitExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class EqualityExprContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public EqualityExprContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 24;
		enterRecursionRule(_localctx, 24, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(167);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				{
				_localctx = new BoolLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(153);
				match(BoolLiteral);
				}
				break;
			case 2:
				{
				_localctx = new IntLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(154);
				match(IntegerLiteral);
				}
				break;
			case 3:
				{
				_localctx = new StringLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(155);
				match(StringLiteral);
				}
				break;
			case 4:
				{
				_localctx = new CharLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(156);
				match(CharLiteral);
				}
				break;
			case 5:
				{
				_localctx = new ParenthesesExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(157);
				match(LeftParen);
				setState(158);
				expr(0);
				setState(159);
				match(RightParen);
				}
				break;
			case 6:
				{
				_localctx = new LocationExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(161);
				location();
				}
				break;
			case 7:
				{
				_localctx = new FunctionCallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(162);
				functionCall();
				}
				break;
			case 8:
				{
				_localctx = new NegateExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(163);
				match(Minus);
				setState(164);
				expr(10);
				}
				break;
			case 9:
				{
				_localctx = new NotExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(165);
				match(Not);
				setState(166);
				expr(9);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(198);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(196);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
					case 1:
						{
						_localctx = new ExponentExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(169);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(170);
						match(Caret);
						setState(171);
						expr(8);
						}
						break;
					case 2:
						{
						_localctx = new MulDivModExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(172);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(173);
						((MulDivModExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Star) | (1L << Div) | (1L << Mod))) != 0)) ) {
							((MulDivModExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(174);
						expr(8);
						}
						break;
					case 3:
						{
						_localctx = new AddSubExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(175);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(176);
						((AddSubExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
							((AddSubExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(177);
						expr(7);
						}
						break;
					case 4:
						{
						_localctx = new RelopExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(178);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(179);
						((RelopExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Less) | (1L << LessEqual) | (1L << Greater) | (1L << GreaterEqual))) != 0)) ) {
							((RelopExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(180);
						expr(6);
						}
						break;
					case 5:
						{
						_localctx = new EqualityExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(181);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(182);
						((EqualityExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==Equal || _la==NotEqual) ) {
							((EqualityExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(183);
						expr(5);
						}
						break;
					case 6:
						{
						_localctx = new LogicalANDExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(184);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(185);
						match(And);
						setState(186);
						expr(4);
						}
						break;
					case 7:
						{
						_localctx = new LogicalORExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(187);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(188);
						match(Or);
						setState(189);
						expr(3);
						}
						break;
					case 8:
						{
						_localctx = new TernaryExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(190);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(191);
						match(Question);
						setState(192);
						expr(0);
						setState(193);
						match(Colon);
						setState(194);
						expr(1);
						}
						break;
					}
					} 
				}
				setState(200);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
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
		public FunctionCallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionCall; }
	 
		public FunctionCallContext() { }
		public void copyFrom(FunctionCallContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class LibFnCallContext extends FunctionCallContext {
		public TerminalNode Callout() { return getToken(miniCgrammarParser.Callout, 0); }
		public TerminalNode StringLiteral() { return getToken(miniCgrammarParser.StringLiteral, 0); }
		public CalloutArgsContext calloutArgs() {
			return getRuleContext(CalloutArgsContext.class,0);
		}
		public LibFnCallContext(FunctionCallContext ctx) { copyFrom(ctx); }
	}
	public static class UserDefFnCallContext extends FunctionCallContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public ArgsListContext argsList() {
			return getRuleContext(ArgsListContext.class,0);
		}
		public UserDefFnCallContext(FunctionCallContext ctx) { copyFrom(ctx); }
	}

	public final FunctionCallContext functionCall() throws RecognitionException {
		FunctionCallContext _localctx = new FunctionCallContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_functionCall);
		int _la;
		try {
			setState(214);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Id:
				_localctx = new UserDefFnCallContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(201);
				match(Id);
				setState(202);
				match(LeftParen);
				setState(204);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BoolLiteral) | (1L << Callout) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(203);
					argsList();
					}
				}

				setState(206);
				match(RightParen);
				}
				break;
			case Callout:
				_localctx = new LibFnCallContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(207);
				match(Callout);
				setState(208);
				match(LeftParen);
				setState(209);
				match(StringLiteral);
				setState(211);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(210);
					calloutArgs();
					}
				}

				setState(213);
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
		enterRule(_localctx, 28, RULE_argsList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(216);
			expr(0);
			{
			setState(221);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(217);
				match(Comma);
				setState(218);
				expr(0);
				}
				}
				setState(223);
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
		enterRule(_localctx, 30, RULE_calloutArgs);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(226); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(224);
				match(Comma);
				setState(225);
				expr(0);
				}
				}
				setState(228); 
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
		public ConditionalStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditionalStmt; }
	 
		public ConditionalStmtContext() { }
		public void copyFrom(ConditionalStmtContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class IfStmtContext extends ConditionalStmtContext {
		public TerminalNode If() { return getToken(miniCgrammarParser.If, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public IfStmtContext(ConditionalStmtContext ctx) { copyFrom(ctx); }
	}
	public static class IfElseStmtContext extends ConditionalStmtContext {
		public TerminalNode If() { return getToken(miniCgrammarParser.If, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode Else() { return getToken(miniCgrammarParser.Else, 0); }
		public List<StatementListContext> statementList() {
			return getRuleContexts(StatementListContext.class);
		}
		public StatementListContext statementList(int i) {
			return getRuleContext(StatementListContext.class,i);
		}
		public IfElseStmtContext(ConditionalStmtContext ctx) { copyFrom(ctx); }
	}

	public final ConditionalStmtContext conditionalStmt() throws RecognitionException {
		ConditionalStmtContext _localctx = new ConditionalStmtContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_conditionalStmt);
		int _la;
		try {
			setState(256);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				_localctx = new IfStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(230);
				match(If);
				setState(231);
				match(LeftParen);
				setState(232);
				expr(0);
				setState(233);
				match(RightParen);
				setState(234);
				match(LeftBrace);
				setState(236);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BoolLiteral) | (1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(235);
					statementList();
					}
				}

				setState(238);
				match(RightBrace);
				}
				break;
			case 2:
				_localctx = new IfElseStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(240);
				match(If);
				setState(241);
				match(LeftParen);
				setState(242);
				expr(0);
				setState(243);
				match(RightParen);
				setState(244);
				match(LeftBrace);
				setState(246);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BoolLiteral) | (1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(245);
					statementList();
					}
				}

				setState(248);
				match(RightBrace);
				setState(249);
				match(Else);
				setState(250);
				match(LeftBrace);
				setState(252);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BoolLiteral) | (1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(251);
					statementList();
					}
				}

				setState(254);
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
		public IterativeStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_iterativeStmt; }
	 
		public IterativeStmtContext() { }
		public void copyFrom(IterativeStmtContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ForStmtContext extends IterativeStmtContext {
		public Token op;
		public TerminalNode For() { return getToken(miniCgrammarParser.For, 0); }
		public List<LocationContext> location() {
			return getRuleContexts(LocationContext.class);
		}
		public LocationContext location(int i) {
			return getRuleContext(LocationContext.class,i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public ForStmtContext(IterativeStmtContext ctx) { copyFrom(ctx); }
	}
	public static class WhileStmtContext extends IterativeStmtContext {
		public TerminalNode While() { return getToken(miniCgrammarParser.While, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public WhileStmtContext(IterativeStmtContext ctx) { copyFrom(ctx); }
	}

	public final IterativeStmtContext iterativeStmt() throws RecognitionException {
		IterativeStmtContext _localctx = new IterativeStmtContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_iterativeStmt);
		int _la;
		try {
			setState(286);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case While:
				_localctx = new WhileStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(258);
				match(While);
				setState(259);
				match(LeftParen);
				setState(260);
				expr(0);
				setState(261);
				match(RightParen);
				setState(262);
				match(LeftBrace);
				setState(264);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BoolLiteral) | (1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(263);
					statementList();
					}
				}

				setState(266);
				match(RightBrace);
				}
				break;
			case For:
				_localctx = new ForStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(268);
				match(For);
				setState(269);
				match(LeftParen);
				setState(270);
				location();
				setState(271);
				match(Assign);
				setState(272);
				expr(0);
				setState(273);
				match(Semi);
				setState(274);
				expr(0);
				setState(275);
				match(Semi);
				setState(276);
				location();
				setState(277);
				((ForStmtContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Assign) | (1L << PlusAssign) | (1L << MinusAssign))) != 0)) ) {
					((ForStmtContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(278);
				expr(0);
				setState(279);
				match(RightParen);
				setState(280);
				match(LeftBrace);
				setState(282);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BoolLiteral) | (1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(281);
					statementList();
					}
				}

				setState(284);
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
		case 12:
			return expr_sempred((ExprContext)_localctx, predIndex);
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3:\u0123\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\3\2\3\2\3\2\3\3\6\3+\n\3\r\3\16\3,\3\4\3\4\5\4\61\n\4\3\5\3"+
		"\5\3\5\3\5\3\6\3\6\3\6\7\6:\n\6\f\6\16\6=\13\6\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\5\7K\n\7\3\b\3\b\3\b\3\b\3\b\3\b\5\bS\n\b\3\t"+
		"\3\t\3\t\3\t\5\tY\n\t\3\t\3\t\3\t\5\t^\n\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n"+
		"\3\n\3\n\3\n\3\n\3\n\7\nl\n\n\f\n\16\no\13\n\3\13\6\13r\n\13\r\13\16\13"+
		"s\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f"+
		"\3\f\3\f\5\f\u0089\n\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r"+
		"\3\r\3\r\5\r\u0099\n\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3"+
		"\16\3\16\3\16\3\16\3\16\3\16\5\16\u00aa\n\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\7\16\u00c7\n\16\f\16\16\16\u00ca"+
		"\13\16\3\17\3\17\3\17\5\17\u00cf\n\17\3\17\3\17\3\17\3\17\3\17\5\17\u00d6"+
		"\n\17\3\17\5\17\u00d9\n\17\3\20\3\20\3\20\7\20\u00de\n\20\f\20\16\20\u00e1"+
		"\13\20\3\21\3\21\6\21\u00e5\n\21\r\21\16\21\u00e6\3\22\3\22\3\22\3\22"+
		"\3\22\3\22\5\22\u00ef\n\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\5\22"+
		"\u00f9\n\22\3\22\3\22\3\22\3\22\5\22\u00ff\n\22\3\22\3\22\5\22\u0103\n"+
		"\22\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u010b\n\23\3\23\3\23\3\23\3\23"+
		"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u011d"+
		"\n\23\3\23\3\23\5\23\u0121\n\23\3\23\2\3\32\24\2\4\6\b\n\f\16\20\22\24"+
		"\26\30\32\34\36 \"$\2\7\3\2.\60\3\2!#\3\2\37 \3\2\33\36\3\2\61\62\2\u0143"+
		"\2&\3\2\2\2\4*\3\2\2\2\6\60\3\2\2\2\b\62\3\2\2\2\n\66\3\2\2\2\fJ\3\2\2"+
		"\2\16R\3\2\2\2\20T\3\2\2\2\22d\3\2\2\2\24q\3\2\2\2\26\u0088\3\2\2\2\30"+
		"\u0098\3\2\2\2\32\u00a9\3\2\2\2\34\u00d8\3\2\2\2\36\u00da\3\2\2\2 \u00e4"+
		"\3\2\2\2\"\u0102\3\2\2\2$\u0120\3\2\2\2&\'\5\4\3\2\'(\7\2\2\3(\3\3\2\2"+
		"\2)+\5\6\4\2*)\3\2\2\2+,\3\2\2\2,*\3\2\2\2,-\3\2\2\2-\5\3\2\2\2.\61\5"+
		"\b\5\2/\61\5\20\t\2\60.\3\2\2\2\60/\3\2\2\2\61\7\3\2\2\2\62\63\5\16\b"+
		"\2\63\64\5\n\6\2\64\65\7*\2\2\65\t\3\2\2\2\66;\5\f\7\2\678\7+\2\28:\5"+
		"\f\7\29\67\3\2\2\2:=\3\2\2\2;9\3\2\2\2;<\3\2\2\2<\13\3\2\2\2=;\3\2\2\2"+
		">?\7\66\2\2?@\7\27\2\2@A\7\65\2\2AB\7\30\2\2BC\7\27\2\2CD\7\65\2\2DK\7"+
		"\30\2\2EF\7\66\2\2FG\7\27\2\2GH\7\65\2\2HK\7\30\2\2IK\7\66\2\2J>\3\2\2"+
		"\2JE\3\2\2\2JI\3\2\2\2K\r\3\2\2\2LS\7\16\2\2MS\7\7\2\2NS\7\4\2\2OS\7\17"+
		"\2\2PS\7\22\2\2QS\7\23\2\2RL\3\2\2\2RM\3\2\2\2RN\3\2\2\2RO\3\2\2\2RP\3"+
		"\2\2\2RQ\3\2\2\2S\17\3\2\2\2TU\5\16\b\2UV\7\66\2\2VX\7\25\2\2WY\5\22\n"+
		"\2XW\3\2\2\2XY\3\2\2\2YZ\3\2\2\2Z[\7\26\2\2[]\7\31\2\2\\^\5\24\13\2]\\"+
		"\3\2\2\2]^\3\2\2\2^_\3\2\2\2_`\7\20\2\2`a\5\32\16\2ab\7*\2\2bc\7\32\2"+
		"\2c\21\3\2\2\2de\5\16\b\2ef\7\66\2\2fm\3\2\2\2gh\7+\2\2hi\5\16\b\2ij\7"+
		"\66\2\2jl\3\2\2\2kg\3\2\2\2lo\3\2\2\2mk\3\2\2\2mn\3\2\2\2n\23\3\2\2\2"+
		"om\3\2\2\2pr\5\26\f\2qp\3\2\2\2rs\3\2\2\2sq\3\2\2\2st\3\2\2\2t\25\3\2"+
		"\2\2u\u0089\5\b\5\2vw\5\30\r\2wx\t\2\2\2xy\5\32\16\2yz\7*\2\2z\u0089\3"+
		"\2\2\2{|\5\32\16\2|}\7*\2\2}\u0089\3\2\2\2~\u0089\5\"\22\2\177\u0089\5"+
		"$\23\2\u0080\u0081\7\20\2\2\u0081\u0082\5\32\16\2\u0082\u0083\7*\2\2\u0083"+
		"\u0089\3\2\2\2\u0084\u0085\7\5\2\2\u0085\u0089\7*\2\2\u0086\u0087\7\b"+
		"\2\2\u0087\u0089\7*\2\2\u0088u\3\2\2\2\u0088v\3\2\2\2\u0088{\3\2\2\2\u0088"+
		"~\3\2\2\2\u0088\177\3\2\2\2\u0088\u0080\3\2\2\2\u0088\u0084\3\2\2\2\u0088"+
		"\u0086\3\2\2\2\u0089\27\3\2\2\2\u008a\u0099\7\66\2\2\u008b\u008c\7\66"+
		"\2\2\u008c\u008d\7\27\2\2\u008d\u008e\5\32\16\2\u008e\u008f\7\30\2\2\u008f"+
		"\u0099\3\2\2\2\u0090\u0091\7\66\2\2\u0091\u0092\7\27\2\2\u0092\u0093\5"+
		"\32\16\2\u0093\u0094\7\30\2\2\u0094\u0095\7\27\2\2\u0095\u0096\5\32\16"+
		"\2\u0096\u0097\7\30\2\2\u0097\u0099\3\2\2\2\u0098\u008a\3\2\2\2\u0098"+
		"\u008b\3\2\2\2\u0098\u0090\3\2\2\2\u0099\31\3\2\2\2\u009a\u009b\b\16\1"+
		"\2\u009b\u00aa\7\3\2\2\u009c\u00aa\7\65\2\2\u009d\u00aa\7\64\2\2\u009e"+
		"\u00aa\7\63\2\2\u009f\u00a0\7\25\2\2\u00a0\u00a1\5\32\16\2\u00a1\u00a2"+
		"\7\26\2\2\u00a2\u00aa\3\2\2\2\u00a3\u00aa\5\30\r\2\u00a4\u00aa\5\34\17"+
		"\2\u00a5\u00a6\7 \2\2\u00a6\u00aa\5\32\16\f\u00a7\u00a8\7\'\2\2\u00a8"+
		"\u00aa\5\32\16\13\u00a9\u009a\3\2\2\2\u00a9\u009c\3\2\2\2\u00a9\u009d"+
		"\3\2\2\2\u00a9\u009e\3\2\2\2\u00a9\u009f\3\2\2\2\u00a9\u00a3\3\2\2\2\u00a9"+
		"\u00a4\3\2\2\2\u00a9\u00a5\3\2\2\2\u00a9\u00a7\3\2\2\2\u00aa\u00c8\3\2"+
		"\2\2\u00ab\u00ac\f\n\2\2\u00ac\u00ad\7$\2\2\u00ad\u00c7\5\32\16\n\u00ae"+
		"\u00af\f\t\2\2\u00af\u00b0\t\3\2\2\u00b0\u00c7\5\32\16\n\u00b1\u00b2\f"+
		"\b\2\2\u00b2\u00b3\t\4\2\2\u00b3\u00c7\5\32\16\t\u00b4\u00b5\f\7\2\2\u00b5"+
		"\u00b6\t\5\2\2\u00b6\u00c7\5\32\16\b\u00b7\u00b8\f\6\2\2\u00b8\u00b9\t"+
		"\6\2\2\u00b9\u00c7\5\32\16\7\u00ba\u00bb\f\5\2\2\u00bb\u00bc\7%\2\2\u00bc"+
		"\u00c7\5\32\16\6\u00bd\u00be\f\4\2\2\u00be\u00bf\7&\2\2\u00bf\u00c7\5"+
		"\32\16\5\u00c0\u00c1\f\3\2\2\u00c1\u00c2\7(\2\2\u00c2\u00c3\5\32\16\2"+
		"\u00c3\u00c4\7)\2\2\u00c4\u00c5\5\32\16\3\u00c5\u00c7\3\2\2\2\u00c6\u00ab"+
		"\3\2\2\2\u00c6\u00ae\3\2\2\2\u00c6\u00b1\3\2\2\2\u00c6\u00b4\3\2\2\2\u00c6"+
		"\u00b7\3\2\2\2\u00c6\u00ba\3\2\2\2\u00c6\u00bd\3\2\2\2\u00c6\u00c0\3\2"+
		"\2\2\u00c7\u00ca\3\2\2\2\u00c8\u00c6\3\2\2\2\u00c8\u00c9\3\2\2\2\u00c9"+
		"\33\3\2\2\2\u00ca\u00c8\3\2\2\2\u00cb\u00cc\7\66\2\2\u00cc\u00ce\7\25"+
		"\2\2\u00cd\u00cf\5\36\20\2\u00ce\u00cd\3\2\2\2\u00ce\u00cf\3\2\2\2\u00cf"+
		"\u00d0\3\2\2\2\u00d0\u00d9\7\26\2\2\u00d1\u00d2\7\6\2\2\u00d2\u00d3\7"+
		"\25\2\2\u00d3\u00d5\7\64\2\2\u00d4\u00d6\5 \21\2\u00d5\u00d4\3\2\2\2\u00d5"+
		"\u00d6\3\2\2\2\u00d6\u00d7\3\2\2\2\u00d7\u00d9\7\26\2\2\u00d8\u00cb\3"+
		"\2\2\2\u00d8\u00d1\3\2\2\2\u00d9\35\3\2\2\2\u00da\u00df\5\32\16\2\u00db"+
		"\u00dc\7+\2\2\u00dc\u00de\5\32\16\2\u00dd\u00db\3\2\2\2\u00de\u00e1\3"+
		"\2\2\2\u00df\u00dd\3\2\2\2\u00df\u00e0\3\2\2\2\u00e0\37\3\2\2\2\u00e1"+
		"\u00df\3\2\2\2\u00e2\u00e3\7+\2\2\u00e3\u00e5\5\32\16\2\u00e4\u00e2\3"+
		"\2\2\2\u00e5\u00e6\3\2\2\2\u00e6\u00e4\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e7"+
		"!\3\2\2\2\u00e8\u00e9\7\r\2\2\u00e9\u00ea\7\25\2\2\u00ea\u00eb\5\32\16"+
		"\2\u00eb\u00ec\7\26\2\2\u00ec\u00ee\7\31\2\2\u00ed\u00ef\5\24\13\2\u00ee"+
		"\u00ed\3\2\2\2\u00ee\u00ef\3\2\2\2\u00ef\u00f0\3\2\2\2\u00f0\u00f1\7\32"+
		"\2\2\u00f1\u0103\3\2\2\2\u00f2\u00f3\7\r\2\2\u00f3\u00f4\7\25\2\2\u00f4"+
		"\u00f5\5\32\16\2\u00f5\u00f6\7\26\2\2\u00f6\u00f8\7\31\2\2\u00f7\u00f9"+
		"\5\24\13\2\u00f8\u00f7\3\2\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00fa\3\2\2\2"+
		"\u00fa\u00fb\7\32\2\2\u00fb\u00fc\7\t\2\2\u00fc\u00fe\7\31\2\2\u00fd\u00ff"+
		"\5\24\13\2\u00fe\u00fd\3\2\2\2\u00fe\u00ff\3\2\2\2\u00ff\u0100\3\2\2\2"+
		"\u0100\u0101\7\32\2\2\u0101\u0103\3\2\2\2\u0102\u00e8\3\2\2\2\u0102\u00f2"+
		"\3\2\2\2\u0103#\3\2\2\2\u0104\u0105\7\24\2\2\u0105\u0106\7\25\2\2\u0106"+
		"\u0107\5\32\16\2\u0107\u0108\7\26\2\2\u0108\u010a\7\31\2\2\u0109\u010b"+
		"\5\24\13\2\u010a\u0109\3\2\2\2\u010a\u010b\3\2\2\2\u010b\u010c\3\2\2\2"+
		"\u010c\u010d\7\32\2\2\u010d\u0121\3\2\2\2\u010e\u010f\7\f\2\2\u010f\u0110"+
		"\7\25\2\2\u0110\u0111\5\30\r\2\u0111\u0112\7.\2\2\u0112\u0113\5\32\16"+
		"\2\u0113\u0114\7*\2\2\u0114\u0115\5\32\16\2\u0115\u0116\7*\2\2\u0116\u0117"+
		"\5\30\r\2\u0117\u0118\t\2\2\2\u0118\u0119\5\32\16\2\u0119\u011a\7\26\2"+
		"\2\u011a\u011c\7\31\2\2\u011b\u011d\5\24\13\2\u011c\u011b\3\2\2\2\u011c"+
		"\u011d\3\2\2\2\u011d\u011e\3\2\2\2\u011e\u011f\7\32\2\2\u011f\u0121\3"+
		"\2\2\2\u0120\u0104\3\2\2\2\u0120\u010e\3\2\2\2\u0121%\3\2\2\2\34,\60;"+
		"JRX]ms\u0088\u0098\u00a9\u00c6\u00c8\u00ce\u00d5\u00d8\u00df\u00e6\u00ee"+
		"\u00f8\u00fe\u0102\u010a\u011c\u0120";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}