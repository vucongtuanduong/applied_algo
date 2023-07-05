/*
    comment Header: Need
    Name : tri_num.cpp
    Copyright: (C) 2023
    Author: Duong Vu Cong Tuan
    Date: 05/07/2023 
    Description: a program to check if a given number is a triangle number or not
    Introduction:
    Structure of C++ program
*/

/*
IBM  Clean Room Principle:
    -empty room is a clean room
    -(1 command /1 test): add one line of code at a time and test it

-Linh canh
-Gia mu
-Tai su dung ( dung xoa, bit)
*/
// include library
#include <bits/stdc++.h>

using namespace std;
// x la so tam giac thu may
// ton tai n: T(n) = x
// T(n) = 1 + 2 + .. + n = n(n + 1) / 2
// T(n) = (dau + cuoi) * n / d

int numTriangleNumber(int x) {
    // n (n + 1)  = 2x
    int x2 = x + x;
    int n  = (int)sqrt(x2); // n or n + 1
    return (n * (n + 1) == x2) ? n : -1;

}
void test(int n) {
    int res = numTriangleNumber(n);
    if (res == -1) {
        cout << n << " is not a triangle number\n";
    } else {
        cout << n << " is a triangle number\n";
    }
}
//T(0) = 0, T(1) = 1, T(2) = 3, T(3) = 6, T(4) = 10, T(5) = 15, T(6) = 21 
void test1() {
    int a[] = {0, 1, 3, 6, 10, 15, 21, -1};
    for (int i = 0; a[i] != -1; i++) {
        cout << "\n T(" << i << ") = " << numTriangleNumber(a[i]);
    }

}

void test2() {
    //sinh
    for (int n = 0; n <= 100; n++) {
        int x = n * (n + 1) / 2;
        cout << "\n T(" << x << ") = " << n;
        cout << "\n T(" << x + 3 << ") = " << numTriangleNumber(x + 3);
    }

}
void test3(string s) {
    stringstream ss(s);
    
    while (true) {
        int x;
        ss >> x;
        if (x < 0) {
            break;
        }
        cout << "\n T(" << x << ") = " << numTriangleNumber(x);
    }

}
int isTriangleNumber (int n) {
    if (n == 0) {
        return 0;
    }
    int res = 0;
    for (int i = 0; i <= n; i++) {
        res = i * (i + 1) / 2;
        if (res == n) {
            return 1;
        }
    }
    return 0;
}
void check(int n) {
    if (isTriangleNumber(n)) {
        cout << n << " is a triangle number\n";
    } else {
        cout << n << " is not a triangle number\n";
    }
}
int main () {
    // int n;              
    // cin >> n;
    // test1();
    // test2();
    test3("10 3 5 1 17 190 3 21 0 5050 -1");
}   