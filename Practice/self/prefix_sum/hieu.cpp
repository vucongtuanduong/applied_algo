#include <bits/stdc++.h>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
    freopen("hieu_input.txt", "r", stdin);
    freopen("hieu_output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++) cin >> a[i];
    int d[n + 1];//prefix sum array
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            d[i] = a[i];
        } else {
            d[i] = d[i - 1] + a[i];
        }
    } 
    for (int i = 0; i < n; i++) {
        cout << d[i] << " ";
    }
    cout << endl;
    int l, r, k;
    cin >> l >> r >> k;
    d[l] += k;
    d[r + 1] -= k;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            a[i] = d[i];
        } else {
            a[i] = d[i] + a[i - 1];
        }
        cout << a[i] << " ";
    }
}