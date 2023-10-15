#include <bits/stdc++.h>
using namespace std;
void testCase();
int sumDivisors(int n);
int isPrime(int n);
int main () {
    testCase();
}
void testCase() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            continue;
        }
        if (sumDivisors(i) > i) {
            count++;
            // cout << i << " ";
        }
    }
    cout << count;
}
int sumDivisors(int n) {
    if (n == 1) {
        return 0;
    }
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            res += i;
            if (i != n / i) {
                res += n / i;
            }
        }
    }
    return res;
}
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}