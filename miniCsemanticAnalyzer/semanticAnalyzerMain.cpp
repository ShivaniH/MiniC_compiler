#include <iostream>

#include "antlr4-runtime.h"
#include "miniCgrammarLexer.h"
#include "miniCgrammarParser.h"

#include "ASTBuildVisitor.h"

using namespace antlr4;
using namespace antlrcpp;

int main(int argc, const char* argv[]) {

    std::ifstream stream;
    stream.open(argv[1]);

    ANTLRInputStream input(stream);
    miniCgrammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    miniCgrammarParser parser(&tokens);

    // std::cout << "Works\n";

    // tree::ParseTree* miniCparsetree = parser.program();
    // std::cout << miniCparsetree->toStringTree(&parser) << "\n\n";

    miniCgrammarParser::ProgramContext* miniCparsetree = parser.program();

    ASTBuildVisitor abv;
    ASTContext ast;

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

    ast.root = abv.visitProgram(miniCparsetree);

    return 0;
}