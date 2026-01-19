#include "evaluate.h"
#include "repl.h"
#include <iostream>

int main(int argc, char* argv[]){

    if (argc == 1){
        repl();
    }
    else if (argc == 2){
        std::cout << evaluate(argv[1]) << '\n';
    }
    else{
        std::cerr << "Invalid number of arguments given";
        return 1;
    }

    return 0;
}
