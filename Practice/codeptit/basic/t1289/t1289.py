def gcd(a, b):
    while b != 0:
        r = a % b
        a = b
        b = r
    return a
def lcm(a, b):
    return a * b / gcd(a, b)
test = int(input())
while test > 0:
    a, b = map(int, input().split())
    print(int(gcd(a, b)), int(lcm(a, b)))
    test -= 1