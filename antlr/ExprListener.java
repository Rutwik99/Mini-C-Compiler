// Generated from Expr.g4 by ANTLR 4.8
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ExprParser}.
 */
public interface ExprListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ExprParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(ExprParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(ExprParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(ExprParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(ExprParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#assign_line}.
	 * @param ctx the parse tree
	 */
	void enterAssign_line(ExprParser.Assign_lineContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#assign_line}.
	 * @param ctx the parse tree
	 */
	void exitAssign_line(ExprParser.Assign_lineContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#code_block}.
	 * @param ctx the parse tree
	 */
	void enterCode_block(ExprParser.Code_blockContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#code_block}.
	 * @param ctx the parse tree
	 */
	void exitCode_block(ExprParser.Code_blockContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#line}.
	 * @param ctx the parse tree
	 */
	void enterLine(ExprParser.LineContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#line}.
	 * @param ctx the parse tree
	 */
	void exitLine(ExprParser.LineContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#declaration}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(ExprParser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#declaration}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(ExprParser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#var_def}.
	 * @param ctx the parse tree
	 */
	void enterVar_def(ExprParser.Var_defContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#var_def}.
	 * @param ctx the parse tree
	 */
	void exitVar_def(ExprParser.Var_defContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#func_def}.
	 * @param ctx the parse tree
	 */
	void enterFunc_def(ExprParser.Func_defContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#func_def}.
	 * @param ctx the parse tree
	 */
	void exitFunc_def(ExprParser.Func_defContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#func_call}.
	 * @param ctx the parse tree
	 */
	void enterFunc_call(ExprParser.Func_callContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#func_call}.
	 * @param ctx the parse tree
	 */
	void exitFunc_call(ExprParser.Func_callContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#for_loop}.
	 * @param ctx the parse tree
	 */
	void enterFor_loop(ExprParser.For_loopContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#for_loop}.
	 * @param ctx the parse tree
	 */
	void exitFor_loop(ExprParser.For_loopContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#while_loop}.
	 * @param ctx the parse tree
	 */
	void enterWhile_loop(ExprParser.While_loopContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#while_loop}.
	 * @param ctx the parse tree
	 */
	void exitWhile_loop(ExprParser.While_loopContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#if_condition}.
	 * @param ctx the parse tree
	 */
	void enterIf_condition(ExprParser.If_conditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#if_condition}.
	 * @param ctx the parse tree
	 */
	void exitIf_condition(ExprParser.If_conditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#cond_line}.
	 * @param ctx the parse tree
	 */
	void enterCond_line(ExprParser.Cond_lineContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#cond_line}.
	 * @param ctx the parse tree
	 */
	void exitCond_line(ExprParser.Cond_lineContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#stdin_line}.
	 * @param ctx the parse tree
	 */
	void enterStdin_line(ExprParser.Stdin_lineContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#stdin_line}.
	 * @param ctx the parse tree
	 */
	void exitStdin_line(ExprParser.Stdin_lineContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#ret_line}.
	 * @param ctx the parse tree
	 */
	void enterRet_line(ExprParser.Ret_lineContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#ret_line}.
	 * @param ctx the parse tree
	 */
	void exitRet_line(ExprParser.Ret_lineContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#array_access}.
	 * @param ctx the parse tree
	 */
	void enterArray_access(ExprParser.Array_accessContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#array_access}.
	 * @param ctx the parse tree
	 */
	void exitArray_access(ExprParser.Array_accessContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprParser#literal}.
	 * @param ctx the parse tree
	 */
	void enterLiteral(ExprParser.LiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprParser#literal}.
	 * @param ctx the parse tree
	 */
	void exitLiteral(ExprParser.LiteralContext ctx);
}