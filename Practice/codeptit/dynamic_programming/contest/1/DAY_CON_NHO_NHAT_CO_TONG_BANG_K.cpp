#include <bits/stdc++.h>
using namespace std;
/*
Cho dãy số A[] có N phần tử. Nhiệm vụ của bạn là tìm dãy con liên tiếp có độ dài nhỏ nhất, sao cho UCLN của các phần tử đúng bằng K.

Input

Dòng đầu tiên là số lượng bộ test T (T <= 10).
Mỗi test bắt đầu bằng 2 số nguyên N và K.
Dòng tiếp theo gồm N số nguyên A[i] (1 <= A[i], K <= 10^9).
Giới hạn:

Subtask 1 (40%): 1 <= N <= 1000
Subtask 2 (60%): 1 <= N <= 100 000.
 

Output

Với mỗi test, hãy in ra đáp án trên một dòng. Nếu không tìm được dãy con nào, in ra -1.
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        int res = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int i = 0, j = 0;
        int ucln = 0;
        while (j < n) {
            ucln = __gcd(ucln, a[j]);
            if (ucln == k) {
                while (__gcd(ucln, a[i]) == k) {
                    ucln = __gcd(ucln, a[i]);
                    i++;
                }
                res = min(res, j - i + 1);
            }
            j++;
        }
        if (res == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << res << endl;
        }
    }
}