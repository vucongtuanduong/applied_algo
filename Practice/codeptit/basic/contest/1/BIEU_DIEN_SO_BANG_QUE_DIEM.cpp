#include <bits/stdc++.h>
using namespace std;
/*
Hệ thống số sử dụng đèn LED gồm 7 thanh để biểu diễn các số cũng tương tự như trò chơi xếp số bằng các que diêm quen thuộc. Các số sẽ được biểu diễn thông qua các que diêm như hình dưới.



Bài toán đặt ra là cho trước số que diêm được dùng và tập các chữ số được chọn (có thể không đủ 10 chữ số). Hãy tính giá trị lớn nhất có thể tạo ra được khi sử dụng tất cả các que diêm đó.

Input

Dòng đầu tiên ghi hai số N, M lần lượt là số que diêm và số lượng chữ số được dùng.

(2 ≤ N ≤ 105; 1 ≤ M ≤ 10)

Dòng thứ 2 có M chữ số phân biệt theo thứ tự tăng dần.

Output

Ghi ra giá trị số nguyên dương lớn nhất có thể tạo được.
*/
void testCase() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (auto x : a) {
            if (i - x >= 0 && dp[i - x] != -1) {
                dp[i] = max(dp[i], dp[i - x] * 10 + x);
            }
        }
    }
    cout << dp[n] << endl;
}
int main () {
    testCase();
}