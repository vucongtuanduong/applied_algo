#include <bits/stdc++.h>
using namespace std;
/*
Cho hai số nguyên lớn N và M có không quá 1000 chữ số. Người ta muốn tính xem liệu có thể lấy ra nhiều nhất bao nhiêu chữ số trong N, không cần liên tiếp nhau nhưng phải giữ nguyên thứ tự ban đầu để tạo ra một số X sao cho ta cũng có thể tìm thấy X trong số M theo cách tương tự.
*/
int implement(int n, int m) {
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m ; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            } else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    
    return dp[n][m];
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << implement(n, m) << endl;
    }
}