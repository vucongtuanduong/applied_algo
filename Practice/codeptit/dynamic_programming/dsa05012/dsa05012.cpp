#include <bits/stdc++.h>
using namespace std;
long long c[1005][1005] = {0};
const int MOD = 1e9 + 7;
void prepare() {
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) {
            if (j == 0 || j == i) {
                c[i][j] = 1;
            } else if (j == 1 || j == i - 1) {
                c[i][j] = i;
            } else  {
                c[i][j] = c[i - 1][j - 1] + c[i -1][j];
            }
            c[i][j] %= MOD;
        }
    }
}
void testCase() {
    int n, k;
    cin >> n >> k;
    cout << c[n][k] << endl;
}
int main () {
    int t;
    cin >> t;
    prepare();
    while(t--) {
        testCase() ;
    }
}