function add(a, b) {
    // Step 1: Determine the lengths of the two input strings
    let n = a.length;
    let m = b.length;
    
    // Step 2: Ensure string 'a' is not shorter than string 'b'; swap if necessary
    if (n < m) {
        return add(b, a); // Swap 'a' and 'b' to simplify logic
    }
    
    // Step 3: Initialize variables for the addition process
    let sum = '';
    let carry = 0;
    let j = m - 1; // Start index for string 'b'
    
    // Step 4: Traverse both strings from the end to the beginning
    for (let i = n - 1; i >= 0; i--) {
        // Step 5: Convert characters to integers and handle missing digits in 'b'
        let digit_a = parseInt(a[i], 10);
        let digit_b = j >= 0 ? parseInt(b[j], 10) : 0; // Use 0 for missing digits in 'b'
        
        // Step 6: Perform addition of current digits along with carry
        let digit_sum = digit_a + digit_b + carry;
        carry = Math.floor(digit_sum / 10); // Calculate new carry
        digit_sum %= 10; // Calculate digit for the current position
        
        // Step 7: Append the resulting digit to the sum string
        sum = digit_sum.toString() + sum;
        
        j--; // Move to the next digit in 'b'
    }
    
    // Step 8: If there is a final carry left, append it to the sum
    if (carry) {
        sum = carry.toString() + sum;
    }
    
    // Step 9: Return the final sum as a string
    return sum;
}