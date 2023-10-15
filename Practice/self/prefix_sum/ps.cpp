#include <bits/stdc++.h>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
    freopen("ps_input.txt", "r", stdin);
    freopen("ps_output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i ++) cin >> a[i];
    int f[n + 1];//prefix sum array
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            f[i] = a[i];
        } else {
            f[i] = f[i - 1] + a[i];
        }
    } 
    for (int i = 1; i <= n; i++) {
        cout << f[i] << " ";
    }
    cout << endl;
    //tinh tong tu a[l] den a[r]
    int l, r;
    cin >> l >> r;
    ++l;
    ++r;
    cout << f[r] - f[l - 1];
}