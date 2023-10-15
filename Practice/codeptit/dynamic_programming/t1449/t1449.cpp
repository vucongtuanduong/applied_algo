#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n;
    cin >> n;
    vector<int> v(n);
    int res = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum = max(v[i], sum + v[i]);
        res = max(res, sum);
    }
    cout << res;
}
int main () {
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    
}