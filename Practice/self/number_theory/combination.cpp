#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e7;
const int MOD = 1e9+7;
//tinh C(n,k)
long long C[1005][1005];
void solve() {
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                C[i][j] = 1;
            } else {
                C[i][j] = C[i-1][j-1] + C[i-1][j];
            }
        }
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("combination_input.txt", "r", stdin);
    freopen("combination_output.txt", "w", stdout);
    #endif
    solve();
    int n, k;
    cin >> n >> k;
    cout << C[n][k] << endl;
}