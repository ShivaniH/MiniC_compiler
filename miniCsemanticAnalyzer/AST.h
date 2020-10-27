#include <vector>
#include <string>

// 37 subclasses of ASTNode

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
// class ASTArrayExpr;
// class ASTParenthesesArrayExpr;

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
    // virtual void visit(ASTArrayExpr& node) = 0;
    // virtual void visit(ASTParenthesesArrayExpr& node) = 0;

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

    // std::vector<ASTDeclaration*> declarationList;
    std::vector<ASTnode*> declarationList;

    public:

    // void addToDeclarations(ASTDeclaration* decl)
    void addToDeclarations(ASTnode* decl)
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

    std::string getDataTypeName()
    {
        return dataTypeName;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTFunctionDecl : public ASTDeclaration {

    std::string functionName;
    std::vector<ASTParam*> paramList;
    ASTStmtList *stmtList;
    ASTReturnStmt *returnExpr;

    public:

    ASTFunctionDecl(ASTDataType *dt,
                    std::string funcName,  
                    ASTStmtList *stList,
                    ASTReturnStmt *retExp) : 
                    ASTDeclaration(dt),
                    functionName(funcName),
                    stmtList(stList),
                    returnExpr(retExp)
                    {}

    void addParam(ASTParam* param)
    {
        paramList.push_back(param);
    }

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

    std::string getParamName()
    {
        return paramName;
    }

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

class ASTParenthesesExpr : public ASTExpr {         

    ASTnode *expr;

    public:

    ASTParenthesesExpr(ASTnode *exp) : expr(exp) {}
    
    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTLocationExpr : public ASTnode {

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
    
    ASTnode *dim;

    public:

    ASTOneDarrayLocation(std::string locName, ASTnode *d1) : 
    ASTLocationExpr(locName), dim(d1) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTTwoDarrayLocation : public ASTLocationExpr {

    ASTnode *dim1, *dim2;

    public:

    ASTTwoDarrayLocation(std::string locName, ASTnode *d1, ASTnode *d2) : 
    ASTLocationExpr(locName), dim1(d1), dim2(d2) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTUnaryExpr : public ASTnode {

    std::string unary_operator;

    ASTnode *operand;

    public:

    ASTUnaryExpr(std::string un_operator, ASTnode* _operand) : unary_operator(un_operator), operand(_operand) {}
    
    ASTnode* getOperand() { return operand; }

    std::string getUnaryOp() { return unary_operator; }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTBinaryExpr : public ASTnode {

    std::string bin_operator;  

    ASTnode *left;
    ASTnode *right;  

    public:

    ASTBinaryExpr (std::string op, ASTnode* _left, ASTnode* _right ) : 
    bin_operator(op), left(_left), right(_right) {}  

    ASTnode* getLeft() {
        return left;
    }

    ASTnode* getRight() {
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

class ASTTernaryExpr : public ASTnode {

    ASTnode *first;
    ASTnode *second;
    ASTnode *third;  

    public:

    ASTTernaryExpr (ASTnode *first, ASTnode *second, ASTnode *third ) :
    first(first), second(second), third(third) {}  

    ASTnode* getFirst()
    {
        return first;
    }

    ASTnode* getSecond()
    {
        return second;
    }

    ASTnode* getThird()
    {
        return third;
    }

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


class ASTStmt : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTStmtList : public ASTnode {

    // std::vector<ASTStmt*> listOfStmts;
    std::vector<ASTnode*> listOfStmts;

    public:

    // void addStatement(ASTStmt *stmt)
    void addStatement(ASTnode *stmt)
    {
        listOfStmts.push_back(stmt);
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};


class ASTAssignmentStmt : public ASTStmt {

    ASTnode *location;
    std::string assignOp;
    ASTnode *expression;

    public:

    ASTAssignmentStmt(ASTnode* loc, std::string assign, ASTnode* expr) :
    location(loc), assignOp(assign), expression(expr) {}

    ASTnode* getLocation()
    {
        return location;
    }
    
    std::string getAssignOp()
    {
        return assignOp;
    }

    ASTnode* getExpression()
    {
        return expression;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTReturnStmt : public ASTStmt {

    // ASTExpr* returnExpr;
    ASTnode *returnExpr;

    public:

    // ASTReturnStmt(ASTExpr* retExp) : returnExpr(retExp) {}
    ASTReturnStmt(ASTnode* retExp) : returnExpr(retExp) {}

    // ASTExpr* getReturnExpr()
    ASTnode* getReturnExpr()
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

    ASTnode* condition;
    ASTStmtList* statements;

    public:

    ASTIfStmt(ASTnode* ifcon, ASTStmtList* stmts) : condition(ifcon), statements(stmts) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTIfElseStmt : public ASTStmt {

    ASTnode* condition;
    ASTStmtList *thenStatements;
    ASTStmtList *elseStatements;

    public:

    ASTIfElseStmt(ASTnode* ifcon, ASTStmtList* thenStmts, ASTStmtList* elseStmts) : condition(ifcon), thenStatements(thenStmts), elseStatements(elseStmts) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTForStmt : public ASTStmt {

    ASTnode* initLoc;
    ASTnode* initExpr;

    ASTnode* conditionExpr;

    ASTnode* updateLoc;
    std::string assignOp;
    ASTnode* updateExpr;

    ASTStmtList *statements;

    public:

    ASTForStmt( ASTnode* inLoc, 
                ASTnode* inExpr, 
                ASTnode* conExpr, 
                ASTnode* upLoc, 
                std::string op, 
                ASTnode* upExpr, 
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

    ASTnode* condition;
    ASTStmtList* statements;

    public:

    ASTWhileStmt(ASTnode* con, ASTStmtList* stmts) : condition(con), statements(stmts) {}

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

    void addArg(ASTUserFunArg *arg)
    {
        args.push_back(arg);
    }

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

    void addArg(ASTLibFunArg *arg)
    {
        args.push_back(arg);
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTUserFunArg : public ASTnode {          // This class and the one below feel like unnecesary wrappers

    ASTnode* argument;

    public:

    ASTUserFunArg(ASTnode* arg) : argument(arg) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTLibFunArg : public ASTnode {

    ASTnode* argument;

    public:

    ASTLibFunArg(ASTnode* arg) : argument(arg) {}

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};





class ASTContext {
    
    public:

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
