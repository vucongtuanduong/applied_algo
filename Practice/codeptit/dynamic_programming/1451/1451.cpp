#include <bits/stdc++.h>
using namespace std;

/*
Cho xâu ký tự S. Nhiệm vụ của bạn là tìm độ dài dãy con lặp lại dài nhất trong S. Dãy con có thể chứa các phần tử không liên tiếp nhau.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào độ dài xâu str; dòng tiếp theo đưa vào xâu S.
T, str thỏa mãn ràng buộc: 1 ≤ T ≤ 100;  1 ≤ size(S) ≤ 100.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
*/
int implement(string s, int n) {
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
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << implement(s, n) << endl;
    }


}