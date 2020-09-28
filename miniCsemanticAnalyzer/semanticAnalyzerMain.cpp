#include <iostream>

#include "antlr4-runtime.h"
#include "miniCgrammarLexer.h"
#include "miniCgrammarParser.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {

    std::ifstream stream;
    stream.open(argv[1]);

    ANTLRInputStream input(stream);
    miniCgrammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    miniCgrammarParser parser(&tokens);

    std::cout << "Works\n";

    return 0;
}