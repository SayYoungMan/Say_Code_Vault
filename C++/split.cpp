// Method split divides the string into tokens when given the delimiter

// Input: string of input, delimiter
// Output: vector of tokens

// V1.0 (2021/08/10): Takes only string as input and a char as delimiter

#include <vector>
#include <string>
#include <sstream>
#include <iostream>

std::vector<std::string> split(std::string str, char delim) {
    std::vector<std::string> rv;
    std::istringstream ss(str);
    std::string token;

    while(std::getline(ss, token, delim)) rv.push_back(token);

    return rv;
}

int main() {
    std::string input = "abc,def,ghi";
    auto res = split(input, ',');
    for (auto &t: res) std::cout << t <<'\n';
}