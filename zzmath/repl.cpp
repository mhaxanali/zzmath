#include "evaluator.h"
#include "utilities.h"

#include <iostream>
#include <vector>

typedef std::vector<std::string> strVec_t;

const strVec_t RESERVED_WORDS = {"exit"};

int repl() {

    std::string expr;
    std::string lastResult;

    std::cout << "---   zzmath v0.1   ---" << '\n';
    std::cout << "---REPL mode started---" << '\n';

    while (true) {
        std::cout << ">>> ";
        std::getline(std::cin, expr);
        if (!(contains(RESERVED_WORDS, expr))) {
            evaluate(expr, lastResult);
        }
        else {
            if (expr == "exit") {
                break;
            }
        }
    }

    return 0;
}