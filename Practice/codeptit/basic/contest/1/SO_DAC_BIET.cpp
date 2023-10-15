#include <bits/stdc++.h>
using namespace std;
/*
Một số được gọi là đặc biệt nếu như tổng các chữ số của nó là một số nguyên tố. Cho số tự nhiên N, hãy đếm số cặp (x, y) nguyên dương thỏa mãn x, y là số đặc biệt và x + 2y = N.

Input:

Dữ liệu đầu vào chứa một số nguyên dương N (1<= N <= 10^15).

Output: 

In ra số cặp (x, y) thỏa mãn yêu cầu của đề bài.
*/
void testCase() {
    long long n;
    cin >> n;
    long long res = 0;
    for (long long i = 1; i <= n / 2; i++) {
        long long j = n - 2 * i;
        if (j > 0) {
            long long sum = 0;
            long long tmp = i;
            while (tmp > 0) {
                sum += tmp % 10;
                tmp /= 10;
            }
            tmp = j;
            while (tmp > 0) {
                sum += tmp % 10;
                tmp /= 10;
            }
            if (sum == 2) res++;
        }
    }
    cout << res << endl;
}
int main () {
    testCase();
}