
// Generated from Expr.g4 by ANTLR 4.8


#include "ExprListener.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProgContext::EOF() {
  return getToken(ExprParser::EOF, 0);
}

std::vector<ExprParser::DeclarationContext *> ExprParser::ProgContext::declaration() {
  return getRuleContexts<ExprParser::DeclarationContext>();
}

ExprParser::DeclarationContext* ExprParser::ProgContext::declaration(size_t i) {
  return getRuleContext<ExprParser::DeclarationContext>(i);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}

void ExprParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void ExprParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(34);
      declaration();
      setState(37); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__12)
      | (1ULL << ExprParser::T__13)
      | (1ULL << ExprParser::VAR_TYPE))) != 0));
    setState(39);
    match(ExprParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ExprContext *> ExprParser::ExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::ExprContext::NOT() {
  return getToken(ExprParser::NOT, 0);
}

tree::TerminalNode* ExprParser::ExprContext::SUB() {
  return getToken(ExprParser::SUB, 0);
}

ExprParser::Func_callContext* ExprParser::ExprContext::func_call() {
  return getRuleContext<ExprParser::Func_callContext>(0);
}

ExprParser::Array_accessContext* ExprParser::ExprContext::array_access() {
  return getRuleContext<ExprParser::Array_accessContext>(0);
}

tree::TerminalNode* ExprParser::ExprContext::ID() {
  return getToken(ExprParser::ID, 0);
}

ExprParser::LiteralContext* ExprParser::ExprContext::literal() {
  return getRuleContext<ExprParser::LiteralContext>(0);
}

tree::TerminalNode* ExprParser::ExprContext::DIV() {
  return getToken(ExprParser::DIV, 0);
}

tree::TerminalNode* ExprParser::ExprContext::MUL() {
  return getToken(ExprParser::MUL, 0);
}

tree::TerminalNode* ExprParser::ExprContext::MOD() {
  return getToken(ExprParser::MOD, 0);
}

tree::TerminalNode* ExprParser::ExprContext::ADD() {
  return getToken(ExprParser::ADD, 0);
}

tree::TerminalNode* ExprParser::ExprContext::REL_OP() {
  return getToken(ExprParser::REL_OP, 0);
}

tree::TerminalNode* ExprParser::ExprContext::EQ_OP() {
  return getToken(ExprParser::EQ_OP, 0);
}

tree::TerminalNode* ExprParser::ExprContext::AND() {
  return getToken(ExprParser::AND, 0);
}

tree::TerminalNode* ExprParser::ExprContext::OR() {
  return getToken(ExprParser::OR, 0);
}


size_t ExprParser::ExprContext::getRuleIndex() const {
  return ExprParser::RuleExpr;
}

void ExprParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void ExprParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


ExprParser::ExprContext* ExprParser::expr() {
   return expr(0);
}

ExprParser::ExprContext* ExprParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExprParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, ExprParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(54);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(42);
      match(ExprParser::T__0);
      setState(43);
      expr(0);
      setState(44);
      match(ExprParser::T__1);
      break;
    }

    case 2: {
      setState(46);
      match(ExprParser::NOT);
      setState(47);
      expr(13);
      break;
    }

    case 3: {
      setState(48);
      match(ExprParser::SUB);
      setState(49);
      expr(12);
      break;
    }

    case 4: {
      setState(50);
      func_call();
      break;
    }

    case 5: {
      setState(51);
      array_access();
      break;
    }

    case 6: {
      setState(52);
      match(ExprParser::ID);
      break;
    }

    case 7: {
      setState(53);
      literal();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(85);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(83);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(56);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(57);
          match(ExprParser::T__2);
          setState(58);
          expr(15);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(59);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(60);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ExprParser::MUL)
            | (1ULL << ExprParser::DIV)
            | (1ULL << ExprParser::MOD))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(61);
          expr(12);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(62);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(63);
          _la = _input->LA(1);
          if (!(_la == ExprParser::ADD

          || _la == ExprParser::SUB)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(64);
          expr(11);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(65);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(66);
          match(ExprParser::REL_OP);
          setState(67);
          expr(10);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(68);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(69);
          match(ExprParser::EQ_OP);
          setState(70);
          expr(9);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(71);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(72);
          match(ExprParser::AND);
          setState(73);
          expr(8);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(74);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(75);
          match(ExprParser::OR);
          setState(76);
          expr(7);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(77);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(78);
          match(ExprParser::T__3);
          setState(79);
          expr(0);
          setState(80);
          match(ExprParser::T__4);
          setState(81);
          expr(6);
          break;
        }

        } 
      }
      setState(87);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Assign_lineContext ------------------------------------------------------------------

ExprParser::Assign_lineContext::Assign_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Assign_lineContext::ID() {
  return getToken(ExprParser::ID, 0);
}

tree::TerminalNode* ExprParser::Assign_lineContext::ASSIGN_OP() {
  return getToken(ExprParser::ASSIGN_OP, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::Assign_lineContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Assign_lineContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}


size_t ExprParser::Assign_lineContext::getRuleIndex() const {
  return ExprParser::RuleAssign_line;
}

void ExprParser::Assign_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_line(this);
}

void ExprParser::Assign_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_line(this);
}

ExprParser::Assign_lineContext* ExprParser::assign_line() {
  Assign_lineContext *_localctx = _tracker.createInstance<Assign_lineContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleAssign_line);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(ExprParser::ID);
    setState(93);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(89);
      match(ExprParser::T__5);
      setState(90);
      expr(0);
      setState(91);
      match(ExprParser::T__6);
      break;
    }

    }
    setState(99);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::T__5) {
      setState(95);
      match(ExprParser::T__5);
      setState(96);
      expr(0);
      setState(97);
      match(ExprParser::T__6);
    }
    setState(101);
    match(ExprParser::ASSIGN_OP);
    setState(102);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Code_blockContext ------------------------------------------------------------------

