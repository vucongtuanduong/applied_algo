#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int>v;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if (n == 1) {
            int x;
            cin >> x;
            v.push_back(x);
        } else if (n == 2) {
            
            if (v.empty()) {
                continue;
            }
            v.pop_back();
        }
    }
    if(v.empty()) {
        cout << "EMPTY";
    } else {
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << " ";
        }
    }
}