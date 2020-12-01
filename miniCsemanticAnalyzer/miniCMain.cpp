#include <iostream>

#include "antlr4-runtime.h"
#include "miniCgrammarLexer.h"
#include "miniCgrammarParser.h"

#include "ASTBuildVisitor.h"
#include "SymTabASTVisitor.h"
#include "semCheckASTVisitor.h"
#include "IRGenVisitor.h"

using namespace antlr4;
using namespace antlrcpp;

void printSymbolTable(SymTab* symTab)
{
    symTab->printSymTab();

    std::vector<SymTab*> children = symTab->getChildren();

    if(children.size() != 0)
    {
        for(auto child : children)
        {
            printSymbolTable(child);
        }
    }

}

int main(int argc, const char* argv[]) 
{

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
    
    if (ast.root != NULL)
    {
        std::cout << "\n\nVisiting AST to create a symbol table. . . \n";
        fillSymTab.visit(*ast.root);
        
        std::cout << "\n\nPrinting sym tab tree\n";
        printSymbolTable(fillSymTab.rootSymTab);

        semCheckASTVisitor semanticChecker(fillSymTab.rootSymTab);

        std::cout << "\n\nSemantic checks:\n";
        semanticChecker.visit(*ast.root);

        
        IRGenVisitor LLVM_IR_generator(fillSymTab.rootSymTab);

        std::cout << "\n\nGenerating LLVM IR:\n";
        LLVM_IR_generator.visit(*ast.root);

    }

    return 0;
}
