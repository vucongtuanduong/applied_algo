#include <bits/stdc++.h>
using namespace std;
/*
dynamic programming: Cho một dãy số nguyên gồm N phần tử A[1], A[2], ... A[N]. 

Biết rằng dãy con tăng là 1 dãy A[i1],... A[ik]

thỏa mãn i1 < i2 < ... < ik và A[i1] < A[i2] < .. < A[ik].

Hãy cho biết dãy con tăng dài nhất của dãy này có bao nhiêu phần tử? 

Input: Dòng 1 gồm 1 số nguyên là số N (1 ≤ N ≤ 1000). Dòng thứ 2 ghi N số nguyên A[1], A[2], .. A[N] (1 ≤ A[i] ≤ 1000). 

Output: Ghi ra độ dài của dãy con tăng dài nhất.
*/
void implement(int a[], int n) {
    int dp[n];
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
    }
    int max = 1;
    for (int i = 1; i < n; i++) {
        int temp = 0;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j] && dp[j] > temp) {
                temp = dp[j];
            }
        }
        dp[i] = temp + 1;
        if (dp[i] > max) {
            max = dp[i];
        }
    }
    cout << max;
}
int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n ; i++) {
        cin >> a[i];
    }
    implement(a, n);
}