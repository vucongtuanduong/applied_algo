#include <bits/stdc++.h>

using namespace std;
void testCase() {
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.length();
    int n2 = s2.length();
    long long x = 0;
    long long y = 0;
    for (int i = 0; i < n1; i++) {
        x = x * 2 + (s1[i] - '0');
    }
    for (int i = 0; i < n2; i++) {
        y = y * 2 + (s2[i] - '0');
    }
    long long res = x * y;
    cout << res << endl;
}
int main () {
    int t;
    cin >> t;
    getchar();
    while (t--) {
        testCase();
    }
}