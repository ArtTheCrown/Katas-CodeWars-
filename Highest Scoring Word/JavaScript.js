function high(x) {
    // Split the input string into individual words
    const words = x.split(' ');

    // Function to calculate the score of a word
    function wordScore(word) {
        let score = 0;
        for (let i = 0; i < word.length; i++) {
            score += word.charCodeAt(i) - 96; // 'a' is 97 in ASCII, so 'a' - 96 gives 1, 'b' - 96 gives 2, etc.
        }
        return score;
    }

    let highestScore = 0;
    let highestWord = '';

    // Iterate through each word to find the highest scoring word
    for (let word of words) {
        let score = wordScore(word);
        if (score > highestScore) {
            highestScore = score;
            highestWord = word;
        }
    }

    return highestWord;
}