#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    getline(cin , s);
    stack<char> st;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] != ')') {
            st.push(s[i]);
        } else {
            bool ok = true;
            while (st.empty() != 1) {
                char c = st.top();
                st.pop();
                if (c == '+' || c == '-' || c == '*' || c == '/') {
                    ok = false;
                }
                if (c == '(') {
                    break;
                }
            }
            if (ok == true) {
                cout << "Yes";
                return;
            }
        }
        
    }
    cout << "No";

}
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
}