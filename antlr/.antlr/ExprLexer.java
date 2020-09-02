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
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, ID=16, INT=17, 
		FLOAT=18, COMMENT=19, NS=20;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
		"T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "ID", "INT", "FLOAT", 
		"COMMENT", "NS"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "';'", "'-'", "'!'", "'*'", "'/'", "'%'", "'+'", "'<'", "'>'", "'<='", 
		"'>='", "'=='", "'!='", "'&&'", "'||'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, "ID", "INT", "FLOAT", "COMMENT", "NS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\26~\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6"+
		"\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3"+
		"\r\3\16\3\16\3\16\3\17\3\17\3\17\3\20\3\20\3\20\3\21\3\21\7\21R\n\21\f"+
		"\21\16\21U\13\21\3\22\5\22X\n\22\3\22\6\22[\n\22\r\22\16\22\\\3\23\5\23"+
		"`\n\23\3\23\6\23c\n\23\r\23\16\23d\3\23\3\23\6\23i\n\23\r\23\16\23j\3"+
		"\24\3\24\3\24\3\24\7\24q\n\24\f\24\16\24t\13\24\3\24\3\24\3\25\6\25y\n"+
		"\25\r\25\16\25z\3\25\3\25\2\2\26\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23"+
		"\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26\3\2\b\5\2C"+
		"\\aac|\6\2\62;C\\aac|\4\2--//\3\2\62;\4\2\f\f\17\17\4\2\13\f\"\"\2\u0085"+
		"\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2"+
		"\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2"+
		"\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2"+
		"\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\3+\3\2\2\2\5-\3\2\2\2\7/\3\2\2"+
		"\2\t\61\3\2\2\2\13\63\3\2\2\2\r\65\3\2\2\2\17\67\3\2\2\2\219\3\2\2\2\23"+
		";\3\2\2\2\25=\3\2\2\2\27@\3\2\2\2\31C\3\2\2\2\33F\3\2\2\2\35I\3\2\2\2"+
		"\37L\3\2\2\2!O\3\2\2\2#W\3\2\2\2%_\3\2\2\2\'l\3\2\2\2)x\3\2\2\2+,\7=\2"+
		"\2,\4\3\2\2\2-.\7/\2\2.\6\3\2\2\2/\60\7#\2\2\60\b\3\2\2\2\61\62\7,\2\2"+
		"\62\n\3\2\2\2\63\64\7\61\2\2\64\f\3\2\2\2\65\66\7\'\2\2\66\16\3\2\2\2"+
		"\678\7-\2\28\20\3\2\2\29:\7>\2\2:\22\3\2\2\2;<\7@\2\2<\24\3\2\2\2=>\7"+
		">\2\2>?\7?\2\2?\26\3\2\2\2@A\7@\2\2AB\7?\2\2B\30\3\2\2\2CD\7?\2\2DE\7"+
		"?\2\2E\32\3\2\2\2FG\7#\2\2GH\7?\2\2H\34\3\2\2\2IJ\7(\2\2JK\7(\2\2K\36"+
		"\3\2\2\2LM\7~\2\2MN\7~\2\2N \3\2\2\2OS\t\2\2\2PR\t\3\2\2QP\3\2\2\2RU\3"+
		"\2\2\2SQ\3\2\2\2ST\3\2\2\2T\"\3\2\2\2US\3\2\2\2VX\t\4\2\2WV\3\2\2\2WX"+
		"\3\2\2\2XZ\3\2\2\2Y[\t\5\2\2ZY\3\2\2\2[\\\3\2\2\2\\Z\3\2\2\2\\]\3\2\2"+
		"\2]$\3\2\2\2^`\t\4\2\2_^\3\2\2\2_`\3\2\2\2`b\3\2\2\2ac\t\5\2\2ba\3\2\2"+
		"\2cd\3\2\2\2db\3\2\2\2de\3\2\2\2ef\3\2\2\2fh\13\2\2\2gi\t\5\2\2hg\3\2"+
		"\2\2ij\3\2\2\2jh\3\2\2\2jk\3\2\2\2k&\3\2\2\2lm\7\61\2\2mn\7\61\2\2nr\3"+
		"\2\2\2oq\n\6\2\2po\3\2\2\2qt\3\2\2\2rp\3\2\2\2rs\3\2\2\2su\3\2\2\2tr\3"+
		"\2\2\2uv\b\24\2\2v(\3\2\2\2wy\t\7\2\2xw\3\2\2\2yz\3\2\2\2zx\3\2\2\2z{"+
		"\3\2\2\2{|\3\2\2\2|}\b\25\2\2}*\3\2\2\2\13\2SW\\_djrz\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}