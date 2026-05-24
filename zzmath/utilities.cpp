#include <iostream>
#include <vector>

bool contains(std::vector<std::string> vector, std::string string) {

    for (const std::string &item : vector) {
        if (item == string) {
            return true;
        }
    }
    return false;
}