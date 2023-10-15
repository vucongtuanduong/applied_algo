#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e7;
const int MOD = 1e9+7;
long long f[MAX];
long long fibo(int n) {
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = f[i-1] + f[i-2];
        f[i] %= MOD;
    }
    return f[n];
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("fibo_output.txt", "w", stdout);
    #endif

    
}