// https://code.ptit.edu.vn/student/question/DSA06015
// MERGE SORT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    for (int i : a) cout << i << " ";
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}