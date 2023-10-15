#include <bits/stdc++.h>
using namespace std;
void testCase () {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int>b;
    vector<int>c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int x = a[i];
        if (i % 2 == 0) {
            b.push_back(x);
        } else {
            c.push_back(x);
        }
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end(), greater<int>());
    int j = 0, k = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << b[j++] << " ";
        } else {
            cout << c[k++] << " ";

        }
    }
    cout << endl;
}
int main () {
    testCase();
}