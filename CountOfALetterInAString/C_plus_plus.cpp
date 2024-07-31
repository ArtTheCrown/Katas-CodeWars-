#include <algorithm>
#include <string>

unsigned int strCount(std::string word, char letter){
    return std::count(word.begin(), word.end(), letter);
}