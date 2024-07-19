def high(x):
    # Split the input string into individual words
    words = x.split()
    
    # Function to calculate the score of a word
    def word_score(word):
        score = 0
        for char in word:
            score += ord(char) - 96  # 'a' is 97 in ASCII, so 'a' - 96 gives 1, 'b' - 96 gives 2, etc.
        return score
    
    highest_score = 0
    highest_word = ''
    
    # Iterate through each word to find the highest scoring word
    for word in words:
        score = word_score(word)
        if score > highest_score:
            highest_score = score
            highest_word = word
    
    return highest_word
