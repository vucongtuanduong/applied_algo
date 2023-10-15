#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
void testCase() {
    int n, k;
    cin >> n >> k;
    long long res = 1;
    if (k > n) {
        cout << "0" << endl;
        return;
    } else if (k == 0) {
        cout << "1" << endl;
        return;
    } else {
        
        for (int i = n - k + 1; i <= n; i++) {
            res = (res * i) % MOD;
        }
    }
    cout << res << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}