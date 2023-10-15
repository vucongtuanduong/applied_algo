#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n;
    cin >> n;
    int a[n];
    int f[n];
    for (auto &i : a) {
        cin >> i;
    }
    f[0] = a[0];
    f[1] = max(a[1], a[0]);
    for (int i = 2; i < n ; i++) {
        f[i] = max(f[i - 2] + a[i], f[i - 1]);
    }
    cout << f[n - 1] ;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}