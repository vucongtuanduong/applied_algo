#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    cin >> s;
    int n = s.size();
    
    long long f[20], res  = 0;
    f[0] = s[0] - '0';
    res = f[0];
    for (int i = 1; i < s.size(); i++) {
        int temp = s[i] - '0';
        f[i] = f[i - 1] * 10 + temp * (i + 1);
        res = res + f[i];
    }
    cout << res;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}