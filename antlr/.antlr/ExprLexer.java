// Generated from /home/shivanih/Desktop/IIITHsem3/Compilers/MajorProject/minic-grammar-ShivaniH/antlr/Expr.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ExprLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, ID=22, INT=23, FLOAT=24, COMMENT=25, 
		NS=26;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
		"T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
		"T__17", "T__18", "T__19", "T__20", "ID", "INT", "FLOAT", "COMMENT", "NS"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "';'", "'='", "'+='", "'-='", "'('", "')'", "'-'", "'!'", "'*'", 
		"'/'", "'%'", "'+'", "'<'", "'>'", "'<='", "'>='", "'=='", "'!='", "'&&'", 
		"'||'", "','"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, "ID", "INT", 
		"FLOAT", "COMMENT", "NS"
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


	public ExprLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Expr.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\34\u0098\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\3\2\3\2\3\3\3\3\3\4\3\4\3\4\3\5\3\5\3\5\3\6"+
		"\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3"+
		"\16\3\17\3\17\3\20\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\22\3\23\3\23\3"+
		"\23\3\24\3\24\3\24\3\25\3\25\3\25\3\26\3\26\3\27\3\27\7\27l\n\27\f\27"+
		"\16\27o\13\27\3\30\5\30r\n\30\3\30\6\30u\n\30\r\30\16\30v\3\31\5\31z\n"+
		"\31\3\31\6\31}\n\31\r\31\16\31~\3\31\3\31\6\31\u0083\n\31\r\31\16\31\u0084"+
		"\3\32\3\32\3\32\3\32\7\32\u008b\n\32\f\32\16\32\u008e\13\32\3\32\3\32"+
		"\3\33\6\33\u0093\n\33\r\33\16\33\u0094\3\33\3\33\2\2\34\3\3\5\4\7\5\t"+
		"\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23"+
		"%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\3\2\b\5\2C\\aac|\6\2\62;C"+
		"\\aac|\4\2--//\3\2\62;\4\2\f\f\17\17\4\2\13\f\"\"\2\u009f\2\3\3\2\2\2"+
		"\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2"+
		"\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2"+
		"\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2"+
		"\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2"+
		"\2\2\63\3\2\2\2\2\65\3\2\2\2\3\67\3\2\2\2\59\3\2\2\2\7;\3\2\2\2\t>\3\2"+
		"\2\2\13A\3\2\2\2\rC\3\2\2\2\17E\3\2\2\2\21G\3\2\2\2\23I\3\2\2\2\25K\3"+
		"\2\2\2\27M\3\2\2\2\31O\3\2\2\2\33Q\3\2\2\2\35S\3\2\2\2\37U\3\2\2\2!X\3"+
		"\2\2\2#[\3\2\2\2%^\3\2\2\2\'a\3\2\2\2)d\3\2\2\2+g\3\2\2\2-i\3\2\2\2/q"+
		"\3\2\2\2\61y\3\2\2\2\63\u0086\3\2\2\2\65\u0092\3\2\2\2\678\7=\2\28\4\3"+
		"\2\2\29:\7?\2\2:\6\3\2\2\2;<\7-\2\2<=\7?\2\2=\b\3\2\2\2>?\7/\2\2?@\7?"+
		"\2\2@\n\3\2\2\2AB\7*\2\2B\f\3\2\2\2CD\7+\2\2D\16\3\2\2\2EF\7/\2\2F\20"+
		"\3\2\2\2GH\7#\2\2H\22\3\2\2\2IJ\7,\2\2J\24\3\2\2\2KL\7\61\2\2L\26\3\2"+
		"\2\2MN\7\'\2\2N\30\3\2\2\2OP\7-\2\2P\32\3\2\2\2QR\7>\2\2R\34\3\2\2\2S"+
		"T\7@\2\2T\36\3\2\2\2UV\7>\2\2VW\7?\2\2W \3\2\2\2XY\7@\2\2YZ\7?\2\2Z\""+
		"\3\2\2\2[\\\7?\2\2\\]\7?\2\2]$\3\2\2\2^_\7#\2\2_`\7?\2\2`&\3\2\2\2ab\7"+
		"(\2\2bc\7(\2\2c(\3\2\2\2de\7~\2\2ef\7~\2\2f*\3\2\2\2gh\7.\2\2h,\3\2\2"+
		"\2im\t\2\2\2jl\t\3\2\2kj\3\2\2\2lo\3\2\2\2mk\3\2\2\2mn\3\2\2\2n.\3\2\2"+
		"\2om\3\2\2\2pr\t\4\2\2qp\3\2\2\2qr\3\2\2\2rt\3\2\2\2su\t\5\2\2ts\3\2\2"+
		"\2uv\3\2\2\2vt\3\2\2\2vw\3\2\2\2w\60\3\2\2\2xz\t\4\2\2yx\3\2\2\2yz\3\2"+
		"\2\2z|\3\2\2\2{}\t\5\2\2|{\3\2\2\2}~\3\2\2\2~|\3\2\2\2~\177\3\2\2\2\177"+
		"\u0080\3\2\2\2\u0080\u0082\13\2\2\2\u0081\u0083\t\5\2\2\u0082\u0081\3"+
		"\2\2\2\u0083\u0084\3\2\2\2\u0084\u0082\3\2\2\2\u0084\u0085\3\2\2\2\u0085"+
		"\62\3\2\2\2\u0086\u0087\7\61\2\2\u0087\u0088\7\61\2\2\u0088\u008c\3\2"+
		"\2\2\u0089\u008b\n\6\2\2\u008a\u0089\3\2\2\2\u008b\u008e\3\2\2\2\u008c"+
		"\u008a\3\2\2\2\u008c\u008d\3\2\2\2\u008d\u008f\3\2\2\2\u008e\u008c\3\2"+
		"\2\2\u008f\u0090\b\32\2\2\u0090\64\3\2\2\2\u0091\u0093\t\7\2\2\u0092\u0091"+
		"\3\2\2\2\u0093\u0094\3\2\2\2\u0094\u0092\3\2\2\2\u0094\u0095\3\2\2\2\u0095"+
		"\u0096\3\2\2\2\u0096\u0097\b\33\2\2\u0097\66\3\2\2\2\13\2mqvy~\u0084\u008c"+
		"\u0094\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}