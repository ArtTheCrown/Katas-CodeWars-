function digitalRoot(n) {
    const sumDigits = n.toString().split('').reduce((total, digit) => total + parseInt(digit, 10), 0);
    return sumDigits < 10 ? sumDigits : digitalRoot(sumDigits);
}