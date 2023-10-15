#include <bits/stdc++.h>
using namespace std;
void testCase () {
    string s;
    cin >> s;
    int a = s[0] - '0';
    int b = s[4] - '0';
    int c = s[8] - '0';
    if (a + b == c) {
        cout << "YES";
        return;
    } else {
        cout << "NO";
        return;
    }
}
int main () {
    int t;
    cin >> t;
    getchar();
    while (t--) {
        testCase();
        cout << endl;
    }
}