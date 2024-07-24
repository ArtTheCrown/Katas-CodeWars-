using System;
using System.Linq;

public class Number
{
    public static int DigitalRoot(long n)
    {
        int sum = n.ToString().ToCharArray().Select(c => int.Parse(c.ToString())).Aggregate(0, (total, next) => total + next);
        return sum < 10 ? sum : DigitalRoot(sum);
    }
}
