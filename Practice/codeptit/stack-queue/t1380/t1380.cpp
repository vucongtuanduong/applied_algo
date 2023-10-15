#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    cin >> s;
    stack <int> st;
    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == 'D') {
            st.push(i + 1);
        } else {
            cout << i + 1;
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
        }
    }
    cout << endl;
}
int main (){ 
    int t;
    cin >> t;
    
    for (int z = 1; z <= t; z++) {
        // cout << "Test " << z << ": ";
        testCase();
        cout << endl;
    }
}