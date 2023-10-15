#include <bits/stdc++.h>
using namespace std;
void testCase () {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res;
    for (int i = 1; i < n; i++) {
        bool ok = true;
        for (int j = 0; j < n - i; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                ok  =false;
            }
            
        }
        if (ok == true) {
                break;
        }
       
        res.push_back(v);
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}