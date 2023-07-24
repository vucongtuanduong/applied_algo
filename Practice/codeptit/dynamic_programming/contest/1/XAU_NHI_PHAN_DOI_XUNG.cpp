#include <bits/stdc++.h>
using namespace std;
int isPalindrome(char s[], int n) {
    for (int i = 0; i < n ; i++) {
        if (s[i] != s[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}
void check(char s[], int n) {
    if (isPalindrome(s, n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main () {
    string s;
    cin >> s;
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int current = 0;
        int n = s.length();
        char str[n];
        for (int i = l - 1; i < r; i++) {
            str[current] = s[i];
            current++;
        }
        
        check(str, current);
    }
    
    
}