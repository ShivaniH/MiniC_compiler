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
		public VariableDeclListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclList; }
	 
		public VariableDeclListContext() { }
		public void copyFrom(VariableDeclListContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class SingleVariableContext extends VariableDeclListContext {
		public SingleVarDeclContext singleVarDecl() {
			return getRuleContext(SingleVarDeclContext.class,0);
		}
		public SingleVariableContext(VariableDeclListContext ctx) { copyFrom(ctx); }
	}
	public static class MultipleCSVariablesContext extends VariableDeclListContext {
		public SingleVarDeclContext singleVarDecl() {
			return getRuleContext(SingleVarDeclContext.class,0);
		}
		public VariableDeclListContext variableDeclList() {
			return getRuleContext(VariableDeclListContext.class,0);
		}
		public MultipleCSVariablesContext(VariableDeclListContext ctx) { copyFrom(ctx); }
	}

	public final VariableDeclListContext variableDeclList() throws RecognitionException {
		VariableDeclListContext _localctx = new VariableDeclListContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_variableDeclList);
		try {
			setState(61);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				_localctx = new MultipleCSVariablesContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(56);
				singleVarDecl();
				setState(57);
				match(Comma);
				setState(58);
				variableDeclList();
				}
				break;
			case 2:
				_localctx = new SingleVariableContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(60);
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
			setState(75);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				_localctx = new TwoDarrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(63);
				match(Id);
				setState(64);
				match(LeftBracket);
				setState(65);
				match(IntegerLiteral);
				setState(66);
				match(RightBracket);
				setState(67);
				match(LeftBracket);
				setState(68);
				match(IntegerLiteral);
				setState(69);
				match(RightBracket);
				}
				break;
			case 2:
				_localctx = new OneDarrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(70);
				match(Id);
				setState(71);
				match(LeftBracket);
				setState(72);
				match(IntegerLiteral);
				setState(73);
				match(RightBracket);
				}
				break;
			case 3:
				_localctx = new SimpleVariableContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(74);
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
			setState(83);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Int:
				_localctx = new IntDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(77);
				match(Int);
				}
				break;
			case Char:
				_localctx = new CharDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(78);
				match(Char);
				}
				break;
			case Bool:
				_localctx = new BoolDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(79);
				match(Bool);
				}
				break;
			case Long:
				_localctx = new LongDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(80);
				match(Long);
				}
				break;
			case Uint:
				_localctx = new UintDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(81);
				match(Uint);
				}
				break;
			case Ulong:
				_localctx = new UlongDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(82);
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
			setState(85);
			dataType();
			setState(86);
			match(Id);
			setState(87);
			match(LeftParen);
			setState(89);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Char) | (1L << Int) | (1L << Long) | (1L << Uint) | (1L << Ulong))) != 0)) {
				{
				setState(88);
				paramsList();
				}
			}

			setState(91);
			match(RightParen);
			setState(92);
			match(LeftBrace);
			setState(94);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(93);
				statementList();
				}
				break;
			}
			setState(96);
			match(Return);
			setState(97);
			expr(0);
			setState(98);
			match(Semi);
			setState(99);
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
			setState(101);
			dataType();
			setState(102);
			match(Id);
			}
			setState(110);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(104);
				match(Comma);
				setState(105);
				dataType();
				setState(106);
				match(Id);
				}
				}
				setState(112);
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
			setState(114); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(113);
					statement();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(116); 
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
			setState(137);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				_localctx = new VariableDeclStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(118);
				variableDecl();
				}
				break;
			case 2:
				_localctx = new AssignmentStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(119);
				location();
				setState(120);
				assignOp();
				setState(121);
				expr(0);
				setState(122);
				match(Semi);
				}
				break;
			case 3:
				_localctx = new ExprStmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(124);
				expr(0);
				setState(125);
				match(Semi);
				}
				break;
			case 4:
				_localctx = new ConditionStmtContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(127);
				conditionalStmt();
				}
				break;
			case 5:
				_localctx = new IterationStmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(128);
				iterativeStmt();
				}
				break;
			case 6:
				_localctx = new ReturnStmtContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(129);
				match(Return);
				setState(130);
				expr(0);
				setState(131);
				match(Semi);
				}
				break;
			case 7:
				_localctx = new BreakStmtContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(133);
				match(Break);
				setState(134);
				match(Semi);
				}
				break;
			case 8:
				_localctx = new ContinueStmtContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(135);
				match(Continue);
				setState(136);
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
			setState(153);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				_localctx = new SimpleVarLocationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(139);
				match(Id);
				}
				break;
			case 2:
				_localctx = new OneDarrayLocationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(140);
				match(Id);
				setState(141);
				match(LeftBracket);
				setState(142);
				arrayExpr(0);
				setState(143);
				match(RightBracket);
				}
				break;
			case 3:
				_localctx = new TwoDarrayLocationContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(145);
				match(Id);
				setState(146);
				match(LeftBracket);
				setState(147);
				arrayExpr(0);
				setState(148);
				match(RightBracket);
				setState(149);
				match(LeftBracket);
				setState(150);
				arrayExpr(0);
				setState(151);
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
			setState(158);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Assign:
				_localctx = new EqualAssignContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(155);
				match(Assign);
				}
				break;
			case PlusAssign:
				_localctx = new PlusAssignContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(156);
				match(PlusAssign);
				}
				break;
			case MinusAssign:
				_localctx = new MinusAssignContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(157);
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
			setState(175);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				{
				_localctx = new BoolLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(161);
				match(BoolLiteral);
				}
				break;
			case 2:
				{
				_localctx = new IntLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(162);
				match(IntegerLiteral);
				}
				break;
			case 3:
				{
				_localctx = new StringLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(163);
				match(StringLiteral);
				}
				break;
			case 4:
				{
				_localctx = new CharLitExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(164);
				match(CharLiteral);
				}
				break;
			case 5:
				{
				_localctx = new ParenthesesExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(165);
				match(LeftParen);
				setState(166);
				expr(0);
				setState(167);
				match(RightParen);
				}
				break;
			case 6:
				{
				_localctx = new LocationExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(169);
				location();
				}
				break;
			case 7:
				{
				_localctx = new FunctionCallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(170);
				functionCall();
				}
				break;
			case 8:
				{
				_localctx = new NegateExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(171);
				match(Minus);
				setState(172);
				expr(10);
				}
				break;
			case 9:
				{
				_localctx = new NotExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(173);
				match(Not);
				setState(174);
				expr(9);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(206);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(204);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
					case 1:
						{
						_localctx = new ExponentExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(177);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(178);
						match(Caret);
						setState(179);
						expr(8);
						}
						break;
					case 2:
						{
						_localctx = new MulDivModExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(180);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(181);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Star) | (1L << Div) | (1L << Mod))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(182);
						expr(8);
						}
						break;
					case 3:
						{
						_localctx = new AddSubExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(183);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(184);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(185);
						expr(7);
						}
						break;
					case 4:
						{
						_localctx = new RelopExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(186);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(187);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Less) | (1L << LessEqual) | (1L << Greater) | (1L << GreaterEqual))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(188);
						expr(6);
						}
						break;
					case 5:
						{
						_localctx = new EqualityExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(189);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(190);
						_la = _input.LA(1);
						if ( !(_la==Equal || _la==NotEqual) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(191);
						expr(5);
						}
						break;
					case 6:
						{
						_localctx = new LogicalANDExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(192);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(193);
						match(And);
						setState(194);
						expr(4);
						}
						break;
					case 7:
						{
						_localctx = new LogicalORExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(195);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(196);
						match(Or);
						setState(197);
						expr(3);
						}
						break;
					case 8:
						{
						_localctx = new TernaryExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(198);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(199);
						match(Question);
						setState(200);
						expr(0);
						setState(201);
						match(Colon);
						setState(202);
						expr(2);
						}
						break;
					}
					} 
				}
				setState(208);
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
			setState(219);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				{
				_localctx = new IntLitArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(210);
				match(IntegerLiteral);
				}
				break;
			case 2:
				{
				_localctx = new ParenthesesArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(211);
				match(LeftParen);
				setState(212);
				arrayExpr(0);
				setState(213);
				match(RightParen);
				}
				break;
			case 3:
				{
				_localctx = new LocationArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(215);
				location();
				}
				break;
			case 4:
				{
				_localctx = new FunctionCallArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(216);
				functionCall();
				}
				break;
			case 5:
				{
				_localctx = new NotArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(217);
				match(Not);
				setState(218);
				arrayExpr(8);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(244);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(242);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
					case 1:
						{
						_localctx = new ExponentArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(221);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(222);
						match(Caret);
						setState(223);
						arrayExpr(7);
						}
						break;
					case 2:
						{
						_localctx = new MulDivModArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(224);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(225);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Star) | (1L << Div) | (1L << Mod))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(226);
						arrayExpr(7);
						}
						break;
					case 3:
						{
						_localctx = new AddSubArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(227);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(228);
						_la = _input.LA(1);
						if ( !(_la==Plus || _la==Minus) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(229);
						arrayExpr(6);
						}
						break;
					case 4:
						{
						_localctx = new RelopArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(230);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(231);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Less) | (1L << LessEqual) | (1L << Greater) | (1L << GreaterEqual))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(232);
						arrayExpr(5);
						}
						break;
					case 5:
						{
						_localctx = new EqualityArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(233);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(234);
						_la = _input.LA(1);
						if ( !(_la==Equal || _la==NotEqual) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(235);
						arrayExpr(4);
						}
						break;
					case 6:
						{
						_localctx = new LogicalANDArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(236);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(237);
						match(And);
						setState(238);
						arrayExpr(3);
						}
						break;
					case 7:
						{
						_localctx = new LogicalORArrayExprContext(new ArrayExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_arrayExpr);
						setState(239);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(240);
						match(Or);
						setState(241);
						arrayExpr(2);
						}
						break;
					}
					} 
				}
				setState(246);
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
			setState(260);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Id:
				_localctx = new UserDefFnCallContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(247);
				match(Id);
				setState(248);
				match(LeftParen);
				setState(250);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Callout) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(249);
					argsList();
					}
				}

				setState(252);
				match(RightParen);
				}
				break;
			case Callout:
				_localctx = new LibFnCallContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(253);
				match(Callout);
				setState(254);
				match(LeftParen);
				setState(255);
				match(StringLiteral);
				setState(257);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(256);
					calloutArgs();
					}
				}

				setState(259);
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
			setState(262);
			expr(0);
			{
			setState(267);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(263);
				match(Comma);
				setState(264);
				expr(0);
				}
				}
				setState(269);
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
			setState(272); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(270);
				match(Comma);
				setState(271);
				expr(0);
				}
				}
				setState(274); 
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
			setState(302);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				_localctx = new IfStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(276);
				match(If);
				setState(277);
				match(LeftParen);
				setState(278);
				expr(0);
				setState(279);
				match(RightParen);
				setState(280);
				match(LeftBrace);
				setState(282);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(281);
					statementList();
					}
				}

				setState(284);
				match(RightBrace);
				}
				break;
			case 2:
				_localctx = new IfElseStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(286);
				match(If);
				setState(287);
				match(LeftParen);
				setState(288);
				expr(0);
				setState(289);
				match(RightParen);
				setState(290);
				match(LeftBrace);
				setState(292);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(291);
					statementList();
					}
				}

				setState(294);
				match(RightBrace);
				setState(295);
				match(Else);
				setState(296);
				match(LeftBrace);
				setState(298);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(297);
					statementList();
					}
				}

				setState(300);
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
			setState(332);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case While:
				_localctx = new WhileStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(304);
				match(While);
				setState(305);
				match(LeftParen);
				setState(306);
				expr(0);
				setState(307);
				match(RightParen);
				setState(308);
				match(LeftBrace);
				setState(310);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(309);
					statementList();
					}
				}

				setState(312);
				match(RightBrace);
				}
				break;
			case For:
				_localctx = new ForStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(314);
				match(For);
				setState(315);
				match(LeftParen);
				setState(316);
				location();
				setState(317);
				match(Assign);
				setState(318);
				expr(0);
				setState(319);
				match(Semi);
				setState(320);
				expr(0);
				setState(321);
				match(Semi);
				setState(322);
				location();
				setState(323);
				assignOp();
				setState(324);
				expr(0);
				setState(325);
				match(RightParen);
				setState(326);
				match(LeftBrace);
				setState(328);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Bool) | (1L << Break) | (1L << Callout) | (1L << Char) | (1L << Continue) | (1L << For) | (1L << If) | (1L << Int) | (1L << Long) | (1L << Return) | (1L << Uint) | (1L << Ulong) | (1L << While) | (1L << LeftParen) | (1L << Minus) | (1L << Not) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << BoolLiteral) | (1L << IntegerLiteral) | (1L << Id))) != 0)) {
					{
					setState(327);
					statementList();
					}
				}

				setState(330);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3:\u0151\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\3\2\3\2\3\2\3\3\6\3/\n\3\r\3\16\3\60\3"+
		"\4\3\4\5\4\65\n\4\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\5\6@\n\6\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7N\n\7\3\b\3\b\3\b\3\b\3\b"+
		"\3\b\5\bV\n\b\3\t\3\t\3\t\3\t\5\t\\\n\t\3\t\3\t\3\t\5\ta\n\t\3\t\3\t\3"+
		"\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\7\no\n\n\f\n\16\nr\13\n\3\13\6"+
		"\13u\n\13\r\13\16\13v\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f"+
		"\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\f\u008c\n\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r"+
		"\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u009c\n\r\3\16\3\16\3\16\5\16\u00a1\n"+
		"\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\5\17\u00b2\n\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\7\17\u00cf\n\17\f\17\16\17\u00d2\13\17\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\5\20\u00de\n\20\3\20\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\7\20\u00f5\n\20\f\20\16\20\u00f8\13\20\3\21\3\21"+
		"\3\21\5\21\u00fd\n\21\3\21\3\21\3\21\3\21\3\21\5\21\u0104\n\21\3\21\5"+
		"\21\u0107\n\21\3\22\3\22\3\22\7\22\u010c\n\22\f\22\16\22\u010f\13\22\3"+
		"\23\3\23\6\23\u0113\n\23\r\23\16\23\u0114\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\5\24\u011d\n\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\5\24\u0127\n"+
		"\24\3\24\3\24\3\24\3\24\5\24\u012d\n\24\3\24\3\24\5\24\u0131\n\24\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\5\25\u0139\n\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\5\25\u014b\n\25\3\25"+
		"\3\25\5\25\u014f\n\25\3\25\2\4\34\36\26\2\4\6\b\n\f\16\20\22\24\26\30"+
		"\32\34\36 \"$&(\2\6\3\2 \"\3\2\36\37\3\2\32\35\3\2\60\61\2\u017c\2*\3"+
		"\2\2\2\4.\3\2\2\2\6\64\3\2\2\2\b\66\3\2\2\2\n?\3\2\2\2\fM\3\2\2\2\16U"+
		"\3\2\2\2\20W\3\2\2\2\22g\3\2\2\2\24t\3\2\2\2\26\u008b\3\2\2\2\30\u009b"+
		"\3\2\2\2\32\u00a0\3\2\2\2\34\u00b1\3\2\2\2\36\u00dd\3\2\2\2 \u0106\3\2"+
		"\2\2\"\u0108\3\2\2\2$\u0112\3\2\2\2&\u0130\3\2\2\2(\u014e\3\2\2\2*+\5"+
		"\4\3\2+,\7\2\2\3,\3\3\2\2\2-/\5\6\4\2.-\3\2\2\2/\60\3\2\2\2\60.\3\2\2"+
		"\2\60\61\3\2\2\2\61\5\3\2\2\2\62\65\5\b\5\2\63\65\5\20\t\2\64\62\3\2\2"+
		"\2\64\63\3\2\2\2\65\7\3\2\2\2\66\67\5\16\b\2\678\5\n\6\289\7)\2\29\t\3"+
		"\2\2\2:;\5\f\7\2;<\7*\2\2<=\5\n\6\2=@\3\2\2\2>@\5\f\7\2?:\3\2\2\2?>\3"+
		"\2\2\2@\13\3\2\2\2AB\7\66\2\2BC\7\26\2\2CD\7\65\2\2DE\7\27\2\2EF\7\26"+
		"\2\2FG\7\65\2\2GN\7\27\2\2HI\7\66\2\2IJ\7\26\2\2JK\7\65\2\2KN\7\27\2\2"+
		"LN\7\66\2\2MA\3\2\2\2MH\3\2\2\2ML\3\2\2\2N\r\3\2\2\2OV\7\r\2\2PV\7\6\2"+
		"\2QV\7\3\2\2RV\7\16\2\2SV\7\21\2\2TV\7\22\2\2UO\3\2\2\2UP\3\2\2\2UQ\3"+
		"\2\2\2UR\3\2\2\2US\3\2\2\2UT\3\2\2\2V\17\3\2\2\2WX\5\16\b\2XY\7\66\2\2"+
		"Y[\7\24\2\2Z\\\5\22\n\2[Z\3\2\2\2[\\\3\2\2\2\\]\3\2\2\2]^\7\25\2\2^`\7"+
		"\30\2\2_a\5\24\13\2`_\3\2\2\2`a\3\2\2\2ab\3\2\2\2bc\7\17\2\2cd\5\34\17"+
		"\2de\7)\2\2ef\7\31\2\2f\21\3\2\2\2gh\5\16\b\2hi\7\66\2\2ip\3\2\2\2jk\7"+
		"*\2\2kl\5\16\b\2lm\7\66\2\2mo\3\2\2\2nj\3\2\2\2or\3\2\2\2pn\3\2\2\2pq"+
		"\3\2\2\2q\23\3\2\2\2rp\3\2\2\2su\5\26\f\2ts\3\2\2\2uv\3\2\2\2vt\3\2\2"+
		"\2vw\3\2\2\2w\25\3\2\2\2x\u008c\5\b\5\2yz\5\30\r\2z{\5\32\16\2{|\5\34"+
		"\17\2|}\7)\2\2}\u008c\3\2\2\2~\177\5\34\17\2\177\u0080\7)\2\2\u0080\u008c"+
		"\3\2\2\2\u0081\u008c\5&\24\2\u0082\u008c\5(\25\2\u0083\u0084\7\17\2\2"+
		"\u0084\u0085\5\34\17\2\u0085\u0086\7)\2\2\u0086\u008c\3\2\2\2\u0087\u0088"+
		"\7\4\2\2\u0088\u008c\7)\2\2\u0089\u008a\7\7\2\2\u008a\u008c\7)\2\2\u008b"+
		"x\3\2\2\2\u008by\3\2\2\2\u008b~\3\2\2\2\u008b\u0081\3\2\2\2\u008b\u0082"+
		"\3\2\2\2\u008b\u0083\3\2\2\2\u008b\u0087\3\2\2\2\u008b\u0089\3\2\2\2\u008c"+
		"\27\3\2\2\2\u008d\u009c\7\66\2\2\u008e\u008f\7\66\2\2\u008f\u0090\7\26"+
		"\2\2\u0090\u0091\5\36\20\2\u0091\u0092\7\27\2\2\u0092\u009c\3\2\2\2\u0093"+
		"\u0094\7\66\2\2\u0094\u0095\7\26\2\2\u0095\u0096\5\36\20\2\u0096\u0097"+
		"\7\27\2\2\u0097\u0098\7\26\2\2\u0098\u0099\5\36\20\2\u0099\u009a\7\27"+
		"\2\2\u009a\u009c\3\2\2\2\u009b\u008d\3\2\2\2\u009b\u008e\3\2\2\2\u009b"+
		"\u0093\3\2\2\2\u009c\31\3\2\2\2\u009d\u00a1\7-\2\2\u009e\u00a1\7.\2\2"+
		"\u009f\u00a1\7/\2\2\u00a0\u009d\3\2\2\2\u00a0\u009e\3\2\2\2\u00a0\u009f"+
		"\3\2\2\2\u00a1\33\3\2\2\2\u00a2\u00a3\b\17\1\2\u00a3\u00b2\7\64\2\2\u00a4"+
		"\u00b2\7\65\2\2\u00a5\u00b2\7\63\2\2\u00a6\u00b2\7\62\2\2\u00a7\u00a8"+
		"\7\24\2\2\u00a8\u00a9\5\34\17\2\u00a9\u00aa\7\25\2\2\u00aa\u00b2\3\2\2"+
		"\2\u00ab\u00b2\5\30\r\2\u00ac\u00b2\5 \21\2\u00ad\u00ae\7\37\2\2\u00ae"+
		"\u00b2\5\34\17\f\u00af\u00b0\7&\2\2\u00b0\u00b2\5\34\17\13\u00b1\u00a2"+
		"\3\2\2\2\u00b1\u00a4\3\2\2\2\u00b1\u00a5\3\2\2\2\u00b1\u00a6\3\2\2\2\u00b1"+
		"\u00a7\3\2\2\2\u00b1\u00ab\3\2\2\2\u00b1\u00ac\3\2\2\2\u00b1\u00ad\3\2"+
		"\2\2\u00b1\u00af\3\2\2\2\u00b2\u00d0\3\2\2\2\u00b3\u00b4\f\n\2\2\u00b4"+
		"\u00b5\7#\2\2\u00b5\u00cf\5\34\17\n\u00b6\u00b7\f\t\2\2\u00b7\u00b8\t"+
		"\2\2\2\u00b8\u00cf\5\34\17\n\u00b9\u00ba\f\b\2\2\u00ba\u00bb\t\3\2\2\u00bb"+
		"\u00cf\5\34\17\t\u00bc\u00bd\f\7\2\2\u00bd\u00be\t\4\2\2\u00be\u00cf\5"+
		"\34\17\b\u00bf\u00c0\f\6\2\2\u00c0\u00c1\t\5\2\2\u00c1\u00cf\5\34\17\7"+
		"\u00c2\u00c3\f\5\2\2\u00c3\u00c4\7$\2\2\u00c4\u00cf\5\34\17\6\u00c5\u00c6"+
		"\f\4\2\2\u00c6\u00c7\7%\2\2\u00c7\u00cf\5\34\17\5\u00c8\u00c9\f\3\2\2"+
		"\u00c9\u00ca\7\'\2\2\u00ca\u00cb\5\34\17\2\u00cb\u00cc\7(\2\2\u00cc\u00cd"+
		"\5\34\17\4\u00cd\u00cf\3\2\2\2\u00ce\u00b3\3\2\2\2\u00ce\u00b6\3\2\2\2"+
		"\u00ce\u00b9\3\2\2\2\u00ce\u00bc\3\2\2\2\u00ce\u00bf\3\2\2\2\u00ce\u00c2"+
		"\3\2\2\2\u00ce\u00c5\3\2\2\2\u00ce\u00c8\3\2\2\2\u00cf\u00d2\3\2\2\2\u00d0"+
		"\u00ce\3\2\2\2\u00d0\u00d1\3\2\2\2\u00d1\35\3\2\2\2\u00d2\u00d0\3\2\2"+
		"\2\u00d3\u00d4\b\20\1\2\u00d4\u00de\7\65\2\2\u00d5\u00d6\7\24\2\2\u00d6"+
		"\u00d7\5\36\20\2\u00d7\u00d8\7\25\2\2\u00d8\u00de\3\2\2\2\u00d9\u00de"+
		"\5\30\r\2\u00da\u00de\5 \21\2\u00db\u00dc\7&\2\2\u00dc\u00de\5\36\20\n"+
		"\u00dd\u00d3\3\2\2\2\u00dd\u00d5\3\2\2\2\u00dd\u00d9\3\2\2\2\u00dd\u00da"+
		"\3\2\2\2\u00dd\u00db\3\2\2\2\u00de\u00f6\3\2\2\2\u00df\u00e0\f\t\2\2\u00e0"+
		"\u00e1\7#\2\2\u00e1\u00f5\5\36\20\t\u00e2\u00e3\f\b\2\2\u00e3\u00e4\t"+
		"\2\2\2\u00e4\u00f5\5\36\20\t\u00e5\u00e6\f\7\2\2\u00e6\u00e7\t\3\2\2\u00e7"+
		"\u00f5\5\36\20\b\u00e8\u00e9\f\6\2\2\u00e9\u00ea\t\4\2\2\u00ea\u00f5\5"+
		"\36\20\7\u00eb\u00ec\f\5\2\2\u00ec\u00ed\t\5\2\2\u00ed\u00f5\5\36\20\6"+
		"\u00ee\u00ef\f\4\2\2\u00ef\u00f0\7$\2\2\u00f0\u00f5\5\36\20\5\u00f1\u00f2"+
		"\f\3\2\2\u00f2\u00f3\7%\2\2\u00f3\u00f5\5\36\20\4\u00f4\u00df\3\2\2\2"+
		"\u00f4\u00e2\3\2\2\2\u00f4\u00e5\3\2\2\2\u00f4\u00e8\3\2\2\2\u00f4\u00eb"+
		"\3\2\2\2\u00f4\u00ee\3\2\2\2\u00f4\u00f1\3\2\2\2\u00f5\u00f8\3\2\2\2\u00f6"+
		"\u00f4\3\2\2\2\u00f6\u00f7\3\2\2\2\u00f7\37\3\2\2\2\u00f8\u00f6\3\2\2"+
		"\2\u00f9\u00fa\7\66\2\2\u00fa\u00fc\7\24\2\2\u00fb\u00fd\5\"\22\2\u00fc"+
		"\u00fb\3\2\2\2\u00fc\u00fd\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe\u0107\7\25"+
		"\2\2\u00ff\u0100\7\5\2\2\u0100\u0101\7\24\2\2\u0101\u0103\7\63\2\2\u0102"+
		"\u0104\5$\23\2\u0103\u0102\3\2\2\2\u0103\u0104\3\2\2\2\u0104\u0105\3\2"+
		"\2\2\u0105\u0107\7\25\2\2\u0106\u00f9\3\2\2\2\u0106\u00ff\3\2\2\2\u0107"+
		"!\3\2\2\2\u0108\u010d\5\34\17\2\u0109\u010a\7*\2\2\u010a\u010c\5\34\17"+
		"\2\u010b\u0109\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2\2\2\u010d\u010e"+
		"\3\2\2\2\u010e#\3\2\2\2\u010f\u010d\3\2\2\2\u0110\u0111\7*\2\2\u0111\u0113"+
		"\5\34\17\2\u0112\u0110\3\2\2\2\u0113\u0114\3\2\2\2\u0114\u0112\3\2\2\2"+
		"\u0114\u0115\3\2\2\2\u0115%\3\2\2\2\u0116\u0117\7\f\2\2\u0117\u0118\7"+
		"\24\2\2\u0118\u0119\5\34\17\2\u0119\u011a\7\25\2\2\u011a\u011c\7\30\2"+
		"\2\u011b\u011d\5\24\13\2\u011c\u011b\3\2\2\2\u011c\u011d\3\2\2\2\u011d"+
		"\u011e\3\2\2\2\u011e\u011f\7\31\2\2\u011f\u0131\3\2\2\2\u0120\u0121\7"+
		"\f\2\2\u0121\u0122\7\24\2\2\u0122\u0123\5\34\17\2\u0123\u0124\7\25\2\2"+
		"\u0124\u0126\7\30\2\2\u0125\u0127\5\24\13\2\u0126\u0125\3\2\2\2\u0126"+
		"\u0127\3\2\2\2\u0127\u0128\3\2\2\2\u0128\u0129\7\31\2\2\u0129\u012a\7"+
		"\b\2\2\u012a\u012c\7\30\2\2\u012b\u012d\5\24\13\2\u012c\u012b\3\2\2\2"+
		"\u012c\u012d\3\2\2\2\u012d\u012e\3\2\2\2\u012e\u012f\7\31\2\2\u012f\u0131"+
		"\3\2\2\2\u0130\u0116\3\2\2\2\u0130\u0120\3\2\2\2\u0131\'\3\2\2\2\u0132"+
		"\u0133\7\23\2\2\u0133\u0134\7\24\2\2\u0134\u0135\5\34\17\2\u0135\u0136"+
		"\7\25\2\2\u0136\u0138\7\30\2\2\u0137\u0139\5\24\13\2\u0138\u0137\3\2\2"+
		"\2\u0138\u0139\3\2\2\2\u0139\u013a\3\2\2\2\u013a\u013b\7\31\2\2\u013b"+
		"\u014f\3\2\2\2\u013c\u013d\7\13\2\2\u013d\u013e\7\24\2\2\u013e\u013f\5"+
		"\30\r\2\u013f\u0140\7-\2\2\u0140\u0141\5\34\17\2\u0141\u0142\7)\2\2\u0142"+
		"\u0143\5\34\17\2\u0143\u0144\7)\2\2\u0144\u0145\5\30\r\2\u0145\u0146\5"+
		"\32\16\2\u0146\u0147\5\34\17\2\u0147\u0148\7\25\2\2\u0148\u014a\7\30\2"+
		"\2\u0149\u014b\5\24\13\2\u014a\u0149\3\2\2\2\u014a\u014b\3\2\2\2\u014b"+
		"\u014c\3\2\2\2\u014c\u014d\7\31\2\2\u014d\u014f\3\2\2\2\u014e\u0132\3"+
		"\2\2\2\u014e\u013c\3\2\2\2\u014f)\3\2\2\2 \60\64?MU[`pv\u008b\u009b\u00a0"+
		"\u00b1\u00ce\u00d0\u00dd\u00f4\u00f6\u00fc\u0103\u0106\u010d\u0114\u011c"+
		"\u0126\u012c\u0130\u0138\u014a\u014e";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}