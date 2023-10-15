def gcd( a, b):
    while b != 0:
        r = a % b
        a = b
        b = r
    return a
def lcm(a, b):
    return (a * b) / gcd(a, b)
test = int(input())
while (test > 0) :
    s1 = int(input())
    s2 = int(input())
    print(int(lcm(s1, s2)))
    test -= 1