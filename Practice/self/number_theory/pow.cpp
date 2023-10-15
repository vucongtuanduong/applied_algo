#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
long long powmod(long long a, long long b) {
    if (b == 0) {
        return 1;
    } 
    long long x = powmod(a, b / 2);
    if (b % 2 == 1) {
        return ((x % MOD) * (x % MOD) % MOD) * (a % MOD) % MOD;
    } else {
        return (x % MOD) * (x % MOD) % MOD;
    }
}
//dung vong lap
long long powmod2(long long a, long long b) {
    long long res = 1;
    while(b) {
        if (b % 2 == 1) {
            res *= a;
            res %= MOD;
        }
        a *= a;
        b /= 2;
        a %= MOD;
        cout << b << endl;
    }
    return res;
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output_pow.txt", "w", stdout);
    #endif
    cout << powmod(2, 100000000) << endl;
    
}