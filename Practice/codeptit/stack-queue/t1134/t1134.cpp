#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0 ; i < s.size(); i++) {
        if (s[i] == ')' && st.empty() != 1 && s[st.top()] == '(') {
            st.pop();
        } else if (s[i] == ']' && st.empty() != 1 && s[st.top()] == '[') {
            st.pop();
        } else if (s[i] == '}' && st.empty() != 1 && s[st.top()] == '{') {
            st.pop();
        } else {
            st.push(i);
        }
    }
    cout << (st.empty() ? "YES" : "NO");
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}