#include <iostream>
#include <string>

std::string disemvowel(const std::string& str) {
    const std::string vowels = "aeiouAEIOU";
    std::string result;

    for (char c : str) {
        if (vowels.find(c) == std::string::npos) {
            result += c;
        }
    }

    return result;
}