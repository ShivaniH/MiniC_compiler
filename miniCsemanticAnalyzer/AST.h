#include <vector>

class ASTProgram;
class ASTDeclaration;
class ASTVariableDeclarationList;
class ASTSimpleVariableDeclaration;
class AST1DArrayDeclaration;
class AST2DArrayDeclaration;
class ASTFunctionDeclaration;
class ASTParamList;

class ASTBinaryNode;  // or separate node for each sub-rule?
class ASTTernaryNode;

class ASTIntLitNode;
class ASTStringLitNode;
class ASTCharLitNode;
class ASTBoolLitNode;

class ASTvisitor {

    public:

    virtual void visit(ASTProgram& node) = 0;
    virtual void visit(ASTBinaryNode& node) = 0;
    virtual void visit(ASTTernaryNode& node) = 0;
    virtual void visit(ASTIntLitNode& node) = 0;
};

class ASTnode {

    public:

    virtual ~ASTnode() {}

    virtual void accept(ASTvisitor& V) = 0;

};


class ASTProgram : public ASTnode {

    // std::vector<ASTDeclaration> declarationList;

    public:

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }
};

/*
class ASTDeclaration : public ASTnode {

};
*/

class ASTBinaryNode : public ASTnode {

    std::string bin_operator;  

    ASTnode *left;
    ASTnode *right;  

    public:

    ASTBinaryNode (std::string op, ASTnode* _left, ASTnode* _right ) : 
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

class ASTTernaryNode : public ASTnode {

    ASTnode *first;
    ASTnode *second;
    ASTnode *third;  

    public:

    ASTTernaryNode (ASTnode *first, ASTnode *second, ASTnode *third ) :
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
