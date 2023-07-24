#include <bits/stdc++.h>
using namespace std;\
/*
Một tên trộm đột nhập vào một cửa hiệu tìm thấy n món hàng có trọng lượng và giá trị khác nhau, nhưng hắn chỉ mang theo một cái túi có sức chứa về trọng lượng tối đa là M. Vậy tên trộm nên bỏ vào túi những món nào để đạt giá trị cao nhất trong khả năng mà hắn có thể mang đi được.

Input

Dòng đầu tiên chứa hai số nguyên dương n và M (1 ≤ n, M ≤ 5000).
n dòng tiếp theo, mỗi dòng chứa hai số nguyên dương x và y mô tả một đồ vật có trọng lượng x và giá trị y (1 ≤ x ≤ M, 1 ≤ y ≤ 10000).
Output

In ra tổng giá trị lớn nhất đạt được.
*/
int implement(int n, int m) {
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = 1; j <= m; j++) {
            if (j >= x) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - x] + y);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][m];
}
int main () {
    int n, m;
    cin >> n >> m;
    cout << implement(n, m);

}