ExprParser::Code_blockContext::Code_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::LineContext *> ExprParser::Code_blockContext::line() {
  return getRuleContexts<ExprParser::LineContext>();
}

ExprParser::LineContext* ExprParser::Code_blockContext::line(size_t i) {
  return getRuleContext<ExprParser::LineContext>(i);
}

ExprParser::Ret_lineContext* ExprParser::Code_blockContext::ret_line() {
  return getRuleContext<ExprParser::Ret_lineContext>(0);
}


size_t ExprParser::Code_blockContext::getRuleIndex() const {
  return ExprParser::RuleCode_block;
}

void ExprParser::Code_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCode_block(this);
}

void ExprParser::Code_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCode_block(this);
}

ExprParser::Code_blockContext* ExprParser::code_block() {
  Code_blockContext *_localctx = _tracker.createInstance<Code_blockContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleCode_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(ExprParser::T__7);
    setState(108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__0)
      | (1ULL << ExprParser::T__12)
      | (1ULL << ExprParser::T__13)
      | (1ULL << ExprParser::T__16)
      | (1ULL << ExprParser::T__18)
      | (1ULL << ExprParser::T__19)
      | (1ULL << ExprParser::T__22)
      | (1ULL << ExprParser::T__23)
      | (1ULL << ExprParser::VAR_TYPE)
      | (1ULL << ExprParser::NOT)
      | (1ULL << ExprParser::SUB)
      | (1ULL << ExprParser::ID)
      | (1ULL << ExprParser::BOOL)
      | (1ULL << ExprParser::FLOAT)
      | (1ULL << ExprParser::INT)
      | (1ULL << ExprParser::STRING))) != 0)) {
      setState(105);
      line();
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::T__24) {
      setState(111);
      ret_line();
    }
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::T__8) {
      setState(114);
      match(ExprParser::T__8);
    }
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::T__9) {
      setState(117);
      match(ExprParser::T__9);
    }
    setState(120);
    match(ExprParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

ExprParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::DeclarationContext* ExprParser::LineContext::declaration() {
  return getRuleContext<ExprParser::DeclarationContext>(0);
}

ExprParser::ExprContext* ExprParser::LineContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::For_loopContext* ExprParser::LineContext::for_loop() {
  return getRuleContext<ExprParser::For_loopContext>(0);
}

ExprParser::While_loopContext* ExprParser::LineContext::while_loop() {
  return getRuleContext<ExprParser::While_loopContext>(0);
}

ExprParser::If_conditionContext* ExprParser::LineContext::if_condition() {
  return getRuleContext<ExprParser::If_conditionContext>(0);
}

ExprParser::Assign_lineContext* ExprParser::LineContext::assign_line() {
  return getRuleContext<ExprParser::Assign_lineContext>(0);
}

ExprParser::Stdin_lineContext* ExprParser::LineContext::stdin_line() {
  return getRuleContext<ExprParser::Stdin_lineContext>(0);
}


size_t ExprParser::LineContext::getRuleIndex() const {
  return ExprParser::RuleLine;
}

void ExprParser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void ExprParser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
}

ExprParser::LineContext* ExprParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
      expr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(124);
      for_loop();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(125);
      while_loop();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(126);
      if_condition();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(127);
      assign_line();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(128);
      stdin_line();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ExprParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Var_defContext* ExprParser::DeclarationContext::var_def() {
  return getRuleContext<ExprParser::Var_defContext>(0);
}

ExprParser::Func_defContext* ExprParser::DeclarationContext::func_def() {
  return getRuleContext<ExprParser::Func_defContext>(0);
}


size_t ExprParser::DeclarationContext::getRuleIndex() const {
  return ExprParser::RuleDeclaration;
}

void ExprParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void ExprParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

ExprParser::DeclarationContext* ExprParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__12:
      case ExprParser::VAR_TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(131);
        var_def();
        break;
      }

      case ExprParser::T__13: {
        enterOuterAlt(_localctx, 2);
        setState(132);
        func_def();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_defContext ------------------------------------------------------------------

ExprParser::Var_defContext::Var_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Var_defContext::VAR_TYPE() {
  return getToken(ExprParser::VAR_TYPE, 0);
}

std::vector<ExprParser::Assign_lineContext *> ExprParser::Var_defContext::assign_line() {
  return getRuleContexts<ExprParser::Assign_lineContext>();
}

ExprParser::Assign_lineContext* ExprParser::Var_defContext::assign_line(size_t i) {
  return getRuleContext<ExprParser::Assign_lineContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Var_defContext::ID() {
  return getTokens(ExprParser::ID);
}

tree::TerminalNode* ExprParser::Var_defContext::ID(size_t i) {
  return getToken(ExprParser::ID, i);
}

std::vector<tree::TerminalNode *> ExprParser::Var_defContext::INT() {
  return getTokens(ExprParser::INT);
}

tree::TerminalNode* ExprParser::Var_defContext::INT(size_t i) {
  return getToken(ExprParser::INT, i);
}


size_t ExprParser::Var_defContext::getRuleIndex() const {
  return ExprParser::RuleVar_def;
}

void ExprParser::Var_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_def(this);
}

void ExprParser::Var_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_def(this);
}

