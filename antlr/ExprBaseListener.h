
// Generated from Expr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ExprListener.h"


/**
 * This class provides an empty implementation of ExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprBaseListener : public ExprListener {
public:

  virtual void enterProg(ExprParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(ExprParser::ProgContext * /*ctx*/) override { }

  virtual void enterExpr(ExprParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ExprParser::ExprContext * /*ctx*/) override { }

  virtual void enterAssign_line(ExprParser::Assign_lineContext * /*ctx*/) override { }
  virtual void exitAssign_line(ExprParser::Assign_lineContext * /*ctx*/) override { }

  virtual void enterCode_block(ExprParser::Code_blockContext * /*ctx*/) override { }
  virtual void exitCode_block(ExprParser::Code_blockContext * /*ctx*/) override { }

  virtual void enterLine(ExprParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(ExprParser::LineContext * /*ctx*/) override { }

  virtual void enterDeclaration(ExprParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(ExprParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterVar_def(ExprParser::Var_defContext * /*ctx*/) override { }
  virtual void exitVar_def(ExprParser::Var_defContext * /*ctx*/) override { }

  virtual void enterFunc_def(ExprParser::Func_defContext * /*ctx*/) override { }
  virtual void exitFunc_def(ExprParser::Func_defContext * /*ctx*/) override { }

  virtual void enterFunc_call(ExprParser::Func_callContext * /*ctx*/) override { }
  virtual void exitFunc_call(ExprParser::Func_callContext * /*ctx*/) override { }

  virtual void enterFor_loop(ExprParser::For_loopContext * /*ctx*/) override { }
  virtual void exitFor_loop(ExprParser::For_loopContext * /*ctx*/) override { }

  virtual void enterWhile_loop(ExprParser::While_loopContext * /*ctx*/) override { }
  virtual void exitWhile_loop(ExprParser::While_loopContext * /*ctx*/) override { }

  virtual void enterIf_condition(ExprParser::If_conditionContext * /*ctx*/) override { }
  virtual void exitIf_condition(ExprParser::If_conditionContext * /*ctx*/) override { }

  virtual void enterCond_line(ExprParser::Cond_lineContext * /*ctx*/) override { }
  virtual void exitCond_line(ExprParser::Cond_lineContext * /*ctx*/) override { }

  virtual void enterStdin_line(ExprParser::Stdin_lineContext * /*ctx*/) override { }
  virtual void exitStdin_line(ExprParser::Stdin_lineContext * /*ctx*/) override { }

  virtual void enterRet_line(ExprParser::Ret_lineContext * /*ctx*/) override { }
  virtual void exitRet_line(ExprParser::Ret_lineContext * /*ctx*/) override { }

  virtual void enterArray_access(ExprParser::Array_accessContext * /*ctx*/) override { }
  virtual void exitArray_access(ExprParser::Array_accessContext * /*ctx*/) override { }

  virtual void enterLiteral(ExprParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(ExprParser::LiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

