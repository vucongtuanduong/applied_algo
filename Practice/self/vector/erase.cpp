#include <bits/stdc++.h>
using namespace std;
int main () {
    int m;
    cin >> m;
    vector<int> v(m);
    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }
    int t;
    cin >> t;
    while (t--) {
        int choice;
        cin >> choice;
        if (choice == 1) {
            int index, value;
            cin >> index >> value;
            if (index >= v.size()) {
                continue;
            }
            v.insert(v.begin() + index, value);

        } else if (choice == 2) {
            int index;
            cin >> index;
            if (index >= v.size()) {
                continue;
            }
            v.erase(v.begin() + index);   
        }
    }
    if (v.empty()) {
        cout << "EMPTY";
    } else {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        
    }
}