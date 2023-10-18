#include <bits/stdc++.h>
using namespace std;
void testCase () {
    string n;
    cin >> n;
    int len = n.size();
    int t = len - 1;
    while (t >= 0 && n[t] == '0') t--;
    if (t == -1) {
        cout << 1;
        for (int i = 0; i < len - 1; i++) cout << 0;
        return;
    }
    n[t] = '0';
    for (int i = t + 1; i < len; i++) n[i] = '1';
    cout << n;
    
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--) {
        testCase();
        cout << endl;
    }
}