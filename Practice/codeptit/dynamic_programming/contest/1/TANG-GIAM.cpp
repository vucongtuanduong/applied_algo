#include <bits/stdc++.h>
using namespace std;
/*
Cho hai dãy số thực A[] và B[] đều có N phần tử, các giá trị là số thực và không quá 100.

Hãy tính độ dài dài nhất của dãy các vị trí (không cần liên tiếp) thỏa mãn cả hai điều kiện:

Nếu xét các vị trí đó trên dãy A[] thì dãy con thu được thỏa mãn tính chất tăng dần (giá trị bằng nhau không được tính vào dãy tăng).
Nếu xét các vị trí đó trên dãy B[] thì dãy con thu được thỏa mãn tính chất giảm dần (giá trị bằng nhau không được tính vào dãy giảm).
*/
int implement(vector<double> a, vector<double> b) {
    int n = a.size();
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        int j = i + 1;
        while (j < n) {
            if (a[j] > a[j - 1]) {
                dp[i][j] = dp[i][j - 1] + 1;
            } else {
                dp[i][j] = dp[i][j - 1];
            }
            j++;
        }
        j = i + 1;
        while (j < n) {
            if (b[j] < b[j - 1]) {
                dp[i][j] = max(dp[i][j], dp[i][j - 1] + 1);
            } else {
                dp[i][j] = max(dp[i][j], dp[i][j - 1]);
            }
            j++;
        }
        res = max(res, dp[i][n - 1]);
    }
    return res;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<double> a(n);
        vector<double> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }
        cout << implement(a, b) << endl;
    }
}