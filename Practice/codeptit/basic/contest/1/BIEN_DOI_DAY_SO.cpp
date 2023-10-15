#include <bits/stdc++.h>
using namespace std;
/*
Cho dãy số nguyên A[] có N phần tử. Một dãy số được coi là đẹp nếu trong dãy không có bất cứ cặp số cạnh nhau nào bằng nhau (tức là A[i] # A[i+1] với mọi chỉ số i từ 0 đến N-2).

Giả sử chi phí để thay đổi giá trị A[i] tăng hoặc giảm 1 đơn vị là B[i].

Hãy tính chi phí nhỏ nhất để biến đổi dãy số A[] ban đầu về dạng thỏa mãn tính chất “đẹp”.

Input

Dòng đầu ghi số bộ test T (1 < T ≤ 3*105).

Mỗi bộ test bắt đầu với số nguyên dương N (1 < N ≤ 3*105).

Tiếp theo là N dòng, mỗi dòng ghi 2 số A[i] và B[i]. Các giá trị đều nguyên dương và không quá 9 chữ số.

Dữ liệu vào đảm bảo kết quả tính được của mỗi test đều không quá 18 chữ số.

Output

Với mỗi bộ test, ghi ra chi phí nhỏ nhất có thể trên một dòng.
*/
void testCase()  {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    vector<long long> dp(n);
    dp[0] = min(a[0], b[0]);
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            dp[i] = dp[i - 1] + min(a[i], b[i]);
        } else {
            dp[i] = dp[i - 1] + min(a[i], b[i]);
            if (a[i] == b[i]) dp[i] = min(dp[i], dp[i - 1] + min(a[i - 1], b[i - 1]));
        }
    }
    cout << dp[n - 1] << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}