ExprParser::Var_defContext* ExprParser::var_def() {
  Var_defContext *_localctx = _tracker.createInstance<Var_defContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleVar_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(184);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::VAR_TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(135);
        match(ExprParser::VAR_TYPE);
        setState(138);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          setState(136);
          assign_line();
          break;
        }

        case 2: {
          setState(137);
          match(ExprParser::ID);
          break;
        }

        }
        setState(147);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(140);
            match(ExprParser::T__11);
            setState(143);
            _errHandler->sync(this);
            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
            case 1: {
              setState(141);
              assign_line();
              break;
            }

            case 2: {
              setState(142);
              match(ExprParser::ID);
              break;
            }

            } 
          }
          setState(149);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
        }
        break;
      }

      case ExprParser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(150);
        match(ExprParser::T__12);
        setState(151);
        match(ExprParser::VAR_TYPE);

        setState(152);
        match(ExprParser::ID);
        setState(153);
        match(ExprParser::T__5);
        setState(155);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ExprParser::ID

        || _la == ExprParser::INT) {
          setState(154);
          _la = _input->LA(1);
          if (!(_la == ExprParser::ID

          || _la == ExprParser::INT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(157);
        match(ExprParser::T__6);
        setState(163);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ExprParser::T__5) {
          setState(158);
          match(ExprParser::T__5);
          setState(160);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == ExprParser::ID

          || _la == ExprParser::INT) {
            setState(159);
            _la = _input->LA(1);
            if (!(_la == ExprParser::ID

            || _la == ExprParser::INT)) {
            _errHandler->recoverInline(this);
            }
            else {
              _errHandler->reportMatch(this);
              consume();
            }
          }
          setState(162);
          match(ExprParser::T__6);
        }
        setState(181);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(165);
            match(ExprParser::T__11);
            setState(166);
            match(ExprParser::ID);
            setState(167);
            match(ExprParser::T__5);
            setState(169);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == ExprParser::ID

            || _la == ExprParser::INT) {
              setState(168);
              _la = _input->LA(1);
              if (!(_la == ExprParser::ID

              || _la == ExprParser::INT)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
            }
            setState(171);
            match(ExprParser::T__6);
            setState(177);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == ExprParser::T__5) {
              setState(172);
              match(ExprParser::T__5);
              setState(174);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == ExprParser::ID

              || _la == ExprParser::INT) {
                setState(173);
                _la = _input->LA(1);
                if (!(_la == ExprParser::ID

                || _la == ExprParser::INT)) {
                _errHandler->recoverInline(this);
                }
                else {
                  _errHandler->reportMatch(this);
                  consume();
                }
              }
              setState(176);
              match(ExprParser::T__6);
            } 
          }
          setState(183);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_defContext ------------------------------------------------------------------

ExprParser::Func_defContext::Func_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Func_defContext::ID() {
  return getToken(ExprParser::ID, 0);
}

ExprParser::Code_blockContext* ExprParser::Func_defContext::code_block() {
  return getRuleContext<ExprParser::Code_blockContext>(0);
}

tree::TerminalNode* ExprParser::Func_defContext::VAR_TYPE() {
  return getToken(ExprParser::VAR_TYPE, 0);
}

std::vector<ExprParser::Var_defContext *> ExprParser::Func_defContext::var_def() {
  return getRuleContexts<ExprParser::Var_defContext>();
}

ExprParser::Var_defContext* ExprParser::Func_defContext::var_def(size_t i) {
  return getRuleContext<ExprParser::Var_defContext>(i);
}


size_t ExprParser::Func_defContext::getRuleIndex() const {
  return ExprParser::RuleFunc_def;
}

void ExprParser::Func_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_def(this);
}

void ExprParser::Func_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_def(this);
}

ExprParser::Func_defContext* ExprParser::func_def() {
  Func_defContext *_localctx = _tracker.createInstance<Func_defContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleFunc_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(186);
      match(ExprParser::T__13);
      setState(187);
      match(ExprParser::ID);
      setState(188);
      match(ExprParser::T__0);
      setState(190);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::T__12

      || _la == ExprParser::VAR_TYPE) {
        setState(189);
        var_def();
      }
      setState(192);
      match(ExprParser::T__1);
      setState(193);
      match(ExprParser::T__14);
      setState(194);
      _la = _input->LA(1);
      if (!(_la == ExprParser::T__15

      || _la == ExprParser::VAR_TYPE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(195);
      code_block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(196);
      match(ExprParser::T__13);
      setState(197);
      match(ExprParser::ID);
      setState(198);
      match(ExprParser::T__0);

      setState(199);
      var_def();
      setState(204);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::T__11) {
        setState(200);
        match(ExprParser::T__11);

        setState(201);
        var_def();
        setState(206);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(207);
      match(ExprParser::T__1);
      setState(208);
      match(ExprParser::T__14);
      setState(209);
      _la = _input->LA(1);
      if (!(_la == ExprParser::T__15

      || _la == ExprParser::VAR_TYPE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(210);
      code_block();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

ExprParser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Func_callContext::ID() {
  return getToken(ExprParser::ID, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::Func_callContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Func_callContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}


size_t ExprParser::Func_callContext::getRuleIndex() const {
  return ExprParser::RuleFunc_call;
}

void ExprParser::Func_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_call(this);
}

void ExprParser::Func_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_call(this);
}

ExprParser::Func_callContext* ExprParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleFunc_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(ExprParser::ID);
    setState(215);
    match(ExprParser::T__0);
    setState(217);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__0)
      | (1ULL << ExprParser::NOT)
      | (1ULL << ExprParser::SUB)
      | (1ULL << ExprParser::ID)
      | (1ULL << ExprParser::BOOL)
      | (1ULL << ExprParser::FLOAT)
      | (1ULL << ExprParser::INT)
      | (1ULL << ExprParser::STRING))) != 0)) {
      setState(216);
      expr(0);
    }
    setState(223);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::T__11) {
      setState(219);
      match(ExprParser::T__11);

      setState(220);
      expr(0);
      setState(225);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(226);
    match(ExprParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_loopContext ------------------------------------------------------------------

ExprParser::For_loopContext::For_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Assign_lineContext *> ExprParser::For_loopContext::assign_line() {
  return getRuleContexts<ExprParser::Assign_lineContext>();
}

ExprParser::Assign_lineContext* ExprParser::For_loopContext::assign_line(size_t i) {
  return getRuleContext<ExprParser::Assign_lineContext>(i);
}

ExprParser::Cond_lineContext* ExprParser::For_loopContext::cond_line() {
  return getRuleContext<ExprParser::Cond_lineContext>(0);
}

ExprParser::Code_blockContext* ExprParser::For_loopContext::code_block() {
  return getRuleContext<ExprParser::Code_blockContext>(0);
}


size_t ExprParser::For_loopContext::getRuleIndex() const {
  return ExprParser::RuleFor_loop;
}

void ExprParser::For_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_loop(this);
}

void ExprParser::For_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_loop(this);
}

