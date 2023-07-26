#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, s;
    cin >> n  >> s;
    int a[n];
    int dp[s + 5]= {0};
    for (auto &i : a) {
        cin >> i;
        dp[i] = 1;//there is a subset
    }
    for (int i = 0; i < n; i++) {
        for (int j = s; j >= a[i]; j--) {
            dp[j] = max(dp[j], dp[j - a[i]]);
        }
    }
    if (dp[s]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}