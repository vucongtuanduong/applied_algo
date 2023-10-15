#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    cin >> s;
    stack<string> st;
    for (int i = 0; i < s.size(); i++) {
        string temp = string(1, s[i]);
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string x = st.top();
            st.pop();
            string y = st.top();
            st.pop();
            string z = "(" + y + temp + x + ")";
            st.push(z);
        } else {
            st.push(temp);
        }
    }
    cout << st.top();
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}