ExprParser::For_loopContext* ExprParser::for_loop() {
  For_loopContext *_localctx = _tracker.createInstance<For_loopContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleFor_loop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    match(ExprParser::T__16);
    setState(229);
    match(ExprParser::T__0);
    setState(230);
    assign_line();
    setState(231);
    match(ExprParser::T__17);
    setState(232);
    cond_line(0);
    setState(233);
    match(ExprParser::T__17);
    setState(234);
    assign_line();
    setState(235);
    match(ExprParser::T__1);
    setState(236);
    code_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_loopContext ------------------------------------------------------------------

ExprParser::While_loopContext::While_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Cond_lineContext* ExprParser::While_loopContext::cond_line() {
  return getRuleContext<ExprParser::Cond_lineContext>(0);
}

ExprParser::Code_blockContext* ExprParser::While_loopContext::code_block() {
  return getRuleContext<ExprParser::Code_blockContext>(0);
}


size_t ExprParser::While_loopContext::getRuleIndex() const {
  return ExprParser::RuleWhile_loop;
}

void ExprParser::While_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_loop(this);
}

void ExprParser::While_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_loop(this);
}

ExprParser::While_loopContext* ExprParser::while_loop() {
  While_loopContext *_localctx = _tracker.createInstance<While_loopContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleWhile_loop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(ExprParser::T__18);
    setState(239);
    match(ExprParser::T__0);
    setState(240);
    cond_line(0);
    setState(241);
    match(ExprParser::T__1);
    setState(242);
    code_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_conditionContext ------------------------------------------------------------------

ExprParser::If_conditionContext::If_conditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Cond_lineContext *> ExprParser::If_conditionContext::cond_line() {
  return getRuleContexts<ExprParser::Cond_lineContext>();
}

ExprParser::Cond_lineContext* ExprParser::If_conditionContext::cond_line(size_t i) {
  return getRuleContext<ExprParser::Cond_lineContext>(i);
}

std::vector<ExprParser::Code_blockContext *> ExprParser::If_conditionContext::code_block() {
  return getRuleContexts<ExprParser::Code_blockContext>();
}

ExprParser::Code_blockContext* ExprParser::If_conditionContext::code_block(size_t i) {
  return getRuleContext<ExprParser::Code_blockContext>(i);
}


size_t ExprParser::If_conditionContext::getRuleIndex() const {
  return ExprParser::RuleIf_condition;
}

void ExprParser::If_conditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_condition(this);
}

void ExprParser::If_conditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_condition(this);
}

ExprParser::If_conditionContext* ExprParser::if_condition() {
  If_conditionContext *_localctx = _tracker.createInstance<If_conditionContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleIf_condition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(ExprParser::T__19);
    setState(245);
    match(ExprParser::T__0);
    setState(246);
    cond_line(0);
    setState(247);
    match(ExprParser::T__1);
    setState(248);
    code_block();
    setState(257);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::T__20) {
      setState(249);
      match(ExprParser::T__20);
      setState(250);
      match(ExprParser::T__0);
      setState(251);
      cond_line(0);
      setState(252);
      match(ExprParser::T__1);
      setState(253);
      code_block();
      setState(259);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(262);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::T__21) {
      setState(260);
      match(ExprParser::T__21);
      setState(261);
      code_block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cond_lineContext ------------------------------------------------------------------

ExprParser::Cond_lineContext::Cond_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Cond_lineContext *> ExprParser::Cond_lineContext::cond_line() {
  return getRuleContexts<ExprParser::Cond_lineContext>();
}

ExprParser::Cond_lineContext* ExprParser::Cond_lineContext::cond_line(size_t i) {
  return getRuleContext<ExprParser::Cond_lineContext>(i);
}

std::vector<ExprParser::ExprContext *> ExprParser::Cond_lineContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Cond_lineContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::Cond_lineContext::REL_OP() {
  return getToken(ExprParser::REL_OP, 0);
}

tree::TerminalNode* ExprParser::Cond_lineContext::EQ_OP() {
  return getToken(ExprParser::EQ_OP, 0);
}

tree::TerminalNode* ExprParser::Cond_lineContext::BOOL() {
  return getToken(ExprParser::BOOL, 0);
}

tree::TerminalNode* ExprParser::Cond_lineContext::AND() {
  return getToken(ExprParser::AND, 0);
}

tree::TerminalNode* ExprParser::Cond_lineContext::OR() {
  return getToken(ExprParser::OR, 0);
}


size_t ExprParser::Cond_lineContext::getRuleIndex() const {
  return ExprParser::RuleCond_line;
}

void ExprParser::Cond_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond_line(this);
}

void ExprParser::Cond_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond_line(this);
}


ExprParser::Cond_lineContext* ExprParser::cond_line() {
   return cond_line(0);
}

ExprParser::Cond_lineContext* ExprParser::cond_line(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::Cond_lineContext *_localctx = _tracker.createInstance<Cond_lineContext>(_ctx, parentState);
  ExprParser::Cond_lineContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, ExprParser::RuleCond_line, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(265);
      match(ExprParser::T__0);
      setState(266);
      cond_line(0);
      setState(267);
      match(ExprParser::T__1);
      break;
    }

    case 2: {
      setState(269);
      expr(0);
      setState(270);
      _la = _input->LA(1);
      if (!(_la == ExprParser::REL_OP

      || _la == ExprParser::EQ_OP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(271);
      expr(0);
      break;
    }

    case 3: {
      setState(273);
      expr(0);
      break;
    }

    case 4: {
      setState(274);
      match(ExprParser::BOOL);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(285);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(283);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Cond_lineContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCond_line);
          setState(277);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(278);
          match(ExprParser::AND);
          setState(279);
          cond_line(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Cond_lineContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCond_line);
          setState(280);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(281);
          match(ExprParser::OR);
          setState(282);
          cond_line(5);
          break;
        }

        } 
      }
      setState(287);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Stdin_lineContext ------------------------------------------------------------------

