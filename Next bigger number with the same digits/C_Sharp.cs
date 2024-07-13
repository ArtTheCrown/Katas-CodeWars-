using System;
using System.Linq;

public class Kata
{
    public static long NextBiggerNumber(long n)
    {
        char[] digits = n.ToString().ToCharArray();

        // Step 1: Find the pivot, the first digit that is smaller than the digit next to it.
        int i = digits.Length - 2;
        while (i >= 0 && digits[i] >= digits[i + 1])
        {
            i--;
        }

        // If no pivot is found, the digits are in descending order and cannot form a bigger number.
        if (i < 0)
        {
            return -1;
        }

        // Step 2: Find the smallest digit on the right side of the pivot that is larger than the pivot.
        int j = digits.Length - 1;
        while (digits[j] <= digits[i])
        {
            j--;
        }

        // Step 3: Swap the pivot with this smallest digit.
        Swap(ref digits, i, j);

        // Step 4: Reverse the order of the digits to the right of the pivot.
        Array.Reverse(digits, i + 1, digits.Length - i - 1);


        return long.Parse(new string(digits));
    }

    private static void Swap(ref char[] digits, int i, int j)
    {
        char temp = digits[i];
        digits[i] = digits[j];
        digits[j] = temp;
    }
}