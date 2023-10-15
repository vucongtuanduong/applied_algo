#include <bits/stdc++.h>
using namespace std;
void testCase () {
    int q;
    cin >> q;
    stack <int> v;
    while (q--) {
        string s;
        cin >> s;
        if (s == "PUSH") {
            int n;
            cin >> n;
            v.push(n);
        } else if (s == "POP") {
            if (v.size() >  0) {
                v.pop();
            }
        } else if (s == "PRINT") {
            if (v.empty()) {
                cout << "NONE" << endl;
            } else {
                cout << v.top();
                cout << endl;
            }
        }
    }
}
int main () {
    testCase();
}