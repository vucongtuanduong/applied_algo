#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int l,r;
    cin >> l >> r;
    reverse(v.begin(), v.end());
    for (auto it = v.begin() ; it != v.end(); it ++) {
        cout << *it << " ";
    }
    reverse(v.begin() + l, v.begin() + r + 1 );
    cout << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}