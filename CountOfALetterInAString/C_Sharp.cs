using System.Linq;
class Kata
{
    public static int StrCount(string str, char letter)
    {
        return str.Where(x => x == letter).Count();
    }
}