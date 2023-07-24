#include <bits/stdc++.h>
using namespace std;
int n, k;
long long a[15][15], d[15][15];
const int MOD = 1e9 + 7;
void init() {

}
void mul(long long a[15][15], long long b[15][15]) {
    long long c[n + 1][n + 1] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= MOD;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = c[i][j];
        }
    }
}
void pow(long long a[15][15], int k) {
    if (k == 1) {
        return ;
    }
    pow(a, k / 2);
    mul(a, a);
    if (k % 2 == 1) {
        mul(a, d);
    }
}
void testCase() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            d[i][j] = a[i][j];
        }
    }
    pow(a, k);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}