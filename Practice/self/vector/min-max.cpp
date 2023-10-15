#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x:v) {
        cin >> x;
    }
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *max_element(v.begin(), v.end()) << endl;
    cout << accumulate(v.begin(), v.end(), 0);
}