/*
    comment Header: Need
    Name : Ex1.cpp
    Copyright: (C) 2023
    Author: Duong Vu Cong Tuan
    Date: 05/07/2023 
    Description: a simple program to test the file
    Introduction:
    Structure of C++ program
*/
// include library
#include <bits/stdc++.h>

using namespace std;

int main () {
    int a = 2;
    int b = 3;
    int *v = &a;
    cout << "a: " << a << ", b: " << b << ", v: " << *v << "\n";
    *v = a + b;
    cout << "a: " << a << ", b: " << b << ", v: " << *v << "\n";
    return 0;
}
