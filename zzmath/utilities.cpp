#include <iostream>
#include <vector>

bool contains(const std::vector<std::string>& vector, const std::string& string) {

    for (const std::string &item : vector) {
        if (item == string) {
            return true;
        }
    }
    return false;
}

int count (const std::vector<std::string>& col, const std::string& com) {
    int count = 0;
    for (const std::string &v : col) {
        if (v == com) {
            count++;
        }
    }
    return count;
}