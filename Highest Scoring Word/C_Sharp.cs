using System;

public class Kata
{
    public static string High(string s)
    {
        // Split the input string into individual words
        string[] words = s.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);

        // Function to calculate the score of a word
        int WordScore(string word)
        {
            int score = 0;
            foreach (char c in word)
            {
                score += (int)c - (int)'a' + 1;
            }
            return score;
        }

        string highestWord = "";
        int highestScore = 0;

        // Iterate through each word to find the highest scoring word
        foreach (string word in words)
        {
            int score = WordScore(word);
            if (score > highestScore)
            {
                highestScore = score;
                highestWord = word;
            }
        }

        return highestWord;
    }
}