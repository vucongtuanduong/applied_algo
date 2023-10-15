#include  <bits/stdc++.h>
using namespace std;
long long c[1005][1005];
const int MOD = 1e9 + 7;
void init() {
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) {
            if (j == 0 || j == i) {
                c[i][j] = 1;
            } else {
                c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
            }
            c[i][j] %= MOD;
        }
    }
}
void testCase() {
    int n, k;
    cin >> n >> k;
    cout << c[n][k];
}
int main () {
    int t;
    cin >> t;
    init();
    while (t--) {
        testCase();
        cout << endl;
    }
}