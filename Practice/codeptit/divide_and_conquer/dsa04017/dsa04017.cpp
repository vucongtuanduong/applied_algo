#include <bits/stdc++.h>
using namespace std;
void scanArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void implement(int a[], int b[], int n) {
    int res = -1;
    for (int i = 0; i < n - 1; i++) {
        if (b[i] != a[i] && res == - 1) {
            res = i + 1;
            break;
        }
    }
    cout << res << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int b[n - 1];
        scanArray(a, n);
        scanArray(b, n - 1 );
        implement(a, b, n);
    }
}