ExprParser::Stdin_lineContext::Stdin_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ExprContext *> ExprParser::Stdin_lineContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Stdin_lineContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}


size_t ExprParser::Stdin_lineContext::getRuleIndex() const {
  return ExprParser::RuleStdin_line;
}

void ExprParser::Stdin_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStdin_line(this);
}

void ExprParser::Stdin_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStdin_line(this);
}

ExprParser::Stdin_lineContext* ExprParser::stdin_line() {
  Stdin_lineContext *_localctx = _tracker.createInstance<Stdin_lineContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprParser::RuleStdin_line);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(314);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__22: {
        enterOuterAlt(_localctx, 1);
        setState(288);
        match(ExprParser::T__22);
        setState(289);
        match(ExprParser::T__0);
        setState(291);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExprParser::T__0)
          | (1ULL << ExprParser::NOT)
          | (1ULL << ExprParser::SUB)
          | (1ULL << ExprParser::ID)
          | (1ULL << ExprParser::BOOL)
          | (1ULL << ExprParser::FLOAT)
          | (1ULL << ExprParser::INT)
          | (1ULL << ExprParser::STRING))) != 0)) {
          setState(290);
          expr(0);
        }
        setState(297);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ExprParser::T__11) {
          setState(293);
          match(ExprParser::T__11);

          setState(294);
          expr(0);
          setState(299);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(300);
        match(ExprParser::T__1);
        break;
      }

      case ExprParser::T__23: {
        enterOuterAlt(_localctx, 2);
        setState(301);
        match(ExprParser::T__23);
        setState(302);
        match(ExprParser::T__0);
        setState(304);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExprParser::T__0)
          | (1ULL << ExprParser::NOT)
          | (1ULL << ExprParser::SUB)
          | (1ULL << ExprParser::ID)
          | (1ULL << ExprParser::BOOL)
          | (1ULL << ExprParser::FLOAT)
          | (1ULL << ExprParser::INT)
          | (1ULL << ExprParser::STRING))) != 0)) {
          setState(303);
          expr(0);
        }
        setState(310);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ExprParser::T__11) {
          setState(306);
          match(ExprParser::T__11);

          setState(307);
          expr(0);
          setState(312);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(313);
        match(ExprParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ret_lineContext ------------------------------------------------------------------

ExprParser::Ret_lineContext::Ret_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExprContext* ExprParser::Ret_lineContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::Ret_lineContext::getRuleIndex() const {
  return ExprParser::RuleRet_line;
}

void ExprParser::Ret_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRet_line(this);
}

void ExprParser::Ret_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRet_line(this);
}

ExprParser::Ret_lineContext* ExprParser::ret_line() {
  Ret_lineContext *_localctx = _tracker.createInstance<Ret_lineContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprParser::RuleRet_line);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(ExprParser::T__24);
    setState(318);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__0)
      | (1ULL << ExprParser::NOT)
      | (1ULL << ExprParser::SUB)
      | (1ULL << ExprParser::ID)
      | (1ULL << ExprParser::BOOL)
      | (1ULL << ExprParser::FLOAT)
      | (1ULL << ExprParser::INT)
      | (1ULL << ExprParser::STRING))) != 0)) {
      setState(317);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_accessContext ------------------------------------------------------------------

ExprParser::Array_accessContext::Array_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Array_accessContext::ID() {
  return getToken(ExprParser::ID, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::Array_accessContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Array_accessContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}


size_t ExprParser::Array_accessContext::getRuleIndex() const {
  return ExprParser::RuleArray_access;
}

void ExprParser::Array_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_access(this);
}

void ExprParser::Array_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_access(this);
}

ExprParser::Array_accessContext* ExprParser::array_access() {
  Array_accessContext *_localctx = _tracker.createInstance<Array_accessContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprParser::RuleArray_access);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    match(ExprParser::ID);

    setState(321);
    match(ExprParser::T__5);
    setState(322);
    expr(0);
    setState(323);
    match(ExprParser::T__6);
    setState(329);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(325);
      match(ExprParser::T__5);
      setState(326);
      expr(0);
      setState(327);
      match(ExprParser::T__6);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

ExprParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::LiteralContext::INT() {
  return getToken(ExprParser::INT, 0);
}

tree::TerminalNode* ExprParser::LiteralContext::FLOAT() {
  return getToken(ExprParser::FLOAT, 0);
}

tree::TerminalNode* ExprParser::LiteralContext::BOOL() {
  return getToken(ExprParser::BOOL, 0);
}

tree::TerminalNode* ExprParser::LiteralContext::STRING() {
  return getToken(ExprParser::STRING, 0);
}


size_t ExprParser::LiteralContext::getRuleIndex() const {
  return ExprParser::RuleLiteral;
}

void ExprParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void ExprParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

ExprParser::LiteralContext* ExprParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::BOOL)
      | (1ULL << ExprParser::FLOAT)
      | (1ULL << ExprParser::INT)
      | (1ULL << ExprParser::STRING))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 12: return cond_lineSempred(dynamic_cast<Cond_lineContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 11);
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 9);
    case 4: return precpred(_ctx, 8);
    case 5: return precpred(_ctx, 7);
    case 6: return precpred(_ctx, 6);
    case 7: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

bool ExprParser::cond_lineSempred(Cond_lineContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 5);
    case 9: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "prog", "expr", "assign_line", "code_block", "line", "declaration", "var_def", 
  "func_def", "func_call", "for_loop", "while_loop", "if_condition", "cond_line", 
  "stdin_line", "ret_line", "array_access", "literal"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'('", "')'", "'^'", "'?'", "':'", "'['", "']'", "'{'", "'Break'", 
  "'Continue'", "'}'", "','", "'Array'", "'Function'", "'Returns'", "'Void'", 
  "'For'", "';'", "'While'", "'If'", "'Elif'", "'Else'", "'Printf'", "'Scanf'", 
  "'Return'", "", "", "", "", "'Not'", "'And'", "'Or'", "'+'", "'-'", "'*'", 
  "'/'", "'%'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "VAR_TYPE", "REL_OP", "EQ_OP", "ASSIGN_OP", 
  "NOT", "AND", "OR", "ADD", "SUB", "MUL", "DIV", "MOD", "ID", "BOOL", "FLOAT", 
  "INT", "STRING", "COMMENT", "NS"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
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
    0x3, 0x2e, 0x150, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x3, 0x2, 0x6, 0x2, 0x26, 0xa, 0x2, 0xd, 0x2, 0xe, 
    0x2, 0x27, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x39, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x56, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x59, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x60, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x66, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x7, 0x5, 0x6d, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x70, 0xb, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x73, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x76, 0xa, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x79, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x84, 0xa, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x88, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x8d, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x92, 0xa, 0x8, 0x7, 0x8, 0x94, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x97, 
    0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x9e, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xa3, 0xa, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xa6, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0xac, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xb1, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0xb4, 0xa, 0x8, 0x7, 0x8, 0xb6, 
    0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xb9, 0xb, 0x8, 0x5, 0x8, 0xbb, 0xa, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xc1, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0xcd, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 
    0xd0, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0xd7, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xdc, 0xa, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xe0, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 
    0xe3, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x102, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
    0x105, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x109, 0xa, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x116, 0xa, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x11e, 0xa, 
    0xe, 0xc, 0xe, 0xe, 0xe, 0x121, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0x126, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x12a, 0xa, 
    0xf, 0xc, 0xf, 0xe, 0xf, 0x12d, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0x133, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x137, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x13a, 0xb, 0xf, 0x3, 0xf, 0x5, 0xf, 0x13d, 
    0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x141, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0x14c, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x2, 0x4, 0x4, 0x1a, 0x13, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x2, 
    0x8, 0x3, 0x2, 0x25, 0x27, 0x3, 0x2, 0x23, 0x24, 0x4, 0x2, 0x28, 0x28, 
    0x2b, 0x2b, 0x4, 0x2, 0x12, 0x12, 0x1c, 0x1c, 0x3, 0x2, 0x1d, 0x1e, 
    0x3, 0x2, 0x29, 0x2c, 0x2, 0x178, 0x2, 0x25, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x6, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x83, 0x3, 0x2, 0x2, 0x2, 0xc, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xba, 0x3, 0x2, 0x2, 0x2, 0x10, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x14, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x18, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x13e, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x142, 0x3, 0x2, 0x2, 0x2, 0x22, 0x14d, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x26, 0x5, 0xc, 0x7, 0x2, 0x25, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0x2a, 0x7, 0x2, 0x2, 0x3, 0x2a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0x2c, 0x8, 0x3, 0x1, 0x2, 0x2c, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2d, 0x2e, 
    0x5, 0x4, 0x3, 0x2, 0x2e, 0x2f, 0x7, 0x4, 0x2, 0x2, 0x2f, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0x20, 0x2, 0x2, 0x31, 0x39, 0x5, 0x4, 
    0x3, 0xf, 0x32, 0x33, 0x7, 0x24, 0x2, 0x2, 0x33, 0x39, 0x5, 0x4, 0x3, 
    0xe, 0x34, 0x39, 0x5, 0x12, 0xa, 0x2, 0x35, 0x39, 0x5, 0x20, 0x11, 0x2, 
    0x36, 0x39, 0x7, 0x28, 0x2, 0x2, 0x37, 0x39, 0x5, 0x22, 0x12, 0x2, 0x38, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x38, 0x30, 0x3, 0x2, 0x2, 0x2, 0x38, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x34, 0x3, 0x2, 0x2, 0x2, 0x38, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x57, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0xc, 0x10, 0x2, 
    0x2, 0x3b, 0x3c, 0x7, 0x5, 0x2, 0x2, 0x3c, 0x56, 0x5, 0x4, 0x3, 0x11, 
    0x3d, 0x3e, 0xc, 0xd, 0x2, 0x2, 0x3e, 0x3f, 0x9, 0x2, 0x2, 0x2, 0x3f, 
    0x56, 0x5, 0x4, 0x3, 0xe, 0x40, 0x41, 0xc, 0xc, 0x2, 0x2, 0x41, 0x42, 
    0x9, 0x3, 0x2, 0x2, 0x42, 0x56, 0x5, 0x4, 0x3, 0xd, 0x43, 0x44, 0xc, 
    0xb, 0x2, 0x2, 0x44, 0x45, 0x7, 0x1d, 0x2, 0x2, 0x45, 0x56, 0x5, 0x4, 
    0x3, 0xc, 0x46, 0x47, 0xc, 0xa, 0x2, 0x2, 0x47, 0x48, 0x7, 0x1e, 0x2, 
    0x2, 0x48, 0x56, 0x5, 0x4, 0x3, 0xb, 0x49, 0x4a, 0xc, 0x9, 0x2, 0x2, 
    0x4a, 0x4b, 0x7, 0x21, 0x2, 0x2, 0x4b, 0x56, 0x5, 0x4, 0x3, 0xa, 0x4c, 
    0x4d, 0xc, 0x8, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x22, 0x2, 0x2, 0x4e, 0x56, 
    0x5, 0x4, 0x3, 0x9, 0x4f, 0x50, 0xc, 0x7, 0x2, 0x2, 0x50, 0x51, 0x7, 
    0x6, 0x2, 0x2, 0x51, 0x52, 0x5, 0x4, 0x3, 0x2, 0x52, 0x53, 0x7, 0x7, 
    0x2, 0x2, 0x53, 0x54, 0x5, 0x4, 0x3, 0x8, 0x54, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x55, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x55, 0x40, 0x3, 0x2, 0x2, 0x2, 0x55, 0x43, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x55, 0x49, 0x3, 0x2, 0x2, 0x2, 0x55, 0x4c, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x56, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x5, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x5f, 0x7, 0x28, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x8, 0x2, 0x2, 
    0x5c, 0x5d, 0x5, 0x4, 0x3, 0x2, 0x5d, 0x5e, 0x7, 0x9, 0x2, 0x2, 0x5e, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x65, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 
    0x8, 0x2, 0x2, 0x62, 0x63, 0x5, 0x4, 0x3, 0x2, 0x63, 0x64, 0x7, 0x9, 
    0x2, 0x2, 0x64, 0x66, 0x3, 0x2, 0x2, 0x2, 0x65, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x68, 0x7, 0x1f, 0x2, 0x2, 0x68, 0x69, 0x5, 0x4, 0x3, 0x2, 0x69, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6e, 0x7, 0xa, 0x2, 0x2, 0x6b, 0x6d, 
    0x5, 0xa, 0x6, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x72, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x73, 0x5, 0x1e, 0x10, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x76, 0x7, 0xb, 0x2, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x3, 0x2, 0x2, 0x2, 0x77, 0x79, 0x7, 
    0xc, 0x2, 0x2, 0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0xd, 0x2, 
    0x2, 0x7b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x84, 0x5, 0xc, 0x7, 0x2, 
    0x7d, 0x84, 0x5, 0x4, 0x3, 0x2, 0x7e, 0x84, 0x5, 0x14, 0xb, 0x2, 0x7f, 
    0x84, 0x5, 0x16, 0xc, 0x2, 0x80, 0x84, 0x5, 0x18, 0xd, 0x2, 0x81, 0x84, 
    0x5, 0x6, 0x4, 0x2, 0x82, 0x84, 0x5, 0x1c, 0xf, 0x2, 0x83, 0x7c, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x83, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x83, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x84, 0xb, 0x3, 0x2, 0x2, 0x2, 0x85, 0x88, 0x5, 0xe, 0x8, 0x2, 0x86, 
    0x88, 0x5, 0x10, 0x9, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0xd, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x7, 
    0x1c, 0x2, 0x2, 0x8a, 0x8d, 0x5, 0x6, 0x4, 0x2, 0x8b, 0x8d, 0x7, 0x28, 
    0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x8d, 0x95, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x91, 0x7, 0xe, 0x2, 0x2, 
    0x8f, 0x92, 0x5, 0x6, 0x4, 0x2, 0x90, 0x92, 0x7, 0x28, 0x2, 0x2, 0x91, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x93, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x94, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x99, 0x7, 0xf, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x1c, 0x2, 0x2, 
    0x9a, 0x9b, 0x7, 0x28, 0x2, 0x2, 0x9b, 0x9d, 0x7, 0x8, 0x2, 0x2, 0x9c, 
    0x9e, 0x9, 0x4, 0x2, 0x2, 0x9d, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 
    0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa5, 0x7, 
    0x9, 0x2, 0x2, 0xa0, 0xa2, 0x7, 0x8, 0x2, 0x2, 0xa1, 0xa3, 0x9, 0x4, 
    0x2, 0x2, 0xa2, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x7, 0x9, 0x2, 0x2, 
    0xa5, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0xe, 0x2, 0x2, 0xa8, 0xa9, 
    0x7, 0x28, 0x2, 0x2, 0xa9, 0xab, 0x7, 0x8, 0x2, 0x2, 0xaa, 0xac, 0x9, 
    0x4, 0x2, 0x2, 0xab, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb3, 0x7, 0x9, 0x2, 
    0x2, 0xae, 0xb0, 0x7, 0x8, 0x2, 0x2, 0xaf, 0xb1, 0x9, 0x4, 0x2, 0x2, 
    0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb4, 0x7, 0x9, 0x2, 0x2, 0xb3, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0x89, 0x3, 0x2, 0x2, 0x2, 0xba, 0x98, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x10, 0x2, 0x2, 0xbd, 0xbe, 
    0x7, 0x28, 0x2, 0x2, 0xbe, 0xc0, 0x7, 0x3, 0x2, 0x2, 0xbf, 0xc1, 0x5, 
    0xe, 0x8, 0x2, 0xc0, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x4, 0x2, 
    0x2, 0xc3, 0xc4, 0x7, 0x11, 0x2, 0x2, 0xc4, 0xc5, 0x9, 0x5, 0x2, 0x2, 
    0xc5, 0xd7, 0x5, 0x8, 0x5, 0x2, 0xc6, 0xc7, 0x7, 0x10, 0x2, 0x2, 0xc7, 
    0xc8, 0x7, 0x28, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x3, 0x2, 0x2, 0xc9, 0xce, 
    0x5, 0xe, 0x8, 0x2, 0xca, 0xcb, 0x7, 0xe, 0x2, 0x2, 0xcb, 0xcd, 0x5, 
    0xe, 0x8, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xcf, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xd2, 0x7, 0x4, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x11, 0x2, 0x2, 0xd3, 
    0xd4, 0x9, 0x5, 0x2, 0x2, 0xd4, 0xd5, 0x5, 0x8, 0x5, 0x2, 0xd5, 0xd7, 
    0x3, 0x2, 0x2, 0x2, 0xd6, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0xd7, 0x11, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x28, 
    0x2, 0x2, 0xd9, 0xdb, 0x7, 0x3, 0x2, 0x2, 0xda, 0xdc, 0x5, 0x4, 0x3, 
    0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0xe, 0x2, 0x2, 0xde, 
    0xe0, 0x5, 0x4, 0x3, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe3, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe2, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xe5, 0x7, 0x4, 0x2, 0x2, 0xe5, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0xe6, 0xe7, 0x7, 0x13, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x3, 0x2, 0x2, 
    0xe8, 0xe9, 0x5, 0x6, 0x4, 0x2, 0xe9, 0xea, 0x7, 0x14, 0x2, 0x2, 0xea, 
    0xeb, 0x5, 0x1a, 0xe, 0x2, 0xeb, 0xec, 0x7, 0x14, 0x2, 0x2, 0xec, 0xed, 
    0x5, 0x6, 0x4, 0x2, 0xed, 0xee, 0x7, 0x4, 0x2, 0x2, 0xee, 0xef, 0x5, 
    0x8, 0x5, 0x2, 0xef, 0x15, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x15, 
    0x2, 0x2, 0xf1, 0xf2, 0x7, 0x3, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0x1a, 0xe, 
    0x2, 0xf3, 0xf4, 0x7, 0x4, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x8, 0x5, 0x2, 
    0xf5, 0x17, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x16, 0x2, 0x2, 0xf7, 
    0xf8, 0x7, 0x3, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x1a, 0xe, 0x2, 0xf9, 0xfa, 
    0x7, 0x4, 0x2, 0x2, 0xfa, 0x103, 0x5, 0x8, 0x5, 0x2, 0xfb, 0xfc, 0x7, 
    0x17, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x3, 0x2, 0x2, 0xfd, 0xfe, 0x5, 0x1a, 
    0xe, 0x2, 0xfe, 0xff, 0x7, 0x4, 0x2, 0x2, 0xff, 0x100, 0x5, 0x8, 0x5, 
    0x2, 0x100, 0x102, 0x3, 0x2, 0x2, 0x2, 0x101, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x105, 0x3, 0x2, 0x2, 0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x108, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x7, 0x18, 0x2, 0x2, 
    0x107, 0x109, 0x5, 0x8, 0x5, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x19, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x10b, 0x8, 0xe, 0x1, 0x2, 0x10b, 0x10c, 0x7, 0x3, 0x2, 0x2, 0x10c, 
    0x10d, 0x5, 0x1a, 0xe, 0x2, 0x10d, 0x10e, 0x7, 0x4, 0x2, 0x2, 0x10e, 
    0x116, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x5, 0x4, 0x3, 0x2, 0x110, 
    0x111, 0x9, 0x6, 0x2, 0x2, 0x111, 0x112, 0x5, 0x4, 0x3, 0x2, 0x112, 
    0x116, 0x3, 0x2, 0x2, 0x2, 0x113, 0x116, 0x5, 0x4, 0x3, 0x2, 0x114, 
    0x116, 0x7, 0x29, 0x2, 0x2, 0x115, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x115, 
    0x10f, 0x3, 0x2, 0x2, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x115, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x117, 
    0x118, 0xc, 0x7, 0x2, 0x2, 0x118, 0x119, 0x7, 0x21, 0x2, 0x2, 0x119, 
    0x11e, 0x5, 0x1a, 0xe, 0x8, 0x11a, 0x11b, 0xc, 0x6, 0x2, 0x2, 0x11b, 
    0x11c, 0x7, 0x22, 0x2, 0x2, 0x11c, 0x11e, 0x5, 0x1a, 0xe, 0x7, 0x11d, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x121, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 
    0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x121, 0x11f, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x7, 0x19, 0x2, 0x2, 0x123, 0x125, 
    0x7, 0x3, 0x2, 0x2, 0x124, 0x126, 0x5, 0x4, 0x3, 0x2, 0x125, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x7, 0xe, 0x2, 0x2, 0x128, 0x12a, 
    0x5, 0x4, 0x3, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x13d, 0x7, 0x4, 0x2, 0x2, 0x12f, 0x130, 
    0x7, 0x1a, 0x2, 0x2, 0x130, 0x132, 0x7, 0x3, 0x2, 0x2, 0x131, 0x133, 
    0x5, 0x4, 0x3, 0x2, 0x132, 0x131, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x133, 0x138, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 
    0x7, 0xe, 0x2, 0x2, 0x135, 0x137, 0x5, 0x4, 0x3, 0x2, 0x136, 0x134, 
    0x3, 0x2, 0x2, 0x2, 0x137, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13d, 
    0x7, 0x4, 0x2, 0x2, 0x13c, 0x122, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x12f, 
    0x3, 0x2, 0x2, 0x2, 0x13d, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x140, 0x7, 
    0x1b, 0x2, 0x2, 0x13f, 0x141, 0x5, 0x4, 0x3, 0x2, 0x140, 0x13f, 0x3, 
    0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x143, 0x7, 0x28, 0x2, 0x2, 0x143, 0x144, 0x7, 0x8, 
    0x2, 0x2, 0x144, 0x145, 0x5, 0x4, 0x3, 0x2, 0x145, 0x146, 0x7, 0x9, 
    0x2, 0x2, 0x146, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x7, 0x8, 
    0x2, 0x2, 0x148, 0x149, 0x5, 0x4, 0x3, 0x2, 0x149, 0x14a, 0x7, 0x9, 
    0x2, 0x2, 0x14a, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x14d, 0x14e, 0x9, 0x7, 0x2, 0x2, 0x14e, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x27, 0x38, 0x55, 0x57, 0x5f, 0x65, 0x6e, 0x72, 0x75, 0x78, 0x83, 
    0x87, 0x8c, 0x91, 0x95, 0x9d, 0xa2, 0xa5, 0xab, 0xb0, 0xb3, 0xb7, 0xba, 
    0xc0, 0xce, 0xd6, 0xdb, 0xe1, 0x103, 0x108, 0x115, 0x11d, 0x11f, 0x125, 
    0x12b, 0x132, 0x138, 0x13c, 0x140, 0x14b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
