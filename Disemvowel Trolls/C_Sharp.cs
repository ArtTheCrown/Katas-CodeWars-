using System;
using System.Linq;

public static class Kata
{
    public static string Disemvowel(string str)
    {
        return new string(str.Where(x => !"aAeEiIoOuU".Contains(x)).ToArray());
    }
}
