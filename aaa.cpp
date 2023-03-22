def gcd_iterative(num1, num2):
"""
Iterative function to find GCD of two numbers.
"""
smaller_num = min(num1, num2)
    for i in range(smaller_num, 0, -1):
        if num1 % i == 0 and num2 % i == 0:
            return i
    return 1