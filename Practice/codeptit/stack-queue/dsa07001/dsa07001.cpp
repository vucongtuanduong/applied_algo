#include <bits/stdc++.h>
using namespace std;
void testCase() {
    vector<int> v;
    string s;
    while (cin >> s) {
        if (s == "push") {
            int n;
            cin >> n;
            v.push_back(n);
        } else if (s == "pop") {
            if (v.size() > 0) {
                v.pop_back();
            }
        } else if (s == "show") {
            if (v.empty()) {
                cout << "empty\n";
            } else {
                for (int i = 0; i < v.size(); i++) {
                    cout << v[i] << " ";
                }
                cout << endl;
            }
        }
    }
    
}
int main () {
    testCase();
    
}