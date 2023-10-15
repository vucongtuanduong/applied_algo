test = int(input())
while (test > 0) :
    s = str(input())
    s.split(" ")
    if int(s[0]) + int(s[4]) == int(s[8]): 
        print("YES")
    else:
        print("NO");
    test -= 1
