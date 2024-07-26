def digital_root(n):
    sum_digits = sum(int(digit) for digit in str(n))
    return sum_digits if sum_digits < 10 else digital_root(sum_digits)