#include <iostream>
#include <algorithm>
#include <vector>

#include "utilities.h"

typedef std::vector<std::string> strVec_t;

strVec_t tokenize(std::string& expr);
void handleUnaryMinus(strVec_t& tokens, std::string& result);
void solveTokens(strVec_t& tokens, std::string& result);
void solveInnermostBrackets(strVec_t& tokens, std::string& result);

char opers[8] = "+-*/()^";

int evaluate(std::string& expr, std::string& result) {
    
    std::replace(expr.begin(), expr.end(), ' ', '\0');

    strVec_t expr_tokens = tokenize(expr);
    handleUnaryMinus(expr_tokens, result);
    
    while (true) {
        if (!(contains(expr_tokens, "(") || contains(expr_tokens, ")"))) {
            solveTokens(expr_tokens, result);
            result = expr_tokens[0];
            break;
        }
        else {
            if (count(expr_tokens, "(") != count(expr_tokens, ")")) {
                result = "Error: Mismatched Brackets";
            }
            else {
                solveInnermostBrackets(expr_tokens, result);
                if (result != "") {
                    break;
                }
            }
        }
    }
    std::cout << result << '\n';
    return 0;
}