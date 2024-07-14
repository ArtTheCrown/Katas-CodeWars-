#include <string>
#include <algorithm>

std::string add(const std::string& a, const std::string& b) {
    // Step 1: Determine the lengths of the two input strings
    int n = a.length();
    int m = b.length();
    
    // Step 2: Ensure string 'a' is not shorter than string 'b'; swap if necessary
    if (n < m) {
        return add(b, a); // Swap 'a' and 'b' to simplify logic
    }
    
    // Step 3: Initialize variables for the addition process
    std::string sum;
    int carry = 0;
    int j = m - 1; // Start index for string 'b'
    
    // Step 4: Traverse both strings from the end to the beginning
    for (int i = n - 1; i >= 0; i--) {
        // Step 5: Convert characters to integers and handle missing digits in 'b'
        int digit_a = a[i] - '0';
        int digit_b = j >= 0 ? b[j] - '0' : 0; // Use 0 for missing digits in 'b'
        
        // Step 6: Perform addition of current digits along with carry
        int digit_sum = digit_a + digit_b + carry;
        carry = digit_sum / 10; // Calculate new carry
        digit_sum %= 10; // Calculate digit for the current position
        
        // Step 7: Append the resulting digit to the sum string
        sum.push_back(digit_sum + '0');
        
        j--; // Move to the next digit in 'b'
    }
    
    // Step 8: If there is a final carry left, append it to the sum
    if (carry) {
        sum.push_back(carry + '0');
    }
    
    // Step 9: Reverse the result string to obtain the correct order
    std::reverse(sum.begin(), sum.end());
    
    // Step 10: Return the final sum as a string
    return sum;
}
