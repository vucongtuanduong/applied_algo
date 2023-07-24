#include <bits/stdc++.h>
using namespace std;

/*
Cho một bảng số N hàng, M cột chỉ gồm 0 và 1. Bạn hãy tìm hình vuông có kích thước lớn nhất, sao cho các số trong hình vuông toàn là số 1.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
Mỗi test bắt đầu bởi 2 số nguyên N, M (1 ≤ N, M ≤ 500).
N dòng tiếp theo, mỗi dòng gồm M số mô tả một hàng của bảng.
Output: 

Với mỗi test, in ra đáp án là kích thước của hình vuông lớn nhất tìm được trên một dòng.
*/
int main () {
    int t;
    cin >> t;
    int rows, columns;
    while (t--) {
        cin >> rows >> columns;
        int a[rows][columns];
        int dp[rows][columns];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < rows; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < columns; j++) {
                a[i][j] = s[j] - '0';
                if (i == 0 || j == 0) {
                    dp[i][j] = a[i][j];
                } else {
                    if (a[i][j] == 1) {
                        dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                    } else {
                        dp[i][j] = 0;
                    }
                }
            }
        }
        int res = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0 ; j < columns; j++) {
                res = max(res, dp[i][j]);
            }
        }
        cout << res << endl;
    }
}