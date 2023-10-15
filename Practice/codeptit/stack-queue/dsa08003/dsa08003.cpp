#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int t;
    cin >> t;
    deque<int> q;
    while (t--) {
        string s;
        cin >> s;
        if (s == "PUSHFRONT") {
            int x;
            cin >> x;
            q.push_front(x);

        } else if (s == "PRINTFRONT") {
            if (q.empty()) {
                cout << "NONE\n";
            } else {
                cout << q.front() << endl;
            }
        } else if (s == "POPFRONT") {
            if (q.empty() != 1) {
                q.pop_front();
            }
        } else if (s == "PUSHBACK") {
            int x;
            cin >> x;
            q.push_back(x);
        } else if (s == "PRINTBACK") {
            if (q.empty()) {
                cout << "NONE\n";
            } else {
                cout << q.back() << endl;
            }
        } else if (s == "POPBACK") {
            if (q.empty() != 1) {
                q.pop_back();
            }
        }
    }
}
int main () {
    testCase();
}