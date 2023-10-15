#include <bits/stdc++.h>
using namespace std;
int checkIncrease(string s,int n) {
    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            return 0;
        }
    }
    return 1;
}
int checkDecrease(string s, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (s[i] < s[i + 1]) {
            return 0;
        }
    }
    return 1;
}
void testCase () {
    string s;
    cin >> s;
    int n = s.length();
    if (checkIncrease(s, n) || checkDecrease(s, n)) {
        cout << "YES" << endl;
        return;
    } else {
        cout << "NO\n";
        return;
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}