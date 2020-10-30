#include <iostream>

#include "antlr4-runtime.h"
#include "miniCgrammarLexer.h"
#include "miniCgrammarParser.h"

#include "ASTBuildVisitor.h"
#include "SymTabASTVisitor.h"

using namespace antlr4;
using namespace antlrcpp;

int main(int argc, const char* argv[]) {

    std::ifstream stream;
    stream.open(argv[1]);

    ANTLRInputStream input(stream);
    miniCgrammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    miniCgrammarParser parser(&tokens);
    
    miniCgrammarParser::ProgramContext* miniCparsetree = parser.program();

    ASTBuildVisitor abv;
    ASTContext ast;

    std::cout << "\nConstructing AST . . . \n";
    ast.root = abv.visitProgram(miniCparsetree);

    SymTabASTVisitor fillSymTab;

    SymTab *symbolTable;         // Make this SymTab ptr a member of SymTabASTVisitor ? But then hierarchical structure? Maybe put the SymTab ptr in ASTnode ??
    
    if (ast.root != NULL)
    {
        std::cout << "\n\nVisiting AST to create a symbol table. . . \n";
        fillSymTab.visit(*ast.root);
        
        std::cout << "\n\nPrinting root sym tab\n";
        fillSymTab.rootSymTab->printSymTab();
    }

    return 0;
}







 /*
    ASTnode *root;
    
    antlrcpp::Any anyObject;
    anyObject = abv.visitProgram(miniCparsetree);
    
    bool whatIs = anyObject.is<ASTnode*>();

    if(whatIs) 
    {
        std::cout << "It's an ASTnode!\n" ;
    }
    else {
        std::cout << ":( \n";
    }
    
    ast.root = anyObject.as<ASTnode*>();

    ASTIntLitNode* tryNode = dynamic_cast<ASTIntLitNode*>(ast.root);
    if(tryNode != NULL)
        std::cout << "This is at the root : " << "\n";

    ASTProgram* tryAnotherNode = dynamic_cast<ASTProgram*>(ast.root);
    if(tryAnotherNode != NULL)
        std::cout << "ASTProgram is at the root : " << "\n";
*/