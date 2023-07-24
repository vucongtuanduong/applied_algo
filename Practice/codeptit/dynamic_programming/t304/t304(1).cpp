//
// Created by P51 on 7/22/2023.
//
#include <bits/stdc++.h>
using namespace std;
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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    implement(a, n);
}
