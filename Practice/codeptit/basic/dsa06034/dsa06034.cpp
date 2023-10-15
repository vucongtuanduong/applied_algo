#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for (int i =0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long res = 0;
    for (int i = 0; i < n; i++) {
        int temp = k - a[i];
        res += upper_bound(a.begin() + i + 1, a.end(), temp) - lower_bound(a.begin() + i + 1, a.end(), temp);
    }
    cout << res;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}