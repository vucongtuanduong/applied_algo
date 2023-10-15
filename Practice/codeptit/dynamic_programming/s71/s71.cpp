#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
void testCase () {
    int n, k;
    cin >> n >> k;
    long long temp = 0;
    vector<long long > f(1e5 + 1, 0);
    for (int i = 1; i <= k ;i++) {
        f[i] = temp + 1;
        f[i] %= MOD;
        temp += f[i];
        temp %= MOD;
    }
    for (int i = k + 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            f[i] += f[i - j];
            f[i] %= MOD;
        
        }
    }
    cout << f[n];
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}