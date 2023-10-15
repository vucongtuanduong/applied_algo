#include <bits/stdc++.h>
using namespace std;
/*
Cho dãy số nguyên không âm A[], vị trí S và số nguyên K. Tìm vị trí T nhỏ nhất sao cho:

A[T] + A[T+1] + … + A[S] ≤ K.

Input:

Dòng đầu tiên là số nguyên bộ test T (T ≤ 20).

Mỗi test bắt đầu bởi 3 số nguyên N, S và K (N ≤ 105, S ≤ N, K ≤ 109).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10 000).

Output: 

Với mỗi test, in ra chỉ số T nhỏ nhất tìm được. Nếu không có đáp án, in ra -1.
*/
void testCase() {
    int n, s, k;
    cin >> n >> s >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) {
            a[i] += a[i - 1];
        }
    }
    int res = -1;
    for (int i = 0; i < n; i++) {
        int l = i, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            int sum = a[mid] - a[i] + a[i - 1];
            if (sum <= k) {
                res = max(res, mid);
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    cout << res + 1;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout <<endl;
    }
}