// Generated from PascalLite.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link PascalLiteParser}.
 */
public interface PascalLiteListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link PascalLiteParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(PascalLiteParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link PascalLiteParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(PascalLiteParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link PascalLiteParser#stat}.
	 * @param ctx the parse tree
	 */
	void enterStat(PascalLiteParser.StatContext ctx);
	/**
	 * Exit a parse tree produced by {@link PascalLiteParser#stat}.
	 * @param ctx the parse tree
	 */
	void exitStat(PascalLiteParser.StatContext ctx);
	/**
	 * Enter a parse tree produced by {@link PascalLiteParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterAssignment(PascalLiteParser.AssignmentContext ctx);
	/**
	 * Exit a parse tree produced by {@link PascalLiteParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitAssignment(PascalLiteParser.AssignmentContext ctx);
	/**
	 * Enter a parse tree produced by {@link PascalLiteParser#ifStat}.
	 * @param ctx the parse tree
	 */
	void enterIfStat(PascalLiteParser.IfStatContext ctx);
	/**
	 * Exit a parse tree produced by {@link PascalLiteParser#ifStat}.
	 * @param ctx the parse tree
	 */
	void exitIfStat(PascalLiteParser.IfStatContext ctx);
	/**
	 * Enter a parse tree produced by {@link PascalLiteParser#whileStat}.
	 * @param ctx the parse tree
	 */
	void enterWhileStat(PascalLiteParser.WhileStatContext ctx);
	/**
	 * Exit a parse tree produced by {@link PascalLiteParser#whileStat}.
	 * @param ctx the parse tree
	 */
	void exitWhileStat(PascalLiteParser.WhileStatContext ctx);
	/**
	 * Enter a parse tree produced by {@link PascalLiteParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(PascalLiteParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link PascalLiteParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(PascalLiteParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link PascalLiteParser#writeStat}.
	 * @param ctx the parse tree
	 */
	void enterWriteStat(PascalLiteParser.WriteStatContext ctx);
	/**
	 * Exit a parse tree produced by {@link PascalLiteParser#writeStat}.
	 * @param ctx the parse tree
	 */
	void exitWriteStat(PascalLiteParser.WriteStatContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Variable}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterVariable(PascalLiteParser.VariableContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Variable}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitVariable(PascalLiteParser.VariableContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Number}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterNumber(PascalLiteParser.NumberContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Number}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitNumber(PascalLiteParser.NumberContext ctx);
	/**
	 * Enter a parse tree produced by the {@code MulDiv}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterMulDiv(PascalLiteParser.MulDivContext ctx);
	/**
	 * Exit a parse tree produced by the {@code MulDiv}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitMulDiv(PascalLiteParser.MulDivContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AddSub}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterAddSub(PascalLiteParser.AddSubContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AddSub}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitAddSub(PascalLiteParser.AddSubContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Parens}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterParens(PascalLiteParser.ParensContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Parens}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitParens(PascalLiteParser.ParensContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Compare}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterCompare(PascalLiteParser.CompareContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Compare}
	 * labeled alternative in {@link PascalLiteParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitCompare(PascalLiteParser.CompareContext ctx);
}