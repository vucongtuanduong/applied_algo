#include <bits/stdc++.h>
using namespace std;
/*
divide and conquer:given the positive number n. find how many sequnce has sum of elements is n
MEMORY OPIMIZATION!!!
*/
const int MOD = 123456789;
// int divide_conquer(long long n) {
//     if (n == 1) {
//         return 1;
//     } else if (n == 0) {
//         return 0;
//     }
//      else {
//         return divide_conquer(n - 1) + divide_conquer(n - 2);
//     }
// }
// void go(long long n) {
//     long long ans = 0;
//     for (long long i = 1; i <= n; i++) {
//         ans += divide_conquer(i);
//     }
//     double res = ans % MOD;
//     cout << res << endl;
// }
// void implement(long long n) {
//     long long dp[n + 1];
//     dp[0] = 0;
//     dp[1] = 1;
//     long long sum = 1;
//     for (long long i = 2; i <= n; i++) {
//         dp[i] = dp[i - 1] + dp[i - 2];
//         sum += dp[i];
//     }
//     cout << sum % MOD << endl;
// }
// void implement2(long long n) {
//     long long dp[n + 1];
//     dp[0] = 0;
//     dp[1] = 1;
//     long long sum = 1;
//     for (long long i = 2; i <= n; i++) {
//         dp[i] = dp[i - 1] + dp[i - 2];
//         sum += dp[i];
//     }
//     cout << sum % MOD << endl;
// }



//kien thuc la 2 ^ (n - 1) la so day co tong bang n
long long Pow(long long n, long long k) {
    if (k == 0) {
        return 1;
    }
    long long x = Pow(n, k / 2);
    if (k % 2 == 0) {
        return x * x % MOD;
    }
    return (n * ((x * x) % MOD)) % MOD;
}
void testCase() {
    long long n;
    cin >> n;
    cout << Pow(2, n - 1) << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}