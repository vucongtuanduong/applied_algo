#include <bits/stdc++.h>
using namespace std;
/*
Cho ba xâu ký tự X, Y, Z. Nhiệm vụ của bạn là tìm độ dài dãy con chung dài nhất có mặt trong cả ba xâu. 
*/
int implement(string s1, string s2, string s3) {
    int n1 = s1.length();
    int n2 = s2.length();
    int n3 = s3.length();
    int dp[n1 + 1][n2 + 1][n3 + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2 ; j++) {
            for (int k = 1; k <= n3; k++) {
                if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]) {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                } else {
                    dp[i][j][k] = max(dp[i - 1][j][k], max(dp[i][j - 1][k], dp[i][j][k - 1]));
                }
            }
        }
    }
    return dp[n1][n2][n3];
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        cout << implement(s1, s2, s3) << endl;
    }
}