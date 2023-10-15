import math

def sumDigits(n):
    res = 0
    while n > 0:
        res += n % 10
        n //= 10
    return res
def sumDivisors(n): 
    res = 0
    sqrtN = int(math.sqrt(n))
    i = 2
    for i in range(2, sqrtN + 1):
        while n % i == 0:
            res += sumDigits(i)
            n //= i
    if n > 1:
        res += sumDigits(n)
        
    return res