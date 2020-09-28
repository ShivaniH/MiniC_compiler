// Generated from miniCgrammar.g4 by ANTLR 4.8
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class miniCgrammarLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

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
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"Bool", "Break", "Callout", "Char", "Continue", "Else", "False", "Float", 
			"For", "If", "Int", "Long", "Return", "True", "Uint", "Ulong", "While", 
			"LeftParen", "RightParen", "LeftBracket", "RightBracket", "LeftBrace", 
			"RightBrace", "Less", "LessEqual", "Greater", "GreaterEqual", "Plus", 
			"Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Not", "Question", 
			"Colon", "Semi", "Comma", "SingleQuote", "DoubleQuote", "Assign", "PlusAssign", 
			"MinusAssign", "Equal", "NotEqual", "CharLiteral", "StringLiteral", "BoolLiteral", 
			"IntegerLiteral", "Id", "Newline", "Whitespace", "Comment", "BlockComment"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'bool'", "'break'", "'callout'", "'char'", "'continue'", "'else'", 
			"'false'", "'float'", "'for'", "'if'", "'int'", "'long'", "'return'", 
			"'true'", "'uint'", "'ulong'", "'while'", "'('", "')'", "'['", "']'", 
			"'{'", "'}'", "'<'", "'<='", "'>'", "'>='", "'+'", "'-'", "'*'", "'/'", 
			"'%'", "'^'", "'&&'", "'||'", "'!'", "'?'", "':'", "';'", "','", "'''", 
			"'\"'", "'='", "'+='", "'-='", "'=='", "'!='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "Bool", "Break", "Callout", "Char", "Continue", "Else", "False", 
			"Float", "For", "If", "Int", "Long", "Return", "True", "Uint", "Ulong", 
			"While", "LeftParen", "RightParen", "LeftBracket", "RightBracket", "LeftBrace", 
			"RightBrace", "Less", "LessEqual", "Greater", "GreaterEqual", "Plus", 
			"Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Not", "Question", 
			"Colon", "Semi", "Comma", "SingleQuote", "DoubleQuote", "Assign", "PlusAssign", 
			"MinusAssign", "Equal", "NotEqual", "CharLiteral", "StringLiteral", "BoolLiteral", 
			"IntegerLiteral", "Id", "Newline", "Whitespace", "Comment", "BlockComment"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
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


	public miniCgrammarLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "miniCgrammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2:\u0164\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\3\2\3\2\3\2\3\2\3\2\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3"+
		"\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3"+
		"\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21"+
		"\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3\25"+
		"\3\26\3\26\3\27\3\27\3\30\3\30\3\31\3\31\3\32\3\32\3\32\3\33\3\33\3\34"+
		"\3\34\3\34\3\35\3\35\3\36\3\36\3\37\3\37\3 \3 \3!\3!\3\"\3\"\3#\3#\3#"+
		"\3$\3$\3$\3%\3%\3&\3&\3\'\3\'\3(\3(\3)\3)\3*\3*\3+\3+\3,\3,\3-\3-\3-\3"+
		".\3.\3.\3/\3/\3/\3\60\3\60\3\60\3\61\3\61\3\61\3\61\5\61\u011b\n\61\3"+
		"\61\3\61\3\62\3\62\3\62\3\62\5\62\u0123\n\62\7\62\u0125\n\62\f\62\16\62"+
		"\u0128\13\62\3\62\3\62\3\63\3\63\5\63\u012e\n\63\3\64\6\64\u0131\n\64"+
		"\r\64\16\64\u0132\3\65\3\65\7\65\u0137\n\65\f\65\16\65\u013a\13\65\3\66"+
		"\3\66\5\66\u013e\n\66\3\66\5\66\u0141\n\66\3\66\3\66\3\67\6\67\u0146\n"+
		"\67\r\67\16\67\u0147\3\67\3\67\38\38\38\38\78\u0150\n8\f8\168\u0153\13"+
		"8\38\38\39\39\39\39\79\u015b\n9\f9\169\u015e\139\39\39\39\39\39\3\u015c"+
		"\2:\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35"+
		"\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36"+
		";\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\64g\65i\66k\67"+
		"m8o9q:\3\2\13\7\2\f\f\17\17$$))^^\t\2$$))\62\62^^ppttvv\6\2\f\f\17\17"+
		"$$))\b\2$$))^^ppttvv\3\2\62;\5\2C\\aac|\6\2\62;C\\aac|\4\2\13\13\"\"\4"+
		"\2\f\f\17\17\2\u016e\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2"+
		"\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3"+
		"\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2"+
		"\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2"+
		"\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2"+
		"\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2"+
		"\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q"+
		"\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2"+
		"\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2i\3\2\2\2"+
		"\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\3s\3\2\2\2\5x\3\2\2\2\7~"+
		"\3\2\2\2\t\u0086\3\2\2\2\13\u008b\3\2\2\2\r\u0094\3\2\2\2\17\u0099\3\2"+
		"\2\2\21\u009f\3\2\2\2\23\u00a5\3\2\2\2\25\u00a9\3\2\2\2\27\u00ac\3\2\2"+
		"\2\31\u00b0\3\2\2\2\33\u00b5\3\2\2\2\35\u00bc\3\2\2\2\37\u00c1\3\2\2\2"+
		"!\u00c6\3\2\2\2#\u00cc\3\2\2\2%\u00d2\3\2\2\2\'\u00d4\3\2\2\2)\u00d6\3"+
		"\2\2\2+\u00d8\3\2\2\2-\u00da\3\2\2\2/\u00dc\3\2\2\2\61\u00de\3\2\2\2\63"+
		"\u00e0\3\2\2\2\65\u00e3\3\2\2\2\67\u00e5\3\2\2\29\u00e8\3\2\2\2;\u00ea"+
		"\3\2\2\2=\u00ec\3\2\2\2?\u00ee\3\2\2\2A\u00f0\3\2\2\2C\u00f2\3\2\2\2E"+
		"\u00f4\3\2\2\2G\u00f7\3\2\2\2I\u00fa\3\2\2\2K\u00fc\3\2\2\2M\u00fe\3\2"+
		"\2\2O\u0100\3\2\2\2Q\u0102\3\2\2\2S\u0104\3\2\2\2U\u0106\3\2\2\2W\u0108"+
		"\3\2\2\2Y\u010a\3\2\2\2[\u010d\3\2\2\2]\u0110\3\2\2\2_\u0113\3\2\2\2a"+
		"\u0116\3\2\2\2c\u011e\3\2\2\2e\u012d\3\2\2\2g\u0130\3\2\2\2i\u0134\3\2"+
		"\2\2k\u0140\3\2\2\2m\u0145\3\2\2\2o\u014b\3\2\2\2q\u0156\3\2\2\2st\7d"+
		"\2\2tu\7q\2\2uv\7q\2\2vw\7n\2\2w\4\3\2\2\2xy\7d\2\2yz\7t\2\2z{\7g\2\2"+
		"{|\7c\2\2|}\7m\2\2}\6\3\2\2\2~\177\7e\2\2\177\u0080\7c\2\2\u0080\u0081"+
		"\7n\2\2\u0081\u0082\7n\2\2\u0082\u0083\7q\2\2\u0083\u0084\7w\2\2\u0084"+
		"\u0085\7v\2\2\u0085\b\3\2\2\2\u0086\u0087\7e\2\2\u0087\u0088\7j\2\2\u0088"+
		"\u0089\7c\2\2\u0089\u008a\7t\2\2\u008a\n\3\2\2\2\u008b\u008c\7e\2\2\u008c"+
		"\u008d\7q\2\2\u008d\u008e\7p\2\2\u008e\u008f\7v\2\2\u008f\u0090\7k\2\2"+
		"\u0090\u0091\7p\2\2\u0091\u0092\7w\2\2\u0092\u0093\7g\2\2\u0093\f\3\2"+
		"\2\2\u0094\u0095\7g\2\2\u0095\u0096\7n\2\2\u0096\u0097\7u\2\2\u0097\u0098"+
		"\7g\2\2\u0098\16\3\2\2\2\u0099\u009a\7h\2\2\u009a\u009b\7c\2\2\u009b\u009c"+
		"\7n\2\2\u009c\u009d\7u\2\2\u009d\u009e\7g\2\2\u009e\20\3\2\2\2\u009f\u00a0"+
		"\7h\2\2\u00a0\u00a1\7n\2\2\u00a1\u00a2\7q\2\2\u00a2\u00a3\7c\2\2\u00a3"+
		"\u00a4\7v\2\2\u00a4\22\3\2\2\2\u00a5\u00a6\7h\2\2\u00a6\u00a7\7q\2\2\u00a7"+
		"\u00a8\7t\2\2\u00a8\24\3\2\2\2\u00a9\u00aa\7k\2\2\u00aa\u00ab\7h\2\2\u00ab"+
		"\26\3\2\2\2\u00ac\u00ad\7k\2\2\u00ad\u00ae\7p\2\2\u00ae\u00af\7v\2\2\u00af"+
		"\30\3\2\2\2\u00b0\u00b1\7n\2\2\u00b1\u00b2\7q\2\2\u00b2\u00b3\7p\2\2\u00b3"+
		"\u00b4\7i\2\2\u00b4\32\3\2\2\2\u00b5\u00b6\7t\2\2\u00b6\u00b7\7g\2\2\u00b7"+
		"\u00b8\7v\2\2\u00b8\u00b9\7w\2\2\u00b9\u00ba\7t\2\2\u00ba\u00bb\7p\2\2"+
		"\u00bb\34\3\2\2\2\u00bc\u00bd\7v\2\2\u00bd\u00be\7t\2\2\u00be\u00bf\7"+
		"w\2\2\u00bf\u00c0\7g\2\2\u00c0\36\3\2\2\2\u00c1\u00c2\7w\2\2\u00c2\u00c3"+
		"\7k\2\2\u00c3\u00c4\7p\2\2\u00c4\u00c5\7v\2\2\u00c5 \3\2\2\2\u00c6\u00c7"+
		"\7w\2\2\u00c7\u00c8\7n\2\2\u00c8\u00c9\7q\2\2\u00c9\u00ca\7p\2\2\u00ca"+
		"\u00cb\7i\2\2\u00cb\"\3\2\2\2\u00cc\u00cd\7y\2\2\u00cd\u00ce\7j\2\2\u00ce"+
		"\u00cf\7k\2\2\u00cf\u00d0\7n\2\2\u00d0\u00d1\7g\2\2\u00d1$\3\2\2\2\u00d2"+
		"\u00d3\7*\2\2\u00d3&\3\2\2\2\u00d4\u00d5\7+\2\2\u00d5(\3\2\2\2\u00d6\u00d7"+
		"\7]\2\2\u00d7*\3\2\2\2\u00d8\u00d9\7_\2\2\u00d9,\3\2\2\2\u00da\u00db\7"+
		"}\2\2\u00db.\3\2\2\2\u00dc\u00dd\7\177\2\2\u00dd\60\3\2\2\2\u00de\u00df"+
		"\7>\2\2\u00df\62\3\2\2\2\u00e0\u00e1\7>\2\2\u00e1\u00e2\7?\2\2\u00e2\64"+
		"\3\2\2\2\u00e3\u00e4\7@\2\2\u00e4\66\3\2\2\2\u00e5\u00e6\7@\2\2\u00e6"+
		"\u00e7\7?\2\2\u00e78\3\2\2\2\u00e8\u00e9\7-\2\2\u00e9:\3\2\2\2\u00ea\u00eb"+
		"\7/\2\2\u00eb<\3\2\2\2\u00ec\u00ed\7,\2\2\u00ed>\3\2\2\2\u00ee\u00ef\7"+
		"\61\2\2\u00ef@\3\2\2\2\u00f0\u00f1\7\'\2\2\u00f1B\3\2\2\2\u00f2\u00f3"+
		"\7`\2\2\u00f3D\3\2\2\2\u00f4\u00f5\7(\2\2\u00f5\u00f6\7(\2\2\u00f6F\3"+
		"\2\2\2\u00f7\u00f8\7~\2\2\u00f8\u00f9\7~\2\2\u00f9H\3\2\2\2\u00fa\u00fb"+
		"\7#\2\2\u00fbJ\3\2\2\2\u00fc\u00fd\7A\2\2\u00fdL\3\2\2\2\u00fe\u00ff\7"+
		"<\2\2\u00ffN\3\2\2\2\u0100\u0101\7=\2\2\u0101P\3\2\2\2\u0102\u0103\7."+
		"\2\2\u0103R\3\2\2\2\u0104\u0105\7)\2\2\u0105T\3\2\2\2\u0106\u0107\7$\2"+
		"\2\u0107V\3\2\2\2\u0108\u0109\7?\2\2\u0109X\3\2\2\2\u010a\u010b\7-\2\2"+
		"\u010b\u010c\7?\2\2\u010cZ\3\2\2\2\u010d\u010e\7/\2\2\u010e\u010f\7?\2"+
		"\2\u010f\\\3\2\2\2\u0110\u0111\7?\2\2\u0111\u0112\7?\2\2\u0112^\3\2\2"+
		"\2\u0113\u0114\7#\2\2\u0114\u0115\7?\2\2\u0115`\3\2\2\2\u0116\u011a\7"+
		")\2\2\u0117\u011b\n\2\2\2\u0118\u0119\7^\2\2\u0119\u011b\t\3\2\2\u011a"+
		"\u0117\3\2\2\2\u011a\u0118\3\2\2\2\u011b\u011c\3\2\2\2\u011c\u011d\7)"+
		"\2\2\u011db\3\2\2\2\u011e\u0126\7$\2\2\u011f\u0122\n\4\2\2\u0120\u0121"+
		"\7^\2\2\u0121\u0123\t\5\2\2\u0122\u0120\3\2\2\2\u0122\u0123\3\2\2\2\u0123"+
		"\u0125\3\2\2\2\u0124\u011f\3\2\2\2\u0125\u0128\3\2\2\2\u0126\u0124\3\2"+
		"\2\2\u0126\u0127\3\2\2\2\u0127\u0129\3\2\2\2\u0128\u0126\3\2\2\2\u0129"+
		"\u012a\7$\2\2\u012ad\3\2\2\2\u012b\u012e\5\35\17\2\u012c\u012e\5\17\b"+
		"\2\u012d\u012b\3\2\2\2\u012d\u012c\3\2\2\2\u012ef\3\2\2\2\u012f\u0131"+
		"\t\6\2\2\u0130\u012f\3\2\2\2\u0131\u0132\3\2\2\2\u0132\u0130\3\2\2\2\u0132"+
		"\u0133\3\2\2\2\u0133h\3\2\2\2\u0134\u0138\t\7\2\2\u0135\u0137\t\b\2\2"+
		"\u0136\u0135\3\2\2\2\u0137\u013a\3\2\2\2\u0138\u0136\3\2\2\2\u0138\u0139"+
		"\3\2\2\2\u0139j\3\2\2\2\u013a\u0138\3\2\2\2\u013b\u013d\7\17\2\2\u013c"+
		"\u013e\7\f\2\2\u013d\u013c\3\2\2\2\u013d\u013e\3\2\2\2\u013e\u0141\3\2"+
		"\2\2\u013f\u0141\7\f\2\2\u0140\u013b\3\2\2\2\u0140\u013f\3\2\2\2\u0141"+
		"\u0142\3\2\2\2\u0142\u0143\b\66\2\2\u0143l\3\2\2\2\u0144\u0146\t\t\2\2"+
		"\u0145\u0144\3\2\2\2\u0146\u0147\3\2\2\2\u0147\u0145\3\2\2\2\u0147\u0148"+
		"\3\2\2\2\u0148\u0149\3\2\2\2\u0149\u014a\b\67\2\2\u014an\3\2\2\2\u014b"+
		"\u014c\7\61\2\2\u014c\u014d\7\61\2\2\u014d\u0151\3\2\2\2\u014e\u0150\n"+
		"\n\2\2\u014f\u014e\3\2\2\2\u0150\u0153\3\2\2\2\u0151\u014f\3\2\2\2\u0151"+
		"\u0152\3\2\2\2\u0152\u0154\3\2\2\2\u0153\u0151\3\2\2\2\u0154\u0155\b8"+
		"\2\2\u0155p\3\2\2\2\u0156\u0157\7\61\2\2\u0157\u0158\7,\2\2\u0158\u015c"+
		"\3\2\2\2\u0159\u015b\13\2\2\2\u015a\u0159\3\2\2\2\u015b\u015e\3\2\2\2"+
		"\u015c\u015d\3\2\2\2\u015c\u015a\3\2\2\2\u015d\u015f\3\2\2\2\u015e\u015c"+
		"\3\2\2\2\u015f\u0160\7,\2\2\u0160\u0161\7\61\2\2\u0161\u0162\3\2\2\2\u0162"+
		"\u0163\b9\2\2\u0163r\3\2\2\2\16\2\u011a\u0122\u0126\u012d\u0132\u0138"+
		"\u013d\u0140\u0147\u0151\u015c\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}