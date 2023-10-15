#include <bits/stdc++.h>
using namespace std;
void testCase();
int main () {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		testCase();
		cout << endl;
	}
}
void testCase() {
	string s;
	cin >> s;
//	cout << s << endl;
	string res = "";
	int index = -1;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] == '0') {
			index = i;
			break;
		}
	}
//	cout << index << endl;
	if (index != -1) {
		for (int i = 0; i < index; i++) {
			res += s[i];
			cout << s[i] ;
		}
		for (int i = index; i < s.size(); i++) {
			if (s[i] == '0') {
				cout << "1";
			} else {
				cout << "0";
			}
		}
//		cout << res;
	} else {
		for (int i = 0; i <= s.size(); i++) {
			cout << "0";
		}
	}
}