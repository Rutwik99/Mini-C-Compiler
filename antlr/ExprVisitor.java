// Generated from Expr.g4 by ANTLR 4.8
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link ExprParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface ExprVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link ExprParser#prog}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitProg(ExprParser.ProgContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr(ExprParser.ExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#assign_line}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssign_line(ExprParser.Assign_lineContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#code_block}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCode_block(ExprParser.Code_blockContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#line}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLine(ExprParser.LineContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#declaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDeclaration(ExprParser.DeclarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#var_def}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVar_def(ExprParser.Var_defContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#func_def}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunc_def(ExprParser.Func_defContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#func_call}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunc_call(ExprParser.Func_callContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#for_loop}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFor_loop(ExprParser.For_loopContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#while_loop}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWhile_loop(ExprParser.While_loopContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#if_condition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIf_condition(ExprParser.If_conditionContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#cond_line}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCond_line(ExprParser.Cond_lineContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#stdin_line}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStdin_line(ExprParser.Stdin_lineContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#ret_line}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRet_line(ExprParser.Ret_lineContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#array_access}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitArray_access(ExprParser.Array_accessContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprParser#literal}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLiteral(ExprParser.LiteralContext ctx);
}