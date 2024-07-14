#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

long nextBigger(long n) {
    string numStr = to_string(n);
    vector<char> digits(numStr.begin(), numStr.end());

    // Step 1: Find the rightmost character that is smaller than its next character
    int i = digits.size() - 2;
    while (i >= 0 && digits[i] >= digits[i + 1]) {
        --i;
    }

    // If no such character is found, return -1 (no greater number possible)
    if (i == -1) {
        return -1;
    }

    // Step 2: Find the smallest character on the right side of digits[i] and larger than digits[i]
    int j = digits.size() - 1;
    while (digits[j] <= digits[i]) {
        --j;
    }

    // Step 3: Swap characters at digits[i] and digits[j]
    swap(digits[i], digits[j]);

    // Step 4: Reverse the sequence from digits[i + 1] to end to get the smallest possible number
    reverse(digits.begin() + i + 1, digits.end());


    string resultStr(digits.begin(), digits.end());
    return stol(resultStr);
}