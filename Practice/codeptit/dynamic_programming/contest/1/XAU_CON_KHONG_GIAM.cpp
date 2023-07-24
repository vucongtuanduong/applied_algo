#include <bits/stdc++.h>
using namespace std;
/*
Cho một xâu ký tự S chỉ bao gồm các chữ cái in hoa. Xâu con được định nghĩa là một tập con khác rỗng các ký tự lấy từ xâu S giữ nguyên thứ tự ban đầu.

Xâu con không giảm C của S là xâu con của S thỏa mãn với mọi cặp vị trí i < j trong xâu thì C[i] ≤ C[j].

Hãy tính độ dài của xâu con không giảm dài nhất trong xâu S.
*/
int implement(string s) {
    int n = s.length();
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] >= s[i - 1]) {
            dp[i] = dp[i - 1] + 1;
        } else {
            dp[i] = 1;
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = max(res, dp[i]);
    }
    return res;
}

int main () {
    string s;
    cin >> s;
    cout << implement(s);
}