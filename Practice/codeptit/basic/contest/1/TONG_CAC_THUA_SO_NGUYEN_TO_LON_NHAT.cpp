#include <bits/stdc++.h>
using namespace std;
/*
Với mỗi số nguyên X trong đoạn [L, R], bạn cần tìm thừa số nguyên tố lớn nhất của X và tính tổng của chúng.

Ví dụ với [L, R] = [2, 12], ta có:

Số

Thừa số nguyên tố lớn nhất

2

2

3

3

4

2

5

5

6

3

7

7

8

2

9

3

10

5

11

11

12

3


Tính tổng: 2 + 3 + 2 + 5 + 3 + 7 + 2 + 3 + 5 + 11 + 3 = 46

Input:

Dòng đầu tiên là số nguyên bộ test T (T ≤ 100).

Mỗi test gồm 2 số nguyên L, R (2 ≤ L, R ≤ 100 000).

Output: 

Với mỗi test, in ra đáp án tìm được trên một dòng.
*/
void testCase() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        vector<int> a(r + 1, 0);
        for (int i = 2; i <= r; i++) {
            if (a[i] == 0) {
                for (int j = i; j <= r; j += i) a[j] = i;
            }
        }
        long long res = 0;
        for (int i = l; i <= r; i++) res += a[i];
        cout << res << endl;
    }
}
int main () {
    testCase();
}