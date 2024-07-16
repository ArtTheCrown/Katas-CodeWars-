using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

public class TopWords
{
    public static List<string> Top3(string s)
    {
        // Step 1: Extract words with case sensitivity
        var words = Regex.Matches(s, @"\b[a-zA-Z]+(?:'[a-zA-Z]+)?\b")
                         .Cast<Match>()
                         .Select(m => m.Value.ToLower())
                         .ToArray();
      
        var wordCount = new Dictionary<string, int>();
      
        // Step 2: Count occurrences of each word
        foreach (string word in words)
        {
            if (wordCount.ContainsKey(word))
                wordCount[word]++;
            else
                wordCount[word] = 1;
        }

        // Step 3: Sort words by occurrence in descending order
        var sortedWords = wordCount.OrderByDescending(pair => pair.Value)
                                   .ThenBy(pair => pair.Key)
                                   .Select(pair => pair.Key)
                                   .Take(3)
                                   .ToList();

        return sortedWords;
    }
}
