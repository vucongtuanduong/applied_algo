
#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0 ; i< n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - k ;i++) {
        // cout << v[i] << " ";
        int r = n  - k;
        for (int j = i + 1; j < r; j++) {
            cout << v[i] << " ";
            for (int k = i + 1; k < r; k++) {
                cout << v[k] << " ";
            }
            
        }
        cout << endl;
    }
}
