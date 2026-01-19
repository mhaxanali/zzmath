#include "evaluate.h"
#include <string>
#include <vector>

using strVec_t = std::vector<std::string>;

int count(const strVec_t& col, const std::string& com);
void handleUnaryMinus(strVec_t& tokens);
strVec_t tokenize(std::string expr);
bool contains(const strVec_t& compSlice, const std::string& comp_str);
void solveTokens(strVec_t& tokens);
double toDouble(const str::string& str);
void solve(strVec_t& tokens, int i);
void solveInnerMostBrackets(strVec_t& tokens);

double evaluate(std::string expr){

    return 0;
}
