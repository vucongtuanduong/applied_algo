#include <bits/stdc++.h>
using namespace std;
void testCase(){ 
    string s;
    int n;
    cin >> n;
    stack<string> st;
    queue<string> q;
    q.push("");
    while (q.empty() == 0) {
        s = q.front();
        q.pop();
        st.push(s);
        if (s.length() == n) {
            continue;
        }
        q.push(s + "6");
        q.push(s + "8");
    }
    
    while(st.empty() == 0) {
        cout << st.top() << " ";
        st.pop();
    }

}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}