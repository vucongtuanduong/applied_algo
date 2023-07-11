#include <bits/stdc++.h>
/*
given an positive integer n: find first two prime numbers a and 
b such that a + b = n. If there are none, print "-1"

*/

using namespace std;

int isPrime(int n) {
    if (n < 2) {
        return 0;
    } else {
        int x = sqrt(n);
        for (int i = 2; i <= x; i ++) {
            if (n % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}
void pairPrime(int n) {
    int a = 0, b = 0;
    int x = n / 2;
    for (int i = 2; i <= x; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            a = i;
            b = n - i;
            break;
        }
    }
    if (a == 0 && b == 0) {
        cout << "-1\n";
    } else {
        cout << a << " " << b << "\n";
    }
}
/*
Cho số tự nhiên N. Hãy tìm cặp số nguyên tố đầu tiên có tổng là N. Nếu không tồn tại cặp số nguyên tố có tổng bằng N, hãy đưa ra -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm là một số N được ghi trên một dòng.
T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤106.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
*/

int main () {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        pairPrime(n);
    }
}