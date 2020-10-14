#include <vector>

// 39 subclasses of ASTNode

class ASTProgram;
class ASTDeclaration;
class ASTCommaSepVarDecl;
class ASTSingleVarDecl;
class ASTSimpleVariableDecl;
class AST1DArrayDecl;
class AST2DArrayDecl;
class ASTFunctionDecl;
class ASTParamList;
class ASTDataType;

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
class ASTUserFunArgs;
class ASTLibFunArgs;


class ASTvisitor {

    public:

    virtual void visit(ASTProgram& node) = 0;
    virtual void visit(ASTDeclaration& node) = 0;
    virtual void visit(ASTCommaSepVarDecl& node) = 0;
    virtual void visit(ASTSingleVarDecl& node) = 0;
    virtual void visit(ASTSimpleVariableDecl& node) = 0;
    virtual void visit(AST1DArrayDecl& node) = 0;
    virtual void visit(AST2DArrayDecl& node) = 0;
    virtual void visit(ASTFunctionDecl& node) = 0;
    virtual void visit(ASTParamList& node) = 0;
    virtual void visit(ASTDataType& node) = 0;

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
    virtual void visit(ASTUserFunArgs& node) = 0;
    virtual void visit(ASTLibFunArgs& node) = 0;
};

class ASTnode {

    public:

    virtual ~ASTnode() {}

    virtual void accept(ASTvisitor& V) = 0;

};

/*********************************** GROUP 1 ***************************************/

class ASTProgram : public ASTnode {

    // std::vector<ASTDeclaration> declarationList;

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};


class ASTDeclaration : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTCommaSepVarDecl : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTSingleVarDecl : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTSimpleVariableDecl : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class AST1DArrayDecl : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class AST2DArrayDecl : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTFunctionDecl : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTParamList : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTDataType : public ASTnode {

    public:

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

class ASTParenthesesExpr : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTLocationExpr : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTSimpleVarLocation : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTOneDarrayLocation : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTTwoDarrayLocation : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTUnaryExpr : public ASTnode {

    public:

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


class ASTArrayExpr : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTParenthesesArrayExpr : public ASTnode {

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

class ASTCharLitNode: public ASTnode {

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

class ASTBoolLitNode: public ASTnode {

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

/*********************************** GROUP 4 ***************************************/


class ASTStmtList : public ASTnode {

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

class ASTAssignmentStmt : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTReturnStmt : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTBreakStmt : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTContinueStmt : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTIfStmt : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTIfElseStmt : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTForStmt : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTWhileStmt : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

/*********************************** GROUP 5 ***************************************/

class ASTUserFunCall : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTLibFunCall : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTUserFunArgs : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

class ASTLibFunArgs : public ASTnode {

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};





class ASTContext {
    
    public:

    ASTnode *root;

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
