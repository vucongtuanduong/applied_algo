#include <bits/stdc++.h>
using namespace std;
/*
Cho 2 số nguyên A, B. Nhiệm vụ của bạn là hãy đếm xem mỗi chữ số sẽ xuất hiện bao nhiêu lần nếu như liệt kê tất cả các số từ A đến B.

Input

Số đầu tiên là số lượng bộ test T (T ≤ 5000). Mỗi test gồm 2 số nguyên A và B.
Output

Với mỗi test, hãy in ra trên một dòng 10 số nguyên, là tần số xuất hiện của các chữ số từ 0 đến 9.
*/
void testCase() {
    int a, b;
    cin >> a >> b;
    vector<int> cnt(10);
    for (int i = a; i <= b; i++) {
        int tmp = i;
        while (tmp > 0) {
            cnt[tmp % 10]++;
            tmp /= 10;
        }
    }
    for (int i = 0; i < 10; i++) cout << cnt[i] << " ";
    cout << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}