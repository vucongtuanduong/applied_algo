#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
long long reverse(long long n) {
    long long res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;

}
long long poww(long long n, long long k) {
    if (k == 0) {
        return 1;
    }
    // if (k == 1) {
    //     return n;
    // }
    long long res = poww(n, k / 2);
    if (k % 2 == 0) {
        return (res * res) % MOD;
    } else {
        return (n * ((res * res) % MOD)) % MOD;
    }
}
void testCase() {
    long long n;
    cin >> n;
    string n1 = to_string(n);
    reverse(n1.begin(), n1.end());

    long long rev = stoll(n1);
    cout << poww(n, rev);
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}