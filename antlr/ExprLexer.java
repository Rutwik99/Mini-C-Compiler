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
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, VAR_TYPE=26, REL_OP=27, EQ_OP=28, ASSIGN_OP=29, NOT=30, AND=31, 
		OR=32, ADD=33, SUB=34, MUL=35, DIV=36, MOD=37, ID=38, BOOL=39, FLOAT=40, 
		INT=41, STRING=42, COMMENT=43, NS=44;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
			"T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
			"VAR_TYPE", "REL_OP", "EQ_OP", "ASSIGN_OP", "NOT", "AND", "OR", "ADD", 
			"SUB", "MUL", "DIV", "MOD", "ID", "BOOL", "FLOAT", "INT", "STRING", "COMMENT", 
			"NS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'('", "')'", "'^'", "'?'", "':'", "'['", "']'", "'{'", "'Break'", 
			"'Continue'", "'}'", "','", "'Array'", "'Function'", "'Returns'", "'Void'", 
			"'For'", "';'", "'While'", "'If'", "'Elif'", "'Else'", "'Printf'", "'Scanf'", 
			"'Return'", null, null, null, null, "'Not'", "'And'", "'Or'", "'+'", 
			"'-'", "'*'", "'/'", "'%'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, "VAR_TYPE", "REL_OP", "EQ_OP", "ASSIGN_OP", "NOT", "AND", 
			"OR", "ADD", "SUB", "MUL", "DIV", "MOD", "ID", "BOOL", "FLOAT", "INT", 
			"STRING", "COMMENT", "NS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2.\u014e\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t"+
		"\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3"+
		"\13\3\f\3\f\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\21"+
		"\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\23\3\23\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\27\3\27\3\27\3\27"+
		"\3\27\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3\31\3\31\3\31"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\33\3\33"+
		"\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\5\33\u00d8\n\33\3\34\3\34"+
		"\3\34\3\34\3\34\5\34\u00df\n\34\3\35\3\35\3\35\3\35\5\35\u00e5\n\35\3"+
		"\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u00f2\n\36"+
		"\3\37\3\37\3\37\3\37\3 \3 \3 \3 \3!\3!\3!\3\"\3\"\3#\3#\3$\3$\3%\3%\3"+
		"&\3&\3\'\3\'\7\'\u010b\n\'\f\'\16\'\u010e\13\'\3(\3(\3(\3(\3(\3(\3(\3"+
		"(\3(\5(\u0119\n(\3)\6)\u011c\n)\r)\16)\u011d\3)\3)\7)\u0122\n)\f)\16)"+
		"\u0125\13)\3)\3)\6)\u0129\n)\r)\16)\u012a\5)\u012d\n)\3*\6*\u0130\n*\r"+
		"*\16*\u0131\3+\3+\7+\u0136\n+\f+\16+\u0139\13+\3+\3+\3,\3,\3,\3,\7,\u0141"+
		"\n,\f,\16,\u0144\13,\3,\3,\3-\6-\u0149\n-\r-\16-\u014a\3-\3-\2\2.\3\3"+
		"\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21"+
		"!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!"+
		"A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.\3\2\t\4\2>>@@\4\2C\\c|\6\2\62;C\\aac|\3\2"+
		"\62;\3\2$$\4\2\f\f\17\17\4\2\13\f\"\"\2\u0162\2\3\3\2\2\2\2\5\3\2\2\2"+
		"\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3"+
		"\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2"+
		"\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2"+
		"\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2"+
		"\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2"+
		"\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2"+
		"\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y"+
		"\3\2\2\2\3[\3\2\2\2\5]\3\2\2\2\7_\3\2\2\2\ta\3\2\2\2\13c\3\2\2\2\re\3"+
		"\2\2\2\17g\3\2\2\2\21i\3\2\2\2\23k\3\2\2\2\25q\3\2\2\2\27z\3\2\2\2\31"+
		"|\3\2\2\2\33~\3\2\2\2\35\u0084\3\2\2\2\37\u008d\3\2\2\2!\u0095\3\2\2\2"+
		"#\u009a\3\2\2\2%\u009e\3\2\2\2\'\u00a0\3\2\2\2)\u00a6\3\2\2\2+\u00a9\3"+
		"\2\2\2-\u00ae\3\2\2\2/\u00b3\3\2\2\2\61\u00ba\3\2\2\2\63\u00c0\3\2\2\2"+
		"\65\u00d7\3\2\2\2\67\u00de\3\2\2\29\u00e4\3\2\2\2;\u00f1\3\2\2\2=\u00f3"+
		"\3\2\2\2?\u00f7\3\2\2\2A\u00fb\3\2\2\2C\u00fe\3\2\2\2E\u0100\3\2\2\2G"+
		"\u0102\3\2\2\2I\u0104\3\2\2\2K\u0106\3\2\2\2M\u0108\3\2\2\2O\u0118\3\2"+
		"\2\2Q\u012c\3\2\2\2S\u012f\3\2\2\2U\u0133\3\2\2\2W\u013c\3\2\2\2Y\u0148"+
		"\3\2\2\2[\\\7*\2\2\\\4\3\2\2\2]^\7+\2\2^\6\3\2\2\2_`\7`\2\2`\b\3\2\2\2"+
		"ab\7A\2\2b\n\3\2\2\2cd\7<\2\2d\f\3\2\2\2ef\7]\2\2f\16\3\2\2\2gh\7_\2\2"+
		"h\20\3\2\2\2ij\7}\2\2j\22\3\2\2\2kl\7D\2\2lm\7t\2\2mn\7g\2\2no\7c\2\2"+
		"op\7m\2\2p\24\3\2\2\2qr\7E\2\2rs\7q\2\2st\7p\2\2tu\7v\2\2uv\7k\2\2vw\7"+
		"p\2\2wx\7w\2\2xy\7g\2\2y\26\3\2\2\2z{\7\177\2\2{\30\3\2\2\2|}\7.\2\2}"+
		"\32\3\2\2\2~\177\7C\2\2\177\u0080\7t\2\2\u0080\u0081\7t\2\2\u0081\u0082"+
		"\7c\2\2\u0082\u0083\7{\2\2\u0083\34\3\2\2\2\u0084\u0085\7H\2\2\u0085\u0086"+
		"\7w\2\2\u0086\u0087\7p\2\2\u0087\u0088\7e\2\2\u0088\u0089\7v\2\2\u0089"+
		"\u008a\7k\2\2\u008a\u008b\7q\2\2\u008b\u008c\7p\2\2\u008c\36\3\2\2\2\u008d"+
		"\u008e\7T\2\2\u008e\u008f\7g\2\2\u008f\u0090\7v\2\2\u0090\u0091\7w\2\2"+
		"\u0091\u0092\7t\2\2\u0092\u0093\7p\2\2\u0093\u0094\7u\2\2\u0094 \3\2\2"+
		"\2\u0095\u0096\7X\2\2\u0096\u0097\7q\2\2\u0097\u0098\7k\2\2\u0098\u0099"+
		"\7f\2\2\u0099\"\3\2\2\2\u009a\u009b\7H\2\2\u009b\u009c\7q\2\2\u009c\u009d"+
		"\7t\2\2\u009d$\3\2\2\2\u009e\u009f\7=\2\2\u009f&\3\2\2\2\u00a0\u00a1\7"+
		"Y\2\2\u00a1\u00a2\7j\2\2\u00a2\u00a3\7k\2\2\u00a3\u00a4\7n\2\2\u00a4\u00a5"+
		"\7g\2\2\u00a5(\3\2\2\2\u00a6\u00a7\7K\2\2\u00a7\u00a8\7h\2\2\u00a8*\3"+
		"\2\2\2\u00a9\u00aa\7G\2\2\u00aa\u00ab\7n\2\2\u00ab\u00ac\7k\2\2\u00ac"+
		"\u00ad\7h\2\2\u00ad,\3\2\2\2\u00ae\u00af\7G\2\2\u00af\u00b0\7n\2\2\u00b0"+
		"\u00b1\7u\2\2\u00b1\u00b2\7g\2\2\u00b2.\3\2\2\2\u00b3\u00b4\7R\2\2\u00b4"+
		"\u00b5\7t\2\2\u00b5\u00b6\7k\2\2\u00b6\u00b7\7p\2\2\u00b7\u00b8\7v\2\2"+
		"\u00b8\u00b9\7h\2\2\u00b9\60\3\2\2\2\u00ba\u00bb\7U\2\2\u00bb\u00bc\7"+
		"e\2\2\u00bc\u00bd\7c\2\2\u00bd\u00be\7p\2\2\u00be\u00bf\7h\2\2\u00bf\62"+
		"\3\2\2\2\u00c0\u00c1\7T\2\2\u00c1\u00c2\7g\2\2\u00c2\u00c3\7v\2\2\u00c3"+
		"\u00c4\7w\2\2\u00c4\u00c5\7t\2\2\u00c5\u00c6\7p\2\2\u00c6\64\3\2\2\2\u00c7"+
		"\u00c8\7K\2\2\u00c8\u00c9\7p\2\2\u00c9\u00d8\7v\2\2\u00ca\u00cb\7H\2\2"+
		"\u00cb\u00cc\7n\2\2\u00cc\u00cd\7q\2\2\u00cd\u00ce\7c\2\2\u00ce\u00d8"+
		"\7v\2\2\u00cf\u00d0\7D\2\2\u00d0\u00d1\7q\2\2\u00d1\u00d2\7q\2\2\u00d2"+
		"\u00d8\7n\2\2\u00d3\u00d4\7E\2\2\u00d4\u00d5\7j\2\2\u00d5\u00d6\7c\2\2"+
		"\u00d6\u00d8\7t\2\2\u00d7\u00c7\3\2\2\2\u00d7\u00ca\3\2\2\2\u00d7\u00cf"+
		"\3\2\2\2\u00d7\u00d3\3\2\2\2\u00d8\66\3\2\2\2\u00d9\u00da\7>\2\2\u00da"+
		"\u00df\7?\2\2\u00db\u00dc\7@\2\2\u00dc\u00df\7?\2\2\u00dd\u00df\t\2\2"+
		"\2\u00de\u00d9\3\2\2\2\u00de\u00db\3\2\2\2\u00de\u00dd\3\2\2\2\u00df8"+
		"\3\2\2\2\u00e0\u00e1\7?\2\2\u00e1\u00e5\7?\2\2\u00e2\u00e3\7#\2\2\u00e3"+
		"\u00e5\7?\2\2\u00e4\u00e0\3\2\2\2\u00e4\u00e2\3\2\2\2\u00e5:\3\2\2\2\u00e6"+
		"\u00f2\7?\2\2\u00e7\u00e8\7-\2\2\u00e8\u00f2\7?\2\2\u00e9\u00ea\7/\2\2"+
		"\u00ea\u00f2\7?\2\2\u00eb\u00ec\7,\2\2\u00ec\u00f2\7?\2\2\u00ed\u00ee"+
		"\7\61\2\2\u00ee\u00f2\7?\2\2\u00ef\u00f0\7`\2\2\u00f0\u00f2\7?\2\2\u00f1"+
		"\u00e6\3\2\2\2\u00f1\u00e7\3\2\2\2\u00f1\u00e9\3\2\2\2\u00f1\u00eb\3\2"+
		"\2\2\u00f1\u00ed\3\2\2\2\u00f1\u00ef\3\2\2\2\u00f2<\3\2\2\2\u00f3\u00f4"+
		"\7P\2\2\u00f4\u00f5\7q\2\2\u00f5\u00f6\7v\2\2\u00f6>\3\2\2\2\u00f7\u00f8"+
		"\7C\2\2\u00f8\u00f9\7p\2\2\u00f9\u00fa\7f\2\2\u00fa@\3\2\2\2\u00fb\u00fc"+
		"\7Q\2\2\u00fc\u00fd\7t\2\2\u00fdB\3\2\2\2\u00fe\u00ff\7-\2\2\u00ffD\3"+
		"\2\2\2\u0100\u0101\7/\2\2\u0101F\3\2\2\2\u0102\u0103\7,\2\2\u0103H\3\2"+
		"\2\2\u0104\u0105\7\61\2\2\u0105J\3\2\2\2\u0106\u0107\7\'\2\2\u0107L\3"+
		"\2\2\2\u0108\u010c\t\3\2\2\u0109\u010b\t\4\2\2\u010a\u0109\3\2\2\2\u010b"+
		"\u010e\3\2\2\2\u010c\u010a\3\2\2\2\u010c\u010d\3\2\2\2\u010dN\3\2\2\2"+
		"\u010e\u010c\3\2\2\2\u010f\u0110\7V\2\2\u0110\u0111\7t\2\2\u0111\u0112"+
		"\7w\2\2\u0112\u0119\7g\2\2\u0113\u0114\7H\2\2\u0114\u0115\7c\2\2\u0115"+
		"\u0116\7n\2\2\u0116\u0117\7u\2\2\u0117\u0119\7g\2\2\u0118\u010f\3\2\2"+
		"\2\u0118\u0113\3\2\2\2\u0119P\3\2\2\2\u011a\u011c\t\5\2\2\u011b\u011a"+
		"\3\2\2\2\u011c\u011d\3\2\2\2\u011d\u011b\3\2\2\2\u011d\u011e\3\2\2\2\u011e"+
		"\u011f\3\2\2\2\u011f\u0123\7\60\2\2\u0120\u0122\t\5\2\2\u0121\u0120\3"+
		"\2\2\2\u0122\u0125\3\2\2\2\u0123\u0121\3\2\2\2\u0123\u0124\3\2\2\2\u0124"+
		"\u012d\3\2\2\2\u0125\u0123\3\2\2\2\u0126\u0128\7\60\2\2\u0127\u0129\t"+
		"\5\2\2\u0128\u0127\3\2\2\2\u0129\u012a\3\2\2\2\u012a\u0128\3\2\2\2\u012a"+
		"\u012b\3\2\2\2\u012b\u012d\3\2\2\2\u012c\u011b\3\2\2\2\u012c\u0126\3\2"+
		"\2\2\u012dR\3\2\2\2\u012e\u0130\t\5\2\2\u012f\u012e\3\2\2\2\u0130\u0131"+
		"\3\2\2\2\u0131\u012f\3\2\2\2\u0131\u0132\3\2\2\2\u0132T\3\2\2\2\u0133"+
		"\u0137\7$\2\2\u0134\u0136\n\6\2\2\u0135\u0134\3\2\2\2\u0136\u0139\3\2"+
		"\2\2\u0137\u0135\3\2\2\2\u0137\u0138\3\2\2\2\u0138\u013a\3\2\2\2\u0139"+
		"\u0137\3\2\2\2\u013a\u013b\7$\2\2\u013bV\3\2\2\2\u013c\u013d\7\61\2\2"+
		"\u013d\u013e\7\61\2\2\u013e\u0142\3\2\2\2\u013f\u0141\n\7\2\2\u0140\u013f"+
		"\3\2\2\2\u0141\u0144\3\2\2\2\u0142\u0140\3\2\2\2\u0142\u0143\3\2\2\2\u0143"+
		"\u0145\3\2\2\2\u0144\u0142\3\2\2\2\u0145\u0146\b,\2\2\u0146X\3\2\2\2\u0147"+
		"\u0149\t\b\2\2\u0148\u0147\3\2\2\2\u0149\u014a\3\2\2\2\u014a\u0148\3\2"+
		"\2\2\u014a\u014b\3\2\2\2\u014b\u014c\3\2\2\2\u014c\u014d\b-\2\2\u014d"+
		"Z\3\2\2\2\21\2\u00d7\u00de\u00e4\u00f1\u010c\u0118\u011d\u0123\u012a\u012c"+
		"\u0131\u0137\u0142\u014a\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}