#include <bits/stdc++.h>
using namespace std;
void testCase() {
    string s;
    cin >> s;
    queue<string> q;
    q.push("1");
    int res  = 0;
    while (q.empty() != 1) {
        string z = q.front();
        q.pop();
        res++;
        string x = z + "0";
        if (x.size() > s.size() || (x.size() == s.size() && x > s)) {
            break;
        }
        q.push(x);
        x = z + "1";
        if (x.size() > s.size() || (x.size() == s.size() && x > s)) {
            break;
        }
        q.push(x);
    }
    cout << res + q.size();

}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}