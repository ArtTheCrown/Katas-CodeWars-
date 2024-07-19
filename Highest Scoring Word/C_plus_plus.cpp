#include <string>
#include <sstream>
#include <vector>

std::string highestScoringWord(const std::string &str)
{
    std::istringstream iss(str);
    std::string word;
    std::string highestWord;
    int highestScore = 0;

    while (iss >> word)
    {
        int currentScore = 0;
        for (char c : word)
        {
            currentScore += (c - 'a' + 1);
        }

        if (currentScore > highestScore)
        {
            highestScore = currentScore;
            highestWord = word;
        }
    }

    return highestWord;
}