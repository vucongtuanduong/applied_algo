#include <bits/stdc++.h>
using namespace std;
/*
Cho bảng A[] kích thước N x M (N hàng, M cột). Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới. Khi đi qua ô (i, j), điểm nhận được bằng A[i][j].

Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là nhỏ nhất.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm số nguyên dương N và M.
N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j] (0 ≤ A[i] ≤ 1000).
Output: 

Với mỗi test, in ra độ dài dãy con tăng dài nhất trên một dòng.
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