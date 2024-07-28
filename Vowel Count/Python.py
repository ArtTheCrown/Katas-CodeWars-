def get_count(s):
    vowels = "aeiouAEIOU"
    return sum(1 for char in s if char in vowels)
