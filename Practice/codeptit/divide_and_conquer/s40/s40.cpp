#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
long long Pow(long long n, long long k) {
    if (k == 0) {
        return 1;
    }
    long long x = Pow(n, k / 2);
    if (k % 2 == 0) {
        return x * x % MOD;
    }
    return (n * (x * x % MOD)  % MOD);
}
int main () {
    long long a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            return 0;
        }
        cout << Pow(a, b) << endl;
    }
}