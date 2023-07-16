#include <bits/stdc++.h>
using namespace std;
/*
given the positive number n. find how many sequnce has sum of elements is n
*/
const int MOD = 123456789;
int divide_conquer(long long n) {
    if (n == 1) {
        return 1;
    } else if (n == 0) {
        return 0;
    }
     else {
        return divide_conquer(n - 1) + divide_conquer(n - 2);
    }
}
void go(long long n) {
    long long ans = 0;
    for (long long i = 1; i <= n; i++) {
        ans += divide_conquer(i);
    }
    double res = ans % MOD;
    cout << res << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        go(n);
    }
}