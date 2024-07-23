#include <iostream>
#include <string>
#include <numeric>

int digitalRoot(long n) {
    std::string number = std::to_string(n);
    int sumDigits = std::accumulate(number.begin(), number.end(), 0, [](int total, char digit) {
        return total + (digit - '0');
    });
    return sumDigits < 10 ? sumDigits : digitalRoot(sumDigits);
}