function getVowelCount(str) {
    const vowels = "aeiouAEIOU";
    return Array.from(str).reduce((count, char) => vowels.includes(char) ? count + 1 : count, 0);
}