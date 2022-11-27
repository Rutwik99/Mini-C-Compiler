
// Generated from Expr.g4 by ANTLR 4.8


#include "ExprLexer.h"


using namespace antlr4;


ExprLexer::ExprLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprLexer::~ExprLexer() {
  delete _interpreter;
}

std::string ExprLexer::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& ExprLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& ExprLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& ExprLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& ExprLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> ExprLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& ExprLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> ExprLexer::_decisionToDFA;
atn::PredictionContextCache ExprLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprLexer::_atn;
std::vector<uint16_t> ExprLexer::_serializedATN;

std::vector<std::string> ExprLexer::_ruleNames = {
  u8"T__0", u8"T__1", u8"T__2", u8"T__3", u8"T__4", u8"T__5", u8"T__6", 
  u8"T__7", u8"T__8", u8"T__9", u8"T__10", u8"T__11", u8"T__12", u8"T__13", 
  u8"T__14", u8"T__15", u8"T__16", u8"T__17", u8"T__18", u8"T__19", u8"T__20", 
  u8"T__21", u8"T__22", u8"T__23", u8"T__24", u8"VAR_TYPE", u8"REL_OP", 
  u8"EQ_OP", u8"ASSIGN_OP", u8"NOT", u8"AND", u8"OR", u8"ADD", u8"SUB", 
  u8"MUL", u8"DIV", u8"MOD", u8"ID", u8"BOOL", u8"FLOAT", u8"INT", u8"STRING", 
  u8"COMMENT", u8"NS"
};

std::vector<std::string> ExprLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> ExprLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> ExprLexer::_literalNames = {
  "", u8"'('", u8"')'", u8"'^'", u8"'?'", u8"':'", u8"'['", u8"']'", u8"'{'", 
  u8"'Break'", u8"'Continue'", u8"'}'", u8"','", u8"'Array'", u8"'Function'", 
  u8"'Returns'", u8"'Void'", u8"'For'", u8"';'", u8"'While'", u8"'If'", 
  u8"'Elif'", u8"'Else'", u8"'Printf'", u8"'Scanf'", u8"'Return'", "", "", 
  "", "", u8"'Not'", u8"'And'", u8"'Or'", u8"'+'", u8"'-'", u8"'*'", u8"'/'", 
  u8"'%'"
};

std::vector<std::string> ExprLexer::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", u8"VAR_TYPE", u8"REL_OP", u8"EQ_OP", u8"ASSIGN_OP", 
  u8"NOT", u8"AND", u8"OR", u8"ADD", u8"SUB", u8"MUL", u8"DIV", u8"MOD", 
  u8"ID", u8"BOOL", u8"FLOAT", u8"INT", u8"STRING", u8"COMMENT", u8"NS"
};

dfa::Vocabulary ExprLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprLexer::_tokenNames;

ExprLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x2e, 0x14e, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
    0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 
    0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
    0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 
    0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 
    0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 
    0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 
    0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 
    0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 
    0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 
    0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 
    0x25, 0x9, 0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 
    0x9, 0x28, 0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 
    0x2b, 0x4, 0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x5, 0x1b, 0xd8, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0xdf, 0xa, 0x1c, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0xe5, 0xa, 0x1d, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0xf2, 0xa, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x10b, 0xa, 0x27, 0xc, 0x27, 
    0xe, 0x27, 0x10e, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x119, 
    0xa, 0x28, 0x3, 0x29, 0x6, 0x29, 0x11c, 0xa, 0x29, 0xd, 0x29, 0xe, 0x29, 
    0x11d, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x122, 0xa, 0x29, 0xc, 0x29, 
    0xe, 0x29, 0x125, 0xb, 0x29, 0x3, 0x29, 0x3, 0x29, 0x6, 0x29, 0x129, 
    0xa, 0x29, 0xd, 0x29, 0xe, 0x29, 0x12a, 0x5, 0x29, 0x12d, 0xa, 0x29, 
    0x3, 0x2a, 0x6, 0x2a, 0x130, 0xa, 0x2a, 0xd, 0x2a, 0xe, 0x2a, 0x131, 
    0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x136, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 
    0x139, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x7, 0x2c, 0x141, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x144, 
    0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x6, 0x2d, 0x149, 0xa, 0x2d, 
    0xd, 0x2d, 0xe, 0x2d, 0x14a, 0x3, 0x2d, 0x3, 0x2d, 0x2, 0x2, 0x2e, 0x3, 
    0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 
    0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x19, 0xe, 0x1b, 0xf, 0x1d, 0x10, 
    0x1f, 0x11, 0x21, 0x12, 0x23, 0x13, 0x25, 0x14, 0x27, 0x15, 0x29, 0x16, 
    0x2b, 0x17, 0x2d, 0x18, 0x2f, 0x19, 0x31, 0x1a, 0x33, 0x1b, 0x35, 0x1c, 
    0x37, 0x1d, 0x39, 0x1e, 0x3b, 0x1f, 0x3d, 0x20, 0x3f, 0x21, 0x41, 0x22, 
    0x43, 0x23, 0x45, 0x24, 0x47, 0x25, 0x49, 0x26, 0x4b, 0x27, 0x4d, 0x28, 
    0x4f, 0x29, 0x51, 0x2a, 0x53, 0x2b, 0x55, 0x2c, 0x57, 0x2d, 0x59, 0x2e, 
    0x3, 0x2, 0x9, 0x4, 0x2, 0x3e, 0x3e, 0x40, 0x40, 0x4, 0x2, 0x43, 0x5c, 
    0x63, 0x7c, 0x6, 0x2, 0x32, 0x3b, 0x43, 0x5c, 0x61, 0x61, 0x63, 0x7c, 
    0x3, 0x2, 0x32, 0x3b, 0x3, 0x2, 0x24, 0x24, 0x4, 0x2, 0xc, 0xc, 0xf, 
    0xf, 0x4, 0x2, 0xb, 0xc, 0x22, 0x22, 0x2, 0x162, 0x2, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x39, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x51, 0x3, 0x2, 0x2, 0x2, 0x2, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x55, 0x3, 0x2, 0x2, 0x2, 0x2, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x59, 0x3, 0x2, 0x2, 0x2, 0x3, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x5, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x7, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x9, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0xb, 0x63, 0x3, 0x2, 0x2, 0x2, 0xd, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0xf, 0x67, 0x3, 0x2, 0x2, 0x2, 0x11, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x13, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x15, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x17, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x19, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x1b, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x84, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x21, 0x95, 0x3, 0x2, 0x2, 0x2, 0x23, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x25, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x27, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x2b, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0xae, 0x3, 0x2, 0x2, 0x2, 0x2f, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0xba, 0x3, 0x2, 0x2, 0x2, 0x33, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0xd7, 0x3, 0x2, 0x2, 0x2, 0x37, 0xde, 0x3, 0x2, 0x2, 0x2, 0x39, 0xe4, 
    0x3, 0x2, 0x2, 0x2, 0x3b, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x3d, 0xf3, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x41, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0x43, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x45, 0x100, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x102, 0x3, 0x2, 0x2, 0x2, 0x49, 0x104, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x106, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x108, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0x118, 0x3, 0x2, 0x2, 0x2, 0x51, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x53, 0x12f, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x133, 0x3, 0x2, 0x2, 0x2, 0x57, 0x13c, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x148, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x2a, 
    0x2, 0x2, 0x5c, 0x4, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x2b, 0x2, 
    0x2, 0x5e, 0x6, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x60, 0x2, 0x2, 
    0x60, 0x8, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0x41, 0x2, 0x2, 0x62, 
    0xa, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0x3c, 0x2, 0x2, 0x64, 0xc, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x5d, 0x2, 0x2, 0x66, 0xe, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x5f, 0x2, 0x2, 0x68, 0x10, 0x3, 0x2, 
    0x2, 0x2, 0x69, 0x6a, 0x7, 0x7d, 0x2, 0x2, 0x6a, 0x12, 0x3, 0x2, 0x2, 
    0x2, 0x6b, 0x6c, 0x7, 0x44, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x74, 0x2, 0x2, 
    0x6d, 0x6e, 0x7, 0x67, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x63, 0x2, 0x2, 0x6f, 
    0x70, 0x7, 0x6d, 0x2, 0x2, 0x70, 0x14, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 
    0x7, 0x45, 0x2, 0x2, 0x72, 0x73, 0x7, 0x71, 0x2, 0x2, 0x73, 0x74, 0x7, 
    0x70, 0x2, 0x2, 0x74, 0x75, 0x7, 0x76, 0x2, 0x2, 0x75, 0x76, 0x7, 0x6b, 
    0x2, 0x2, 0x76, 0x77, 0x7, 0x70, 0x2, 0x2, 0x77, 0x78, 0x7, 0x77, 0x2, 
    0x2, 0x78, 0x79, 0x7, 0x67, 0x2, 0x2, 0x79, 0x16, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x7b, 0x7, 0x7f, 0x2, 0x2, 0x7b, 0x18, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x7d, 0x7, 0x2e, 0x2, 0x2, 0x7d, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 
    0x7, 0x43, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x74, 0x2, 0x2, 0x80, 0x81, 0x7, 
    0x74, 0x2, 0x2, 0x81, 0x82, 0x7, 0x63, 0x2, 0x2, 0x82, 0x83, 0x7, 0x7b, 
    0x2, 0x2, 0x83, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0x48, 0x2, 
    0x2, 0x85, 0x86, 0x7, 0x77, 0x2, 0x2, 0x86, 0x87, 0x7, 0x70, 0x2, 0x2, 
    0x87, 0x88, 0x7, 0x65, 0x2, 0x2, 0x88, 0x89, 0x7, 0x76, 0x2, 0x2, 0x89, 
    0x8a, 0x7, 0x6b, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x71, 0x2, 0x2, 0x8b, 0x8c, 
    0x7, 0x70, 0x2, 0x2, 0x8c, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 
    0x54, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x67, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x76, 
    0x2, 0x2, 0x90, 0x91, 0x7, 0x77, 0x2, 0x2, 0x91, 0x92, 0x7, 0x74, 0x2, 
    0x2, 0x92, 0x93, 0x7, 0x70, 0x2, 0x2, 0x93, 0x94, 0x7, 0x75, 0x2, 0x2, 
    0x94, 0x20, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x7, 0x58, 0x2, 0x2, 0x96, 
    0x97, 0x7, 0x71, 0x2, 0x2, 0x97, 0x98, 0x7, 0x6b, 0x2, 0x2, 0x98, 0x99, 
    0x7, 0x66, 0x2, 0x2, 0x99, 0x22, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 
    0x48, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x71, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x74, 
    0x2, 0x2, 0x9d, 0x24, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x3d, 0x2, 
    0x2, 0x9f, 0x26, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x59, 0x2, 0x2, 
    0xa1, 0xa2, 0x7, 0x6a, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x6b, 0x2, 0x2, 0xa3, 
    0xa4, 0x7, 0x6e, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x67, 0x2, 0x2, 0xa5, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x4b, 0x2, 0x2, 0xa7, 0xa8, 0x7, 
    0x68, 0x2, 0x2, 0xa8, 0x2a, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x47, 
    0x2, 0x2, 0xaa, 0xab, 0x7, 0x6e, 0x2, 0x2, 0xab, 0xac, 0x7, 0x6b, 0x2, 
    0x2, 0xac, 0xad, 0x7, 0x68, 0x2, 0x2, 0xad, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xaf, 0x7, 0x47, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x6e, 0x2, 0x2, 0xb0, 
    0xb1, 0x7, 0x75, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x67, 0x2, 0x2, 0xb2, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x52, 0x2, 0x2, 0xb4, 0xb5, 0x7, 
    0x74, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x6b, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x70, 
    0x2, 0x2, 0xb7, 0xb8, 0x7, 0x76, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x68, 0x2, 
    0x2, 0xb9, 0x30, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x55, 0x2, 0x2, 
    0xbb, 0xbc, 0x7, 0x65, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x63, 0x2, 0x2, 0xbd, 
    0xbe, 0x7, 0x70, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x68, 0x2, 0x2, 0xbf, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x54, 0x2, 0x2, 0xc1, 0xc2, 0x7, 
    0x67, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x76, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x77, 
    0x2, 0x2, 0xc4, 0xc5, 0x7, 0x74, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x70, 0x2, 
    0x2, 0xc6, 0x34, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x4b, 0x2, 0x2, 
    0xc8, 0xc9, 0x7, 0x70, 0x2, 0x2, 0xc9, 0xd8, 0x7, 0x76, 0x2, 0x2, 0xca, 
    0xcb, 0x7, 0x48, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x6e, 0x2, 0x2, 0xcc, 0xcd, 
    0x7, 0x71, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x63, 0x2, 0x2, 0xce, 0xd8, 0x7, 
    0x76, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x44, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x71, 
    0x2, 0x2, 0xd1, 0xd2, 0x7, 0x71, 0x2, 0x2, 0xd2, 0xd8, 0x7, 0x6e, 0x2, 
    0x2, 0xd3, 0xd4, 0x7, 0x45, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x6a, 0x2, 0x2, 
    0xd5, 0xd6, 0x7, 0x63, 0x2, 0x2, 0xd6, 0xd8, 0x7, 0x74, 0x2, 0x2, 0xd7, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xca, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0xd7, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x3e, 0x2, 0x2, 0xda, 0xdf, 0x7, 0x3f, 
    0x2, 0x2, 0xdb, 0xdc, 0x7, 0x40, 0x2, 0x2, 0xdc, 0xdf, 0x7, 0x3f, 0x2, 
    0x2, 0xdd, 0xdf, 0x9, 0x2, 0x2, 0x2, 0xde, 0xd9, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x3f, 0x2, 0x2, 0xe1, 0xe5, 
    0x7, 0x3f, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x23, 0x2, 0x2, 0xe3, 0xe5, 0x7, 
    0x3f, 0x2, 0x2, 0xe4, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0x3a, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xf2, 0x7, 0x3f, 0x2, 
    0x2, 0xe7, 0xe8, 0x7, 0x2d, 0x2, 0x2, 0xe8, 0xf2, 0x7, 0x3f, 0x2, 0x2, 
    0xe9, 0xea, 0x7, 0x2f, 0x2, 0x2, 0xea, 0xf2, 0x7, 0x3f, 0x2, 0x2, 0xeb, 
    0xec, 0x7, 0x2c, 0x2, 0x2, 0xec, 0xf2, 0x7, 0x3f, 0x2, 0x2, 0xed, 0xee, 
    0x7, 0x31, 0x2, 0x2, 0xee, 0xf2, 0x7, 0x3f, 0x2, 0x2, 0xef, 0xf0, 0x7, 
    0x60, 0x2, 0x2, 0xf0, 0xf2, 0x7, 0x3f, 0x2, 0x2, 0xf1, 0xe6, 0x3, 0x2, 
    0x2, 0x2, 0xf1, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0xf1, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf4, 0x7, 0x50, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x71, 0x2, 0x2, 0xf5, 0xf6, 
    0x7, 0x76, 0x2, 0x2, 0xf6, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x7, 
    0x43, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x70, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0x66, 
    0x2, 0x2, 0xfa, 0x40, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x51, 0x2, 
    0x2, 0xfc, 0xfd, 0x7, 0x74, 0x2, 0x2, 0xfd, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0xfe, 0xff, 0x7, 0x2d, 0x2, 0x2, 0xff, 0x44, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x101, 0x7, 0x2f, 0x2, 0x2, 0x101, 0x46, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x103, 0x7, 0x2c, 0x2, 0x2, 0x103, 0x48, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x105, 0x7, 0x31, 0x2, 0x2, 0x105, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x107, 0x7, 0x27, 0x2, 0x2, 0x107, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x108, 
    0x10c, 0x9, 0x3, 0x2, 0x2, 0x109, 0x10b, 0x9, 0x4, 0x2, 0x2, 0x10a, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10c, 
    0x10a, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 
    0x7, 0x56, 0x2, 0x2, 0x110, 0x111, 0x7, 0x74, 0x2, 0x2, 0x111, 0x112, 
    0x7, 0x77, 0x2, 0x2, 0x112, 0x119, 0x7, 0x67, 0x2, 0x2, 0x113, 0x114, 
    0x7, 0x48, 0x2, 0x2, 0x114, 0x115, 0x7, 0x63, 0x2, 0x2, 0x115, 0x116, 
    0x7, 0x6e, 0x2, 0x2, 0x116, 0x117, 0x7, 0x75, 0x2, 0x2, 0x117, 0x119, 
    0x7, 0x67, 0x2, 0x2, 0x118, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x118, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x119, 0x50, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11c, 0x9, 
    0x5, 0x2, 0x2, 0x11b, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x123, 0x7, 
    0x30, 0x2, 0x2, 0x120, 0x122, 0x9, 0x5, 0x2, 0x2, 0x121, 0x120, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x125, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 
    0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 0x124, 0x12d, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x7, 
    0x30, 0x2, 0x2, 0x127, 0x129, 0x9, 0x5, 0x2, 0x2, 0x128, 0x127, 0x3, 
    0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x128, 0x3, 
    0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12d, 0x3, 
    0x2, 0x2, 0x2, 0x12c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x126, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x52, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 0x9, 0x5, 
    0x2, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x54, 0x3, 0x2, 0x2, 0x2, 0x133, 0x137, 0x7, 0x24, 
    0x2, 0x2, 0x134, 0x136, 0xa, 0x6, 0x2, 0x2, 0x135, 0x134, 0x3, 0x2, 
    0x2, 0x2, 0x136, 0x139, 0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x139, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x24, 
    0x2, 0x2, 0x13b, 0x56, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x31, 
    0x2, 0x2, 0x13d, 0x13e, 0x7, 0x31, 0x2, 0x2, 0x13e, 0x142, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x141, 0xa, 0x7, 0x2, 0x2, 0x140, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x144, 0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 0x2, 0x143, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x8, 0x2c, 
    0x2, 0x2, 0x146, 0x58, 0x3, 0x2, 0x2, 0x2, 0x147, 0x149, 0x9, 0x8, 0x2, 
    0x2, 0x148, 0x147, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 
    0x2, 0x14a, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 
    0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x8, 0x2d, 0x2, 
    0x2, 0x14d, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x11, 0x2, 0xd7, 0xde, 0xe4, 0xf1, 
    0x10c, 0x118, 0x11d, 0x123, 0x12a, 0x12c, 0x131, 0x137, 0x142, 0x14a, 
    0x3, 0x8, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprLexer::Initializer ExprLexer::_init;
