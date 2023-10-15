// https://code.ptit.edu.vn/student/question/DSA07023
// ĐẢO TỪ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s, sl;
    getline(cin, sl);
    stringstream ss(sl);
    stack<char> st;
    while (ss >> s) {
        for (int i = s.size(); i >= 0; i--) {
			st.push(s[i]);
		}
		st.push(' ');
		
    }
	stack<char> res;
    while (!st.empty()) {
        res.push(st.top()) ;
        st.pop();
    }
    while (!res.empty()) {
        cout << res.top();
        res.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}