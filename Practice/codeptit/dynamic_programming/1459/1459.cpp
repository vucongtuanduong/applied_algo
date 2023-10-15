#include <bits/stdc++.h>
using namespace std;
/*
Cho xâu S chỉ bao gồm các ký tự viết thường và dài không quá 1000 ký tự.

Hãy tìm xâu con đối xứng dài nhất của S.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
Mỗi test gồm một xâu S có độ dài không vượt quá 1000, chỉ gồm các kí tự thường.
Output:  Với mỗi test, in ra đáp án tìm được.
*/
int implement(string s) {
    int n = s.length();
    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        dp[i][i] = 1;
    }
    for (int i = 1; i <= n - 1; i++) {
        if (s[i - 1] == s[i]) {
            dp[i][i + 1] = 1;
        }
    }
    for (int k = 3; k <= n; k++) {
        for (int i = 1; i <= n - k + 1; i++) {
            int j = i + k - 1;
            if (s[i - 1] == s[j - 1] && dp[i + 1][j - 1] == 1) {
                dp[i][j] = 1;
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (dp[1][i] == 1) {
            res = i;
        }
    }
    return res;
}
//atempt 2
int palindrome(string s) {
    int n = s.length();
    int *a = new int[n];
    int *b = new int[n];
    fill(a, a + n, 0);
    a[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        b[i] = 1;
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                b[j] = a[j - 1] + 2;
            } else {
                b[j] = max(a[j], b[j - 1]);
            }
        }
        int *c = a;
        a = b;
        b = c;
    }
    return a[n - 1];
}
// attempt 3
bool f[1000][1000];
int palindrome2(string s) {
    int n = s.length();
    memset(f, false, sizeof(f));
    for (int i = 0; i < n; i++) {
        f[i][i] = true;
    }
    int res = 1;
    for (int k = 1; k < n; k++) {
        for (int i = 0; i < n - k; i++) {
            int j = i + k;//the element from other side
            if (s[i] == s[j] && k == 1) {
                f[i][j] = 1;
            } else if (s[i] == s[j] && k > 1) {
                f[i][j] = f[i + 1][j - 1];
            } else {
                f[i][j] = 0;
            }
            if (f[i][j] == 1) {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}
int main () {
    int t;
    cin >> t;
    getchar();
    while (t--) {
        string s;
        cin >> s;
        // cout << implement(s) << endl;
        // cout << palindrome(s) << endl;
        cout << palindrome2(s) << endl;
    }
}