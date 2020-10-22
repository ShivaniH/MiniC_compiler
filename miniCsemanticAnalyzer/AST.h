#include <vector>
#include <string>

// 39 subclasses of ASTNode

class ASTProgram;
class ASTDeclaration;
class ASTVariableDecl;
class ASTSingleVarDecl;
class ASTSimpleVariableDecl;
class AST1DArrayDecl;
class AST2DArrayDecl;
class ASTDataType;
class ASTFunctionDecl;
class ASTParam;

class ASTExpr;
class ASTParenthesesExpr;
class ASTLocationExpr;
class ASTSimpleVarLocation;
class ASTOneDarrayLocation;
class ASTTwoDarrayLocation;
class ASTUnaryExpr;
class ASTBinaryExpr;
class ASTTernaryExpr;
class ASTArrayExpr;
class ASTParenthesesArrayExpr;

class ASTIntLitNode;
class ASTStringLitNode;
class ASTCharLitNode;
class ASTBoolLitNode;

class ASTStmtList;
class ASTStmt;
class ASTAssignmentStmt;
class ASTReturnStmt;
class ASTBreakStmt;
class ASTContinueStmt;
class ASTIfStmt;
class ASTIfElseStmt;
class ASTForStmt;
class ASTWhileStmt;

class ASTUserFunCall;
class ASTLibFunCall;
class ASTUserFunArg;
class ASTLibFunArg;


class ASTvisitor {

    public:

    virtual void visit(ASTProgram& node) = 0;
    virtual void visit(ASTDeclaration& node) = 0;
    virtual void visit(ASTVariableDecl& node) = 0;
    virtual void visit(ASTSingleVarDecl& node) = 0;
    virtual void visit(ASTSimpleVariableDecl& node) = 0;
    virtual void visit(AST1DArrayDecl& node) = 0;
    virtual void visit(AST2DArrayDecl& node) = 0;
    virtual void visit(ASTDataType& node) = 0;
    virtual void visit(ASTFunctionDecl& node) = 0;
    virtual void visit(ASTParam& node) = 0;

    virtual void visit(ASTExpr& node) = 0;
    virtual void visit(ASTParenthesesExpr& node) = 0;
    virtual void visit(ASTLocationExpr& node) = 0;
    virtual void visit(ASTSimpleVarLocation& node) = 0;
    virtual void visit(ASTOneDarrayLocation& node) = 0;
    virtual void visit(ASTTwoDarrayLocation& node) = 0;
    virtual void visit(ASTUnaryExpr& node) = 0;
    virtual void visit(ASTBinaryExpr& node) = 0;
    virtual void visit(ASTTernaryExpr& node) = 0;
    virtual void visit(ASTArrayExpr& node) = 0;
    virtual void visit(ASTParenthesesArrayExpr& node) = 0;

    virtual void visit(ASTIntLitNode& node) = 0;
    virtual void visit(ASTStringLitNode& node) = 0;
    virtual void visit(ASTCharLitNode& node) = 0;
    virtual void visit(ASTBoolLitNode& node) = 0;

    virtual void visit(ASTStmtList& node) = 0;
    virtual void visit(ASTStmt& node) = 0;
    virtual void visit(ASTAssignmentStmt& node) = 0;
    virtual void visit(ASTReturnStmt& node) = 0;
    virtual void visit(ASTBreakStmt& node) = 0;
    virtual void visit(ASTContinueStmt& node) = 0;
    virtual void visit(ASTIfStmt& node) = 0;
    virtual void visit(ASTIfElseStmt& node) = 0;
    virtual void visit(ASTForStmt& node) = 0;
    virtual void visit(ASTWhileStmt& node) = 0;

    virtual void visit(ASTUserFunCall& node) = 0;
    virtual void visit(ASTLibFunCall& node) = 0;
    virtual void visit(ASTUserFunArg& node) = 0;
    virtual void visit(ASTLibFunArg& node) = 0;
};

class ASTnode {

    public:

    virtual ~ASTnode() {}

    virtual void accept(ASTvisitor& V) = 0;

};

/*********************************** GROUP 1 ***************************************/

class ASTProgram : public ASTnode {

    std::vector<ASTDeclaration*> declarationList;

    public:

    void addToDeclarations(ASTDeclaration* decl)
    {
        declarationList.push_back(decl);
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};


class ASTDeclaration : public ASTnode {

    ASTDataType *dataType;       // declarations -> var + func (return data type of the func)

    public:

    ASTDeclaration() {}

    ASTDeclaration(ASTDataType *dt) : dataType(dt) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTVariableDecl : public ASTDeclaration {

    std::vector<ASTSingleVarDecl*> variableList;

    public:

    ASTVariableDecl(ASTDataType *dt) : ASTDeclaration(dt) {}

    void addVariable(ASTSingleVarDecl* var)
    {
        variableList.push_back(var);
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

};

class ASTSingleVarDecl : public ASTDeclaration {

    protected:

    std::string varName;

    public:

    ASTSingleVarDecl(std::string vName) : varName(vName) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTSimpleVariableDecl : public ASTSingleVarDecl {

    public:

    ASTSimpleVariableDecl(std::string vName) : ASTSingleVarDecl(vName) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class AST1DArrayDecl : public ASTSingleVarDecl {

    int dim1;

    public:

    AST1DArrayDecl(std::string vName, int d1) : ASTSingleVarDecl(vName), dim1(d1) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class AST2DArrayDecl : public ASTSingleVarDecl {

    int dim1, dim2;

    public:

    AST2DArrayDecl(std::string vName, int d1, int d2) : ASTSingleVarDecl(vName), dim1(d1), dim2(d2) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTDataType : public ASTnode {

    std::string dataTypeName;

    public:

    ASTDataType(std::string dt) : dataTypeName(dt) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTFunctionDecl : public ASTDeclaration {

    std::string functionName;
    std::vector<ASTParam*> paramList;
    ASTStmtList *stmtList;

    public:

    ASTFunctionDecl(ASTDataType *dt,
                    std::string funcName,  
                    ASTStmtList *stList) : 
                    ASTDeclaration(dt),
                    functionName(funcName),
                    stmtList(stList)
                    {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTParam : public ASTnode {

    ASTDataType *dataType;
    std::string paramName;

    public:

    ASTParam(ASTDataType *dt, std::string parName) : dataType(dt), paramName(parName) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

/*********************************** GROUP 2 ***************************************/

class ASTExpr : public ASTnode {        

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTParenthesesExpr : public ASTExpr {         // needed?

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTLocationExpr : public ASTExpr {

    protected:

    std::string locationName;

    public:

    ASTLocationExpr(std::string locName) : locationName(locName) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTSimpleVarLocation : public ASTLocationExpr {

    public:

    ASTSimpleVarLocation(std::string locName) : ASTLocationExpr(locName) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTOneDarrayLocation : public ASTLocationExpr {
    
    int dim1;

    public:

    ASTOneDarrayLocation(std::string locName, int d1) : 
    ASTLocationExpr(locName), dim1(d1) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTTwoDarrayLocation : public ASTLocationExpr {

    int dim1, dim2;

    public:

    ASTTwoDarrayLocation(std::string locName, int d1, int d2) : 
    ASTLocationExpr(locName), dim1(d1), dim2(d2) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTUnaryExpr : public ASTExpr {

    std::string unary_operator;

    ASTExpr *operand;

    public:

    ASTUnaryExpr(std::string un_operator, ASTExpr* _operand) : unary_operator(un_operator), operand(_operand) {}
    
    ASTExpr* getOperand() { return operand; }

    std::string getUnaryOp() { return unary_operator; }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTBinaryExpr : public ASTExpr {

    std::string bin_operator;  

    ASTExpr *left;
    ASTExpr *right;  

    public:

    ASTBinaryExpr (std::string op, ASTExpr* _left, ASTExpr* _right ) : 
    bin_operator(op), left(_left), right(_right) {}  

    ASTExpr* getLeft() {
        return left;
    }

    ASTExpr* getRight() {
        return right;
    }

    std::string getBin_operator() {
        return bin_operator;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

};

class ASTTernaryExpr : public ASTExpr {

    ASTExpr *first;
    ASTExpr *second;
    ASTExpr *third;  

    public:

    ASTTernaryExpr (ASTExpr *first, ASTExpr *second, ASTExpr *third ) :
    first(first), second(second), third(third) {}  

    ASTExpr* getFirst()
    {
        return first;
    }

    ASTExpr* getSecond()
    {
        return second;
    }

    ASTExpr* getThird()
    {
        return third;
    }

    virtual void accept(ASTvisitor& v) 
    {
        v.visit(*this);
    }
};


class ASTArrayExpr : public ASTnode {       // ???

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTParenthesesArrayExpr : public ASTArrayExpr {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};


/*********************************** GROUP 3 ***************************************/


class ASTIntLitNode: public ASTnode {

	int integerLiteral;

	public:

	ASTIntLitNode(int intlit) : integerLiteral(intlit){}

    int getIntLit()
    {
        return integerLiteral;
    }

    virtual void accept(ASTvisitor& v) 
    {
        v.visit(*this);
    }

};

class ASTStringLitNode: public ASTnode {

	std::string stringLiteral;

	public:

	ASTStringLitNode(std::string strLit) : stringLiteral(strLit){}

    std::string getStringLit()
    {
        return stringLiteral;
    }

    virtual void accept(ASTvisitor& v) 
    {
        v.visit(*this);
    }

};

class ASTCharLitNode: public ASTnode {

	char charLiteral;

	public:

	ASTCharLitNode(char charlit) : charLiteral(charlit){}

    char getCharLit()
    {
        return charLiteral;
    }

    virtual void accept(ASTvisitor& v) 
    {
        v.visit(*this);
    }

};

class ASTBoolLitNode: public ASTnode {

	bool boolLiteral;

	public:

	ASTBoolLitNode(bool boolLit) : boolLiteral(boolLit){}

    bool getBoolLit()
    {
        return boolLiteral;
    }

    virtual void accept(ASTvisitor& v) 
    {
        v.visit(*this);
    }

};

/*********************************** GROUP 4 ***************************************/


class ASTStmtList : public ASTnode {

    std::vector<ASTStmt*> listOfStmts;

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTStmt : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTAssignmentStmt : public ASTStmt {

    ASTLocationExpr *location;
    std::string assignOp;
    ASTExpr *expression;

    public:

    ASTAssignmentStmt(ASTLocationExpr* loc, std::string assign, ASTExpr* expr) :
    location(loc), assignOp(assign), expression(expr) {}

    ASTLocationExpr* getLocation()
    {
        return location;
    }
    
    std::string getAssignOp()
    {
        return assignOp;
    }

    ASTExpr* getExpression()
    {
        return expression;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTReturnStmt : public ASTStmt {

    ASTExpr* returnExpr;

    public:

    ASTReturnStmt(ASTExpr* retExp) : returnExpr(retExp) {}

    ASTExpr* getReturnExpr()
    {
        return returnExpr;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTBreakStmt : public ASTStmt {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTContinueStmt : public ASTStmt {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTIfStmt : public ASTStmt {

    ASTExpr* condition;
    ASTStmtList* statements;

    public:

    ASTIfStmt(ASTExpr* ifcon, ASTStmtList* stmts) : condition(ifcon), statements(stmts) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTIfElseStmt : public ASTStmt {

    ASTExpr* condition;
    ASTStmtList *thenStatements;
    ASTStmtList *elseStatements;

    public:

    ASTIfElseStmt(ASTExpr* ifcon, ASTStmtList* thenStmts, ASTStmtList* elseStmts) : condition(ifcon), thenStatements(thenStmts), elseStatements(elseStmts) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTForStmt : public ASTStmt {

    ASTLocationExpr* initLoc;
    ASTExpr* initExpr;

    ASTExpr* conditionExpr;

    ASTLocationExpr* updateLoc;
    std::string assignOp;
    ASTExpr* updateExpr;

    ASTStmtList *statements;

    public:

    ASTForStmt( ASTLocationExpr* inLoc, 
                ASTExpr* inExpr, 
                ASTExpr* conExpr, 
                ASTLocationExpr* upLoc, 
                std::string op, 
                ASTExpr* upExpr, 
                ASTStmtList* stmts ) : 
                initLoc(inLoc),
                initExpr(inExpr),
                conditionExpr(conExpr),
                updateLoc(upLoc),
                assignOp(op),
                updateExpr(upExpr),
                statements(stmts)
                {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTWhileStmt : public ASTStmt {

    ASTExpr* condition;
    ASTStmtList* statements;

    public:

    ASTWhileStmt(ASTExpr* con, ASTStmtList* stmts) : condition(con), statements(stmts) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

/*********************************** GROUP 5 ***************************************/

class ASTUserFunCall : public ASTnode {

    std::string funcName;
    std::vector<ASTUserFunArg*> args;

    public:

    ASTUserFunCall(std::string fnName) : funcName(fnName) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTLibFunCall : public ASTnode {

    std::string libFuncName;
    std::vector<ASTLibFunArg*> args;

    public:

    ASTLibFunCall(std::string libFnName) : libFuncName(libFnName) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTUserFunArg : public ASTnode {

    ASTExpr* argument;

    public:

    ASTUserFunArg(ASTExpr* arg) : argument(arg) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTLibFunArg : public ASTnode {

    ASTExpr* argument;

    public:

    ASTLibFunArg(ASTExpr* arg) : argument(arg) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};





class ASTContext {
    
    public:

    // ASTnode *root;
    ASTProgram *root;

    ~ASTContext()
    {
	    clearAST();
    }

    /// free all saved trees
    void clearAST()
    {
        delete root;
    }
};
