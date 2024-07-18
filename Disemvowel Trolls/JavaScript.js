function disemvowel(str) {
    const vowels = "aeiouAEIOU";
    return str.split('').filter(char => !vowels.includes(char)).join('');
}