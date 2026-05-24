#include <iostream>
#include <vector>

bool contains(std::vector<std::string> vector, std::string string) {
    int i = 0;
    while (vector[i] != "\0") {
        if (vector[i] == string) {
            return true;
        }
    }
    return false;
}