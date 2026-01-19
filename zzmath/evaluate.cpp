#include "evaluate.h"
#include <string>
#include <vector>

using strVec_t = std::vector<std::string>;

int count(const strVec_t& col, const std::string& com);
void handleUnaryMinus(strVec_t& tokens);
strVec_t tokenize(std::string expr);
bool contains(const strVec_t& compSlice, const std::string& compStr);
void solveTokens(strVec_t& tokens);
double toDouble(const std::string& str);
void solve(strVec_t& tokens, int i);
void solveInnerMostBrackets(strVec_t& tokens);

char opers[] = {'+','-','*','/','^','(',')'};

double evaluate(std::string expr){

    return 0;
}

int count(const strVec_t& col, const std::string& com){
    int count = 0;
    for (const auto& v : col) {
        if (v == com) {
            count++;
        }
    }
    return count;
}

bool contains(const strVec_t& compSlice, const std::string& compStr){
    for (const auto& s : compSlice) {
        if (s == compStr) {
            return true;
        }
    }
    return false;
}

double toDouble(const std::string& str){
    return std::stod(str);
}
