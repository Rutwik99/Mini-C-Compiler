
// Generated from Expr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(ExprParser::ProgContext *ctx) = 0;
  virtual void exitProg(ExprParser::ProgContext *ctx) = 0;

  virtual void enterExpr(ExprParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ExprParser::ExprContext *ctx) = 0;

  virtual void enterAssign_line(ExprParser::Assign_lineContext *ctx) = 0;
  virtual void exitAssign_line(ExprParser::Assign_lineContext *ctx) = 0;

  virtual void enterCode_block(ExprParser::Code_blockContext *ctx) = 0;
  virtual void exitCode_block(ExprParser::Code_blockContext *ctx) = 0;

  virtual void enterLine(ExprParser::LineContext *ctx) = 0;
  virtual void exitLine(ExprParser::LineContext *ctx) = 0;

  virtual void enterDeclaration(ExprParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(ExprParser::DeclarationContext *ctx) = 0;

  virtual void enterVar_def(ExprParser::Var_defContext *ctx) = 0;
  virtual void exitVar_def(ExprParser::Var_defContext *ctx) = 0;

  virtual void enterFunc_def(ExprParser::Func_defContext *ctx) = 0;
  virtual void exitFunc_def(ExprParser::Func_defContext *ctx) = 0;

  virtual void enterFunc_call(ExprParser::Func_callContext *ctx) = 0;
  virtual void exitFunc_call(ExprParser::Func_callContext *ctx) = 0;

  virtual void enterFor_loop(ExprParser::For_loopContext *ctx) = 0;
  virtual void exitFor_loop(ExprParser::For_loopContext *ctx) = 0;

  virtual void enterWhile_loop(ExprParser::While_loopContext *ctx) = 0;
  virtual void exitWhile_loop(ExprParser::While_loopContext *ctx) = 0;

  virtual void enterIf_condition(ExprParser::If_conditionContext *ctx) = 0;
  virtual void exitIf_condition(ExprParser::If_conditionContext *ctx) = 0;

  virtual void enterCond_line(ExprParser::Cond_lineContext *ctx) = 0;
  virtual void exitCond_line(ExprParser::Cond_lineContext *ctx) = 0;

  virtual void enterStdin_line(ExprParser::Stdin_lineContext *ctx) = 0;
  virtual void exitStdin_line(ExprParser::Stdin_lineContext *ctx) = 0;

  virtual void enterRet_line(ExprParser::Ret_lineContext *ctx) = 0;
  virtual void exitRet_line(ExprParser::Ret_lineContext *ctx) = 0;

  virtual void enterArray_access(ExprParser::Array_accessContext *ctx) = 0;
  virtual void exitArray_access(ExprParser::Array_accessContext *ctx) = 0;

  virtual void enterLiteral(ExprParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(ExprParser::LiteralContext *ctx) = 0;


};

