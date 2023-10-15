#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> res(n);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        while (st.empty() != 1 && st.top() <= v[i]) {
            st.pop();
        }
        if (st.empty()) {
            res[i] = -1;
        } else {
            res[i] = st.top();
        }
        st.push(v[i]);
    }
    for (int i : res) {
        cout << i << " ";
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