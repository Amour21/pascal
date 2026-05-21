#include <iostream>
#include <fstream>
#include <antlr4-runtime.h>
#include "PascalLiteLexer.h"
#include "PascalLiteParser.h"
#include "EvalVisitor.h"

int main() {
    std::string code = R"(
    begin
        x := 10;
        y := 5; 
         
        res := x + y * 2;     
      
        if (res > 15) then
        begin
            write(res);
            while (y > 0) do
            begin
                x := x - 1;
                y := y - 1;
            end
        end
        else
        begin
            write(0);
        end
    end
)";

    std::cout << "Running program..." << std::endl;

    antlr4::ANTLRInputStream input(code);

    PascalLiteLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    PascalLiteParser parser(&tokens);
    antlr4::tree::ParseTree* tree = parser.program();  

    std::cout << "Parse Tree: " << tree->toStringTree(&parser) << std::endl;

    EvalVisitor evaluator;
    evaluator.visit(tree);

    return 0;
}