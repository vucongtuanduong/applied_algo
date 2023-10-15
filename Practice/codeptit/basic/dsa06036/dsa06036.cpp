#include <bits/stdc++.h>
using namespace std;
void testCase () {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = k - a[i] - a[j];
            res += binary_search(a.begin() + j + 1, a.end(), temp);
        }
    }
    if (res != 0) {
        cout << "YES";
    } else {
        cout << "NO";
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
