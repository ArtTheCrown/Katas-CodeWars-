using System;
using System.Linq;

public class Kata
{
    public static string SpinWords(string sentence)
    {
        return string.Join(" ", sentence
            .Split(' ')
            .Select(word => word.Length >= 5 ? new string(word.Reverse().ToArray()) : word));
    }
}