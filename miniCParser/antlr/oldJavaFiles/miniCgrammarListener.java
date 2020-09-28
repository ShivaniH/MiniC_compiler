// Generated from miniCgrammar.g4 by ANTLR 4.8
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link miniCgrammarParser}.
 */
public interface miniCgrammarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(miniCgrammarParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(miniCgrammarParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#declarationList}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationList(miniCgrammarParser.DeclarationListContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#declarationList}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationList(miniCgrammarParser.DeclarationListContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#declaration}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(miniCgrammarParser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#declaration}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(miniCgrammarParser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#variableDecl}.
	 * @param ctx the parse tree
	 */
	void enterVariableDecl(miniCgrammarParser.VariableDeclContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#variableDecl}.
	 * @param ctx the parse tree
	 */
	void exitVariableDecl(miniCgrammarParser.VariableDeclContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#variableDeclList}.
	 * @param ctx the parse tree
	 */
	void enterVariableDeclList(miniCgrammarParser.VariableDeclListContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#variableDeclList}.
	 * @param ctx the parse tree
	 */
	void exitVariableDeclList(miniCgrammarParser.VariableDeclListContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#singleVarDecl}.
	 * @param ctx the parse tree
	 */
	void enterSingleVarDecl(miniCgrammarParser.SingleVarDeclContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#singleVarDecl}.
	 * @param ctx the parse tree
	 */
	void exitSingleVarDecl(miniCgrammarParser.SingleVarDeclContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#dataType}.
	 * @param ctx the parse tree
	 */
	void enterDataType(miniCgrammarParser.DataTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#dataType}.
	 * @param ctx the parse tree
	 */
	void exitDataType(miniCgrammarParser.DataTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#functionDecl}.
	 * @param ctx the parse tree
	 */
	void enterFunctionDecl(miniCgrammarParser.FunctionDeclContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#functionDecl}.
	 * @param ctx the parse tree
	 */
	void exitFunctionDecl(miniCgrammarParser.FunctionDeclContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#paramsList}.
	 * @param ctx the parse tree
	 */
	void enterParamsList(miniCgrammarParser.ParamsListContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#paramsList}.
	 * @param ctx the parse tree
	 */
	void exitParamsList(miniCgrammarParser.ParamsListContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#statementList}.
	 * @param ctx the parse tree
	 */
	void enterStatementList(miniCgrammarParser.StatementListContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#statementList}.
	 * @param ctx the parse tree
	 */
	void exitStatementList(miniCgrammarParser.StatementListContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(miniCgrammarParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(miniCgrammarParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#location}.
	 * @param ctx the parse tree
	 */
	void enterLocation(miniCgrammarParser.LocationContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#location}.
	 * @param ctx the parse tree
	 */
	void exitLocation(miniCgrammarParser.LocationContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#assignOp}.
	 * @param ctx the parse tree
	 */
	void enterAssignOp(miniCgrammarParser.AssignOpContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#assignOp}.
	 * @param ctx the parse tree
	 */
	void exitAssignOp(miniCgrammarParser.AssignOpContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(miniCgrammarParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(miniCgrammarParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#arrayExpr}.
	 * @param ctx the parse tree
	 */
	void enterArrayExpr(miniCgrammarParser.ArrayExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#arrayExpr}.
	 * @param ctx the parse tree
	 */
	void exitArrayExpr(miniCgrammarParser.ArrayExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void enterFunctionCall(miniCgrammarParser.FunctionCallContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void exitFunctionCall(miniCgrammarParser.FunctionCallContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#argsList}.
	 * @param ctx the parse tree
	 */
	void enterArgsList(miniCgrammarParser.ArgsListContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#argsList}.
	 * @param ctx the parse tree
	 */
	void exitArgsList(miniCgrammarParser.ArgsListContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#calloutArgs}.
	 * @param ctx the parse tree
	 */
	void enterCalloutArgs(miniCgrammarParser.CalloutArgsContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#calloutArgs}.
	 * @param ctx the parse tree
	 */
	void exitCalloutArgs(miniCgrammarParser.CalloutArgsContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#conditionalStmt}.
	 * @param ctx the parse tree
	 */
	void enterConditionalStmt(miniCgrammarParser.ConditionalStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#conditionalStmt}.
	 * @param ctx the parse tree
	 */
	void exitConditionalStmt(miniCgrammarParser.ConditionalStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link miniCgrammarParser#iterativeStmt}.
	 * @param ctx the parse tree
	 */
	void enterIterativeStmt(miniCgrammarParser.IterativeStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link miniCgrammarParser#iterativeStmt}.
	 * @param ctx the parse tree
	 */
	void exitIterativeStmt(miniCgrammarParser.IterativeStmtContext ctx);
}