#include <bits/stdc++.h>
using namespace std;
int main () {
    queue<int> q;
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if (s == "PUSH") {
            int x;
            cin >> x;
            q.push(x);
        } else if (s == "PRINTFRONT") {
            if (q.empty()) {
                cout << "NONE\n" ;
            } else {
                cout << q.front() << endl;
            }
        } else if (s == "POP") {
            if (q.empty() == 0) {
                q.pop();
            }
        }
    }
}