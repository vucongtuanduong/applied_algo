#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    cin >> s;
    stack<int> st;
    for (int i = s.size() - 1; i >= 0; i--) {
        string temp = string(1, s[i]);
        int m = s[i] - '0';
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            int z;
            switch(s[i]) {
                case '+':
                    z = x + y;
                    st.push(z);
                    break;
                case '-':
                    z = x - y;
                    st.push(z);
                    break;
                case '*':
                    z = x * y;
                    st.push(z);
                    break;
                case '/':
                    z = x / y;
                    st.push(z);
                    break;
                
            }

        } else {
            
            st.push(m);
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