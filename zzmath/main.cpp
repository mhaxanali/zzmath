#include "repl.h"
#include "evaluator.h"

#include <iostream>

int main (int argc, char* argv[]) {

    if (argc > 2) {
        std::cout << "Invalid number of arguments provided.";
        return 1;
    }

    if (argc == 1) {
        repl();
    }
    else {
        evaluate(argv[1]);
    }


    return 0;
}