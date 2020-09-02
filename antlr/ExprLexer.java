// Generated from Expr.g4 by ANTLR 4.8
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
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, ID=13, INT=14, FLOAT=15, COMMENT=16, NS=17;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "ID", "INT", "FLOAT", "COMMENT", "NS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "';'", "'-'", "'*'", "'/'", "'%'", "'+'", "'<'", "'>'", "'<='", 
			"'>='", "'=='", "'!='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "ID", "INT", "FLOAT", "COMMENT", "NS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\23p\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3"+
		"\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3\r\3\16\3\16\7\16D\n\16\f\16"+
		"\16\16G\13\16\3\17\5\17J\n\17\3\17\6\17M\n\17\r\17\16\17N\3\20\5\20R\n"+
		"\20\3\20\6\20U\n\20\r\20\16\20V\3\20\3\20\6\20[\n\20\r\20\16\20\\\3\21"+
		"\3\21\3\21\3\21\7\21c\n\21\f\21\16\21f\13\21\3\21\3\21\3\22\6\22k\n\22"+
		"\r\22\16\22l\3\22\3\22\2\2\23\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13"+
		"\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23\3\2\b\5\2C\\aac|\6\2\62;C\\"+
		"aac|\4\2--//\3\2\62;\4\2\f\f\17\17\4\2\13\f\"\"\2w\2\3\3\2\2\2\2\5\3\2"+
		"\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21"+
		"\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2"+
		"\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\3%\3\2\2\2\5\'\3"+
		"\2\2\2\7)\3\2\2\2\t+\3\2\2\2\13-\3\2\2\2\r/\3\2\2\2\17\61\3\2\2\2\21\63"+
		"\3\2\2\2\23\65\3\2\2\2\258\3\2\2\2\27;\3\2\2\2\31>\3\2\2\2\33A\3\2\2\2"+
		"\35I\3\2\2\2\37Q\3\2\2\2!^\3\2\2\2#j\3\2\2\2%&\7=\2\2&\4\3\2\2\2\'(\7"+
		"/\2\2(\6\3\2\2\2)*\7,\2\2*\b\3\2\2\2+,\7\61\2\2,\n\3\2\2\2-.\7\'\2\2."+
		"\f\3\2\2\2/\60\7-\2\2\60\16\3\2\2\2\61\62\7>\2\2\62\20\3\2\2\2\63\64\7"+
		"@\2\2\64\22\3\2\2\2\65\66\7>\2\2\66\67\7?\2\2\67\24\3\2\2\289\7@\2\29"+
		":\7?\2\2:\26\3\2\2\2;<\7?\2\2<=\7?\2\2=\30\3\2\2\2>?\7#\2\2?@\7?\2\2@"+
		"\32\3\2\2\2AE\t\2\2\2BD\t\3\2\2CB\3\2\2\2DG\3\2\2\2EC\3\2\2\2EF\3\2\2"+
		"\2F\34\3\2\2\2GE\3\2\2\2HJ\t\4\2\2IH\3\2\2\2IJ\3\2\2\2JL\3\2\2\2KM\t\5"+
		"\2\2LK\3\2\2\2MN\3\2\2\2NL\3\2\2\2NO\3\2\2\2O\36\3\2\2\2PR\t\4\2\2QP\3"+
		"\2\2\2QR\3\2\2\2RT\3\2\2\2SU\t\5\2\2TS\3\2\2\2UV\3\2\2\2VT\3\2\2\2VW\3"+
		"\2\2\2WX\3\2\2\2XZ\13\2\2\2Y[\t\5\2\2ZY\3\2\2\2[\\\3\2\2\2\\Z\3\2\2\2"+
		"\\]\3\2\2\2] \3\2\2\2^_\7\61\2\2_`\7\61\2\2`d\3\2\2\2ac\n\6\2\2ba\3\2"+
		"\2\2cf\3\2\2\2db\3\2\2\2de\3\2\2\2eg\3\2\2\2fd\3\2\2\2gh\b\21\2\2h\"\3"+
		"\2\2\2ik\t\7\2\2ji\3\2\2\2kl\3\2\2\2lj\3\2\2\2lm\3\2\2\2mn\3\2\2\2no\b"+
		"\22\2\2o$\3\2\2\2\13\2EINQV\\dl\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}