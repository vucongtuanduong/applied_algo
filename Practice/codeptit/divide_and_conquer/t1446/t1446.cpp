#include <bits/stdc++.h>
using namespace std;
/*
using divide and conquer!
Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi “gấp đôi” dãy số như sau:

Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên bé nhất chưa xuất hiện trong A.

Ví dụ với 2 bước biến đổi, ta có [1]  [1 2 1]  [1 2 1 3 1 2 1].

Các bạn hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 50, 1 ≤ K ≤ 2N - 1).

Output: 

Với mỗi test, in ra đáp án trên một dòng.
*/
// void implement(int n, int k) {
//     if (n == 1) {
//         cout << 1 << endl;
//         return ;
//     }
//     if (k == 1) {
//         cout << 1 << endl;
//         return ;
//     }
//     if (k == 2 * n - 1) {
//         cout << n << endl;
//         return ;
//     }
//     if (k % 2 == 0) {
//         implement(n - 1, k / 2);
//     } else {
//         implement(n - 1, (k + 1) / 2);
//     }
// }
vector <long long> f(55);
void init() {
    f[1] = 1;
    for (int i = 2; i < f.size(); i++) {
        f[i] = f[i - 1] * 2 ;
    }
}
void implement(long long n, long long k) {
    for (int i = n; i >= 1; i--) {
        if (k > f[i]) {
            k -= f[i];
        } else if (k == f[i]) {
            cout << i << endl;
            return;
        }
    }
}
int main () {
    int t;
    cin >> t;
    init();
    while (t--) {
        long long n, k;
        cin >> n >> k;
        implement(n, k);
        
    }
}