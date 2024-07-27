#include <iostream>
#include <string>

int getVowelCount(const std::string& str) {
    const std::string vowels = "aeiouAEIOU";
    int count = 0;

    for (char c : str) {
        if (vowels.find(c) != std::string::npos) {
            count++;
        }
    }

    return count;
}