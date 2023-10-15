#include <bits/stdc++.h>
using namespace std;
void testCase () {
    string s;
    cin >> s;
    stack<char> st;
    int n = s.length();
    int open = 0;
    int close = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            open++;
            st.push(s[i]);
        } else {
            if (!st.empty() && st.top() == '(') {
                open--;
                st.pop();
            } else {
                close++;
                st.push(s[i]);
            }
        }
    }
    int ans = open / 2 + close / 2;// mỗi cặp đóng mở ngoặc chỉ cần đảo ngược 1 dấu
    ans += open % 2 + close % 2;// nếu có cặp ngoặc trái hướng, cần đảo cả 2
    cout << ans;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}