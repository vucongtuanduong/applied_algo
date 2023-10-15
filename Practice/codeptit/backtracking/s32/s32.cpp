#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n;
    cin >> n;
    vector<string> v;
    v.push_back("0");
    v.push_back("1");
    for (int i = 2; i <= n; i++) {
        int len = v.size();
        for (int i = len - 1; i >= 0; i--) {
            v.push_back(v[i]);
        }
        for (int i = 0; i < len; i++) {
            v[i] = "0" + v[i];
        }
        for (int i = len; i < v.size(); i++) {
            v[i] = "1" + v[i];
        }
    }
    for (auto i : v) {
        cout << i << " ";
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