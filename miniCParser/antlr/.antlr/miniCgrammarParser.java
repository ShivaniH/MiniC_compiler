// Generated from /home/shivanih/Desktop/IIITHsem3/Compilers/MajorProject/minic-grammar-ShivaniH/miniCParser/antlr/miniCgrammar.g4 by ANTLR 4.7.1
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
			setState(44); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(43);
				declaration();
				}
				}
				setState(46); 
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
			setState(50);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				_localctx = new VariableDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(48);
				variableDecl();
				}
				break;
			case 2:
				_localctx = new FunctionDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(49);
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
			setState(52);
			dataType();
			setState(53);
			variableDeclList();
			setState(54);
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
			setState(56);
			singleVarDecl();
			setState(61);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(57);
				match(Comma);
				setState(58);
				singleVarDecl();
				}
				}
				setState(63);
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
			setState(76);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				_localctx = new TwoDarrayContext(_localctx);
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
				_localctx = new OneDarrayContext(_localctx);
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
				_localctx = new SimpleVariableContext(_localctx);
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
			setState(84);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Int:
				_localctx = new IntDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(78);
				match(Int);
				}
				break;
			case Char:
				_localctx = new CharDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(79);
				match(Char);
				}
				break;
			case Bool:
				_localctx = new BoolDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(80);
				match(Bool);
				}
				break;
			case Long:
				_localctx = new LongDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(81);
				match(Long);
				}
				break;
			case Uint:
				_localctx = new UintDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(82);
				match(Uint);
				}
				break;
			case Ulong:
				_localctx = new UlongDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(83);
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
			setState(86);
			dataType();
			setState(87);
			match(Id);
			setState(88);
			match(LeftParen);
			setState(90);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Char) | (1L << Int) | (1L << Long) | (1L << Uint) | (1L << Ulong))) != 0)) {
				{
				setState(89);
				paramsList();
				}
			}

			setState(92);
			match(RightParen);
			setState(93);
			match(LeftBrace);
			setState(95);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(94);
				statementList();
				}
				break;
			}
			setState(97);
			match(Return);
			setState(98);
			expr(0);
			setState(99);
			match(Semi);
			setState(100);
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
			setState(102);
			dataType();
			setState(103);
			match(Id);
			}
			setState(111);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(105);
				match(Comma);
				setState(106);
				dataType();
				setState(107);
				match(Id);
				}
				}
				setState(113);
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
			setState(115); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(114);
					statement();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(117); 
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
		public LocationContext location() {
			return getRuleContext(LocationContext.class,0);
		}
		public AssignOpContext assignOp() {
			return getRuleContext(AssignOpContext.class,0);
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
		try {
			setState(138);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				_localctx = new VariableDeclStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(119);
				variableDecl();
				}
				break;
			case 2:
				_localctx = new AssignmentStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(120);
				location();
				setState(121);
				assignOp();
				setState(122);
				expr(0);
				setState(123);
				match(Semi);
				}
				break;
			case 3:
				_localctx = new ExprStmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(125);
				expr(0);
				setState(126);
				match(Semi);
				}
				break;
			case 4:
				_localctx = new ConditionStmtContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(128);
				conditionalStmt();
				}
				break;
			case 5:
				_localctx = new IterationStmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(129);
				iterativeStmt();
				}
				break;
			case 6:
				_localctx = new ReturnStmtContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(130);
				match(Return);
				setState(131);
				expr(0);
				setState(132);
				match(Semi);
				}
				break;
			case 7:
				_localctx = new BreakStmtContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(134);
				match(Break);
				setState(135);
				match(Semi);
				}
				break;
			case 8:
				_localctx = new ContinueStmtContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(136);
				match(Continue);
				setState(137);
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
		public List<ArrayExprContext> arrayExpr() {
			return getRuleContexts(ArrayExprContext.class);
		}
		public ArrayExprContext arrayExpr(int i) {
			return getRuleContext(ArrayExprContext.class,i);
		}
		public TwoDarrayLocationContext(LocationContext ctx) { copyFrom(ctx); }
	}
	public static class SimpleVarLocationContext extends LocationContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public SimpleVarLocationContext(LocationContext ctx) { copyFrom(ctx); }
	}
	public static class OneDarrayLocationContext extends LocationContext {
		public TerminalNode Id() { return getToken(miniCgrammarParser.Id, 0); }
		public ArrayExprContext arrayExpr() {
			return getRuleContext(ArrayExprContext.class,0);
		}
		public OneDarrayLocationContext(LocationContext ctx) { copyFrom(ctx); }
	}

	public final LocationContext location() throws RecognitionException {
		LocationContext _localctx = new LocationContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_location);
		try {
			setState(154);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				_localctx = new SimpleVarLocationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(140);
				match(Id);
				}
				break;
			case 2:
				_localctx = new OneDarrayLocationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(141);
				match(Id);
				setState(142);
				match(LeftBracket);
				setState(143);
				arrayExpr(0);
				setState(144);
				match(RightBracket);
				}
				break;
			case 3:
				_localctx = new TwoDarrayLocationContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(146);
				match(Id);
				setState(147);
				match(LeftBracket);
				setState(148);
				arrayExpr(0);
				setState(149);
				match(RightBracket);
				setState(150);
				match(LeftBracket);
				setState(151);
				arrayExpr(0);
				setState(152);
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
	 
		public AssignOpContext() { }
		public void copyFrom(AssignOpContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class PlusAssignContext extends AssignOpContext {
		public PlusAssignContext(AssignOpContext ctx) { copyFrom(ctx); }
	}
	public static class EqualAssignContext extends AssignOpContext {
		public EqualAssignContext(AssignOpContext ctx) { copyFrom(ctx); }
	}
	public static class MinusAssignContext extends AssignOpContext {
		public MinusAssignContext(AssignOpContext ctx) { copyFrom(ctx); }
	}

	public final AssignOpContext assignOp() throws RecognitionException {
		AssignOpContext _localctx = new AssignOpContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_assignOp);
		try {
			setState(159);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Assign:
				_localctx = new EqualAssignContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(156);
				match(Assign);
				}
				break;
			case PlusAssign:
				_localctx = new PlusAssignContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(157);
				match(PlusAssign);
				}
				break;
			case MinusAssign:
				_localctx = new MinusAssignContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(158);
				match(MinusAssign);
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
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public RelopExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class MulDivModExprContext extends ExprContext {
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
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(176);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				{
				_localctx = new BoolLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(162);
				match(BoolLiteral);
				}
				break;
			case 2:
				{
				_localctx = new IntLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(163);
				match(IntegerLiteral);
				}
				break;
			case 3:
				{
				_localctx = new StringLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(164);
				match(StringLiteral);
				}
				break;
			case 4:
				{
				_localctx = new CharLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(165);
				match(CharLiteral);
				}
				break;
			case 5:
				{
				_localctx = new ParenthesesExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(166);
				match(LeftParen);
				setState(167);
				expr(0);
				setState(168);
				match(RightParen);
				}
				break;
			case 6:
				{
				_localctx = new LocationExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(170);
				location();
				}
				break;
			case 7:
				{
				_localctx = new FunctionCallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(171);
				functionCall();
				}
				break;
			case 8:
				{
				_localctx = new NegateExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(172);
				match(Minus);
				setState(173);
				expr(10);
				}
				break;
			case 9:
				{
				_localctx = new NotExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(174);
				match(Not);
				setState(175);
				expr(9);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(207);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(205);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
					case 1:
						{
						_localctx = new ExponentExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(178);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(179);
						match(Caret);
						setState(180);
						expr(8);
						}
						break;
					case 2:
						{
						_localctx = new MulDivModExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(181);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(182);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Star) | (1L << Div) | (1L << Mod))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(183);
						expr(8);
						}
						break;
					case 3:
						{
						_localctx = new AddSubExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(184);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(185);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(186);
						expr(7);
						}
						break;
					case 4:
						{
						_localctx = new RelopExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(187);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(188);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Less) | (1L << LessEqual) | (1L << Greater) | (1L << GreaterEqual))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(189);
						expr(6);
						}
						break;
					case 5:
						{
						_localctx = new EqualityExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(190);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(191);
						_la = _input.LA(1);
						if ( !(_la==Equal || _la==NotEqual) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(192);
						expr(5);
						}
						break;
					case 6:
						{
						_localctx = new LogicalANDExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(193);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(194);
						match(And);
						setState(195);
						expr(4);
						}
						break;
					case 7:
						{
						_localctx = new LogicalORExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(196);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(197);
						match(Or);
						setState(198);
						expr(3);
						}
						break;
					case 8:
						{
						_localctx = new TernaryExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(199);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(200);
						match(Question);
						setState(201);
						expr(0);
						setState(202);
						match(Colon);
						setState(203);
						expr(1);
						}
						break;
					}
					} 
				}
				setState(209);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
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
		public ArrayExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrayExpr; }
	 
		public ArrayExprContext() { }
		public void copyFrom(ArrayExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class LogicalANDArrayExprContext extends ArrayExprContext {
		public List<ArrayExprContext> arrayExpr() {
			return getRuleContexts(ArrayExprContext.class);
		}
		public ArrayExprContext arrayExpr(int i) {
			return getRuleContext(ArrayExprContext.class,i);
		}
		public LogicalANDArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class AddSubArrayExprContext extends ArrayExprContext {
		public List<ArrayExprContext> arrayExpr() {
			return getRuleContexts(ArrayExprContext.class);
		}
		public ArrayExprContext arrayExpr(int i) {
			return getRuleContext(ArrayExprContext.class,i);
		}
		public AddSubArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class LocationArrayExprContext extends ArrayExprContext {
		public LocationContext location() {
			return getRuleContext(LocationContext.class,0);
		}
		public LocationArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class EqualityArrayExprContext extends ArrayExprContext {
		public List<ArrayExprContext> arrayExpr() {
			return getRuleContexts(ArrayExprContext.class);
		}
		public ArrayExprContext arrayExpr(int i) {
			return getRuleContext(ArrayExprContext.class,i);
		}
		public EqualityArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class ExponentArrayExprContext extends ArrayExprContext {
		public List<ArrayExprContext> arrayExpr() {
			return getRuleContexts(ArrayExprContext.class);
		}
		public ArrayExprContext arrayExpr(int i) {
			return getRuleContext(ArrayExprContext.class,i);
		}
		public ExponentArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class LogicalORArrayExprContext extends ArrayExprContext {
		public List<ArrayExprContext> arrayExpr() {
			return getRuleContexts(ArrayExprContext.class);
		}
		public ArrayExprContext arrayExpr(int i) {
			return getRuleContext(ArrayExprContext.class,i);
		}
		public LogicalORArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class NotArrayExprContext extends ArrayExprContext {
		public ArrayExprContext arrayExpr() {
			return getRuleContext(ArrayExprContext.class,0);
		}
		public NotArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class MulDivModArrayExprContext extends ArrayExprContext {
		public List<ArrayExprContext> arrayExpr() {
			return getRuleContexts(ArrayExprContext.class);
		}
		public ArrayExprContext arrayExpr(int i) {
			return getRuleContext(ArrayExprContext.class,i);
		}
		public MulDivModArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class ParenthesesArrayExprContext extends ArrayExprContext {
		public ArrayExprContext arrayExpr() {
			return getRuleContext(ArrayExprContext.class,0);
		}
		public ParenthesesArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class FunctionCallArrayExprContext extends ArrayExprContext {
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
		}
		public FunctionCallArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class RelopArrayExprContext extends ArrayExprContext {
		public List<ArrayExprContext> arrayExpr() {
			return getRuleContexts(ArrayExprContext.class);
		}
		public ArrayExprContext arrayExpr(int i) {
			return getRuleContext(ArrayExprContext.class,i);
		}
		public RelopArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
	}
	public static class IntLitArrayExprContext extends ArrayExprContext {
		public TerminalNode IntegerLiteral() { return getToken(miniCgrammarParser.IntegerLiteral, 0); }
		public IntLitArrayExprContext(ArrayExprContext ctx) { copyFrom(ctx); }
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
			setState(220);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				{
				_localctx = new IntLitArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(211);
				match(IntegerLiteral);
				}
				break;
			case 2:
				{
				_localctx = new ParenthesesArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(212);
				match(LeftParen);
				setState(213);
				arrayExpr(0);
				setState(214);
				match(RightParen);
				}
				break;
			case 3:
				{
				_localctx = new LocationArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(216);
				location();
				}
				break;
			case 4:
				{
				_localctx = new FunctionCallArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(217);
				functionCall();
				}
				break;
			case 5:
				{
				_localctx = new NotArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(218);
				match(Not);
				setState(219);
				arrayExpr(8);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(245);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(243);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
					case 1:
						{
						_localctx = new ExponentArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(222);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(223);
						match(Caret);
						setState(224);
						arrayExpr(7);
						}
						break;
					case 2:
						{
						_localctx = new MulDivModArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(225);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(226);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Star) | (1L << Div) | (1L << Mod))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(227);
						arrayExpr(7);
						}
						break;
					case 3:
						{
						_localctx = new AddSubArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(228);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(229);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(230);
						arrayExpr(6);
						}
						break;
					case 4:
						{
						_localctx = new RelopArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(231);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(232);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Less) | (1L << LessEqual) | (1L << Greater) | (1L << GreaterEqual))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(233);
						arrayExpr(5);
						}
						break;
					case 5:
						{
						_localctx = new EqualityArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(234);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(235);
						_la = _input.LA(1);
						if ( !(_la==Equal || _la==NotEqual) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(236);
						arrayExpr(4);
						}
						break;
					case 6:
						{
						_localctx = new LogicalANDArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(237);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(238);
						match(And);
						setState(239);
						arrayExpr(3);
						}
						break;
					case 7:
						{
						_localctx = new LogicalORArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(240);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(241);
						match(Or);
						setState(242);
						arrayExpr(2);
						}
						break;
					}
					} 
				}
				setState(247);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
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
		enterRule(_localctx, 30, RULE_functionCall);
		int _la;
		try {
			setState(261);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Id:
				_localctx = new UserDefFnCallContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(248);
				match(Id);
				setState(249);
				match(LeftParen);
				setState(251);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Callout) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(250);
					argsList();
					}
				}

				setState(253);
				match(RightParen);
				}
				break;
			case Callout:
				_localctx = new LibFnCallContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(254);
				match(Callout);
				setState(255);
				match(LeftParen);
				setState(256);
				match(StringLiteral);
				setState(258);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(257);
					calloutArgs();
					}
				}

				setState(260);
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
			setState(263);
			expr(0);
			{
			setState(268);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(264);
				match(Comma);
				setState(265);
				expr(0);
				}
				}
				setState(270);
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
			setState(273); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(271);
				match(Comma);
				setState(272);
				expr(0);
				}
				}
				setState(275); 
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
		enterRule(_localctx, 36, RULE_conditionalStmt);
		int _la;
		try {
			setState(303);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				_localctx = new IfStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(277);
				match(If);
				setState(278);
				match(LeftParen);
				setState(279);
				expr(0);
				setState(280);
				match(RightParen);
				setState(281);
				match(LeftBrace);
				setState(283);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(282);
					statementList();
					}
				}

				setState(285);
				match(RightBrace);
				}
				break;
			case 2:
				_localctx = new IfElseStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(287);
				match(If);
				setState(288);
				match(LeftParen);
				setState(289);
				expr(0);
				setState(290);
				match(RightParen);
				setState(291);
				match(LeftBrace);
				setState(293);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(292);
					statementList();
					}
				}

				setState(295);
				match(RightBrace);
				setState(296);
				match(Else);
				setState(297);
				match(LeftBrace);
				setState(299);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(298);
					statementList();
					}
				}

				setState(301);
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
		public AssignOpContext assignOp() {
			return getRuleContext(AssignOpContext.class,0);
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
		enterRule(_localctx, 38, RULE_iterativeStmt);
		int _la;
		try {
			setState(333);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case While:
				_localctx = new WhileStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(305);
				match(While);
				setState(306);
				match(LeftParen);
				setState(307);
				expr(0);
				setState(308);
				match(RightParen);
				setState(309);
				match(LeftBrace);
				setState(311);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(310);
					statementList();
					}
				}

				setState(313);
				match(RightBrace);
				}
				break;
			case For:
				_localctx = new ForStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(315);
				match(For);
				setState(316);
				match(LeftParen);
				setState(317);
				location();
				setState(318);
				match(Assign);
				setState(319);
				expr(0);
				setState(320);
				match(Semi);
				setState(321);
				expr(0);
				setState(322);
				match(Semi);
				setState(323);
				location();
				setState(324);
				assignOp();
				setState(325);
				expr(0);
				setState(326);
				match(RightParen);
				setState(327);
				match(LeftBrace);
				setState(329);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(328);
					statementList();
					}
				}

				setState(331);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3:\u0152\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\3\2\3\2\3\2\3\3\6\3/\n\3\r\3\16\3\60\3"+
		"\4\3\4\5\4\65\n\4\3\5\3\5\3\5\3\5\3\6\3\6\3\6\7\6>\n\6\f\6\16\6A\13\6"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7O\n\7\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\5\bW\n\b\3\t\3\t\3\t\3\t\5\t]\n\t\3\t\3\t\3\t\5\tb\n\t\3"+
		"\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\7\np\n\n\f\n\16\ns\13\n"+
		"\3\13\6\13v\n\13\r\13\16\13w\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3"+
		"\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\f\u008d\n\f\3\r\3\r\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u009d\n\r\3\16\3\16\3\16\5\16\u00a2"+
		"\n\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\5\17\u00b3\n\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\7\17\u00d0\n\17\f\17\16\17\u00d3\13\17\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\5\20\u00df\n\20\3\20\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\7\20\u00f6\n\20\f\20\16\20\u00f9\13\20\3\21\3\21"+
		"\3\21\5\21\u00fe\n\21\3\21\3\21\3\21\3\21\3\21\5\21\u0105\n\21\3\21\5"+
		"\21\u0108\n\21\3\22\3\22\3\22\7\22\u010d\n\22\f\22\16\22\u0110\13\22\3"+
		"\23\3\23\6\23\u0114\n\23\r\23\16\23\u0115\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\5\24\u011e\n\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\5\24\u0128\n"+
		"\24\3\24\3\24\3\24\3\24\5\24\u012e\n\24\3\24\3\24\5\24\u0132\n\24\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\5\25\u013a\n\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\5\25\u014c\n\25\3\25"+
		"\3\25\5\25\u0150\n\25\3\25\2\4\34\36\26\2\4\6\b\n\f\16\20\22\24\26\30"+
		"\32\34\36 \"$&(\2\6\3\2 \"\3\2\36\37\3\2\32\35\3\2\60\61\2\u017d\2*\3"+
		"\2\2\2\4.\3\2\2\2\6\64\3\2\2\2\b\66\3\2\2\2\n:\3\2\2\2\fN\3\2\2\2\16V"+
		"\3\2\2\2\20X\3\2\2\2\22h\3\2\2\2\24u\3\2\2\2\26\u008c\3\2\2\2\30\u009c"+
		"\3\2\2\2\32\u00a1\3\2\2\2\34\u00b2\3\2\2\2\36\u00de\3\2\2\2 \u0107\3\2"+
		"\2\2\"\u0109\3\2\2\2$\u0113\3\2\2\2&\u0131\3\2\2\2(\u014f\3\2\2\2*+\5"+
		"\4\3\2+,\7\2\2\3,\3\3\2\2\2-/\5\6\4\2.-\3\2\2\2/\60\3\2\2\2\60.\3\2\2"+
		"\2\60\61\3\2\2\2\61\5\3\2\2\2\62\65\5\b\5\2\63\65\5\20\t\2\64\62\3\2\2"+
		"\2\64\63\3\2\2\2\65\7\3\2\2\2\66\67\5\16\b\2\678\5\n\6\289\7)\2\29\t\3"+
		"\2\2\2:?\5\f\7\2;<\7*\2\2<>\5\f\7\2=;\3\2\2\2>A\3\2\2\2?=\3\2\2\2?@\3"+
		"\2\2\2@\13\3\2\2\2A?\3\2\2\2BC\7\66\2\2CD\7\26\2\2DE\7\65\2\2EF\7\27\2"+
		"\2FG\7\26\2\2GH\7\65\2\2HO\7\27\2\2IJ\7\66\2\2JK\7\26\2\2KL\7\65\2\2L"+
		"O\7\27\2\2MO\7\66\2\2NB\3\2\2\2NI\3\2\2\2NM\3\2\2\2O\r\3\2\2\2PW\7\r\2"+
		"\2QW\7\6\2\2RW\7\3\2\2SW\7\16\2\2TW\7\21\2\2UW\7\22\2\2VP\3\2\2\2VQ\3"+
		"\2\2\2VR\3\2\2\2VS\3\2\2\2VT\3\2\2\2VU\3\2\2\2W\17\3\2\2\2XY\5\16\b\2"+
		"YZ\7\66\2\2Z\\\7\24\2\2[]\5\22\n\2\\[\3\2\2\2\\]\3\2\2\2]^\3\2\2\2^_\7"+
		"\25\2\2_a\7\30\2\2`b\5\24\13\2a`\3\2\2\2ab\3\2\2\2bc\3\2\2\2cd\7\17\2"+
		"\2de\5\34\17\2ef\7)\2\2fg\7\31\2\2g\21\3\2\2\2hi\5\16\b\2ij\7\66\2\2j"+
		"q\3\2\2\2kl\7*\2\2lm\5\16\b\2mn\7\66\2\2np\3\2\2\2ok\3\2\2\2ps\3\2\2\2"+
		"qo\3\2\2\2qr\3\2\2\2r\23\3\2\2\2sq\3\2\2\2tv\5\26\f\2ut\3\2\2\2vw\3\2"+
		"\2\2wu\3\2\2\2wx\3\2\2\2x\25\3\2\2\2y\u008d\5\b\5\2z{\5\30\r\2{|\5\32"+
		"\16\2|}\5\34\17\2}~\7)\2\2~\u008d\3\2\2\2\177\u0080\5\34\17\2\u0080\u0081"+
		"\7)\2\2\u0081\u008d\3\2\2\2\u0082\u008d\5&\24\2\u0083\u008d\5(\25\2\u0084"+
		"\u0085\7\17\2\2\u0085\u0086\5\34\17\2\u0086\u0087\7)\2\2\u0087\u008d\3"+
		"\2\2\2\u0088\u0089\7\4\2\2\u0089\u008d\7)\2\2\u008a\u008b\7\7\2\2\u008b"+
		"\u008d\7)\2\2\u008cy\3\2\2\2\u008cz\3\2\2\2\u008c\177\3\2\2\2\u008c\u0082"+
		"\3\2\2\2\u008c\u0083\3\2\2\2\u008c\u0084\3\2\2\2\u008c\u0088\3\2\2\2\u008c"+
		"\u008a\3\2\2\2\u008d\27\3\2\2\2\u008e\u009d\7\66\2\2\u008f\u0090\7\66"+
		"\2\2\u0090\u0091\7\26\2\2\u0091\u0092\5\36\20\2\u0092\u0093\7\27\2\2\u0093"+
		"\u009d\3\2\2\2\u0094\u0095\7\66\2\2\u0095\u0096\7\26\2\2\u0096\u0097\5"+
		"\36\20\2\u0097\u0098\7\27\2\2\u0098\u0099\7\26\2\2\u0099\u009a\5\36\20"+
		"\2\u009a\u009b\7\27\2\2\u009b\u009d\3\2\2\2\u009c\u008e\3\2\2\2\u009c"+
		"\u008f\3\2\2\2\u009c\u0094\3\2\2\2\u009d\31\3\2\2\2\u009e\u00a2\7-\2\2"+
		"\u009f\u00a2\7.\2\2\u00a0\u00a2\7/\2\2\u00a1\u009e\3\2\2\2\u00a1\u009f"+
		"\3\2\2\2\u00a1\u00a0\3\2\2\2\u00a2\33\3\2\2\2\u00a3\u00a4\b\17\1\2\u00a4"+
		"\u00b3\7\64\2\2\u00a5\u00b3\7\65\2\2\u00a6\u00b3\7\63\2\2\u00a7\u00b3"+
		"\7\62\2\2\u00a8\u00a9\7\24\2\2\u00a9\u00aa\5\34\17\2\u00aa\u00ab\7\25"+
		"\2\2\u00ab\u00b3\3\2\2\2\u00ac\u00b3\5\30\r\2\u00ad\u00b3\5 \21\2\u00ae"+
		"\u00af\7\37\2\2\u00af\u00b3\5\34\17\f\u00b0\u00b1\7&\2\2\u00b1\u00b3\5"+
		"\34\17\13\u00b2\u00a3\3\2\2\2\u00b2\u00a5\3\2\2\2\u00b2\u00a6\3\2\2\2"+
		"\u00b2\u00a7\3\2\2\2\u00b2\u00a8\3\2\2\2\u00b2\u00ac\3\2\2\2\u00b2\u00ad"+
		"\3\2\2\2\u00b2\u00ae\3\2\2\2\u00b2\u00b0\3\2\2\2\u00b3\u00d1\3\2\2\2\u00b4"+
		"\u00b5\f\n\2\2\u00b5\u00b6\7#\2\2\u00b6\u00d0\5\34\17\n\u00b7\u00b8\f"+
		"\t\2\2\u00b8\u00b9\t\2\2\2\u00b9\u00d0\5\34\17\n\u00ba\u00bb\f\b\2\2\u00bb"+
		"\u00bc\t\3\2\2\u00bc\u00d0\5\34\17\t\u00bd\u00be\f\7\2\2\u00be\u00bf\t"+
		"\4\2\2\u00bf\u00d0\5\34\17\b\u00c0\u00c1\f\6\2\2\u00c1\u00c2\t\5\2\2\u00c2"+
		"\u00d0\5\34\17\7\u00c3\u00c4\f\5\2\2\u00c4\u00c5\7$\2\2\u00c5\u00d0\5"+
		"\34\17\6\u00c6\u00c7\f\4\2\2\u00c7\u00c8\7%\2\2\u00c8\u00d0\5\34\17\5"+
		"\u00c9\u00ca\f\3\2\2\u00ca\u00cb\7\'\2\2\u00cb\u00cc\5\34\17\2\u00cc\u00cd"+
		"\7(\2\2\u00cd\u00ce\5\34\17\3\u00ce\u00d0\3\2\2\2\u00cf\u00b4\3\2\2\2"+
		"\u00cf\u00b7\3\2\2\2\u00cf\u00ba\3\2\2\2\u00cf\u00bd\3\2\2\2\u00cf\u00c0"+
		"\3\2\2\2\u00cf\u00c3\3\2\2\2\u00cf\u00c6\3\2\2\2\u00cf\u00c9\3\2\2\2\u00d0"+
		"\u00d3\3\2\2\2\u00d1\u00cf\3\2\2\2\u00d1\u00d2\3\2\2\2\u00d2\35\3\2\2"+
		"\2\u00d3\u00d1\3\2\2\2\u00d4\u00d5\b\20\1\2\u00d5\u00df\7\65\2\2\u00d6"+
		"\u00d7\7\24\2\2\u00d7\u00d8\5\36\20\2\u00d8\u00d9\7\25\2\2\u00d9\u00df"+
		"\3\2\2\2\u00da\u00df\5\30\r\2\u00db\u00df\5 \21\2\u00dc\u00dd\7&\2\2\u00dd"+
		"\u00df\5\36\20\n\u00de\u00d4\3\2\2\2\u00de\u00d6\3\2\2\2\u00de\u00da\3"+
		"\2\2\2\u00de\u00db\3\2\2\2\u00de\u00dc\3\2\2\2\u00df\u00f7\3\2\2\2\u00e0"+
		"\u00e1\f\t\2\2\u00e1\u00e2\7#\2\2\u00e2\u00f6\5\36\20\t\u00e3\u00e4\f"+
		"\b\2\2\u00e4\u00e5\t\2\2\2\u00e5\u00f6\5\36\20\t\u00e6\u00e7\f\7\2\2\u00e7"+
		"\u00e8\t\3\2\2\u00e8\u00f6\5\36\20\b\u00e9\u00ea\f\6\2\2\u00ea\u00eb\t"+
		"\4\2\2\u00eb\u00f6\5\36\20\7\u00ec\u00ed\f\5\2\2\u00ed\u00ee\t\5\2\2\u00ee"+
		"\u00f6\5\36\20\6\u00ef\u00f0\f\4\2\2\u00f0\u00f1\7$\2\2\u00f1\u00f6\5"+
		"\36\20\5\u00f2\u00f3\f\3\2\2\u00f3\u00f4\7%\2\2\u00f4\u00f6\5\36\20\4"+
		"\u00f5\u00e0\3\2\2\2\u00f5\u00e3\3\2\2\2\u00f5\u00e6\3\2\2\2\u00f5\u00e9"+
		"\3\2\2\2\u00f5\u00ec\3\2\2\2\u00f5\u00ef\3\2\2\2\u00f5\u00f2\3\2\2\2\u00f6"+
		"\u00f9\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f7\u00f8\3\2\2\2\u00f8\37\3\2\2"+
		"\2\u00f9\u00f7\3\2\2\2\u00fa\u00fb\7\66\2\2\u00fb\u00fd\7\24\2\2\u00fc"+
		"\u00fe\5\"\22\2\u00fd\u00fc\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe\u00ff\3"+
		"\2\2\2\u00ff\u0108\7\25\2\2\u0100\u0101\7\5\2\2\u0101\u0102\7\24\2\2\u0102"+
		"\u0104\7\63\2\2\u0103\u0105\5$\23\2\u0104\u0103\3\2\2\2\u0104\u0105\3"+
		"\2\2\2\u0105\u0106\3\2\2\2\u0106\u0108\7\25\2\2\u0107\u00fa\3\2\2\2\u0107"+
		"\u0100\3\2\2\2\u0108!\3\2\2\2\u0109\u010e\5\34\17\2\u010a\u010b\7*\2\2"+
		"\u010b\u010d\5\34\17\2\u010c\u010a\3\2\2\2\u010d\u0110\3\2\2\2\u010e\u010c"+
		"\3\2\2\2\u010e\u010f\3\2\2\2\u010f#\3\2\2\2\u0110\u010e\3\2\2\2\u0111"+
		"\u0112\7*\2\2\u0112\u0114\5\34\17\2\u0113\u0111\3\2\2\2\u0114\u0115\3"+
		"\2\2\2\u0115\u0113\3\2\2\2\u0115\u0116\3\2\2\2\u0116%\3\2\2\2\u0117\u0118"+
		"\7\f\2\2\u0118\u0119\7\24\2\2\u0119\u011a\5\34\17\2\u011a\u011b\7\25\2"+
		"\2\u011b\u011d\7\30\2\2\u011c\u011e\5\24\13\2\u011d\u011c\3\2\2\2\u011d"+
		"\u011e\3\2\2\2\u011e\u011f\3\2\2\2\u011f\u0120\7\31\2\2\u0120\u0132\3"+
		"\2\2\2\u0121\u0122\7\f\2\2\u0122\u0123\7\24\2\2\u0123\u0124\5\34\17\2"+
		"\u0124\u0125\7\25\2\2\u0125\u0127\7\30\2\2\u0126\u0128\5\24\13\2\u0127"+
		"\u0126\3\2\2\2\u0127\u0128\3\2\2\2\u0128\u0129\3\2\2\2\u0129\u012a\7\31"+
		"\2\2\u012a\u012b\7\b\2\2\u012b\u012d\7\30\2\2\u012c\u012e\5\24\13\2\u012d"+
		"\u012c\3\2\2\2\u012d\u012e\3\2\2\2\u012e\u012f\3\2\2\2\u012f\u0130\7\31"+
		"\2\2\u0130\u0132\3\2\2\2\u0131\u0117\3\2\2\2\u0131\u0121\3\2\2\2\u0132"+
		"\'\3\2\2\2\u0133\u0134\7\23\2\2\u0134\u0135\7\24\2\2\u0135\u0136\5\34"+
		"\17\2\u0136\u0137\7\25\2\2\u0137\u0139\7\30\2\2\u0138\u013a\5\24\13\2"+
		"\u0139\u0138\3\2\2\2\u0139\u013a\3\2\2\2\u013a\u013b\3\2\2\2\u013b\u013c"+
		"\7\31\2\2\u013c\u0150\3\2\2\2\u013d\u013e\7\13\2\2\u013e\u013f\7\24\2"+
		"\2\u013f\u0140\5\30\r\2\u0140\u0141\7-\2\2\u0141\u0142\5\34\17\2\u0142"+
		"\u0143\7)\2\2\u0143\u0144\5\34\17\2\u0144\u0145\7)\2\2\u0145\u0146\5\30"+
		"\r\2\u0146\u0147\5\32\16\2\u0147\u0148\5\34\17\2\u0148\u0149\7\25\2\2"+
		"\u0149\u014b\7\30\2\2\u014a\u014c\5\24\13\2\u014b\u014a\3\2\2\2\u014b"+
		"\u014c\3\2\2\2\u014c\u014d\3\2\2\2\u014d\u014e\7\31\2\2\u014e\u0150\3"+
		"\2\2\2\u014f\u0133\3\2\2\2\u014f\u013d\3\2\2\2\u0150)\3\2\2\2 \60\64?"+
		"NV\\aqw\u008c\u009c\u00a1\u00b2\u00cf\u00d1\u00de\u00f5\u00f7\u00fd\u0104"+
		"\u0107\u010e\u0115\u011d\u0127\u012d\u0131\u0139\u014b\u014f";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}