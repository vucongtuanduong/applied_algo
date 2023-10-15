#include <bits/stdc++.h>
using namespace std;
void testCase(){
    int n, m;
    cin >> n >> m;
    set<int> a,b;
    for (int i = 0 ; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0 ; i < m; i++) {
        int x;
        cin >> x;
        b.insert(x);
    }

    map<int,int>mp;
    for (int i : a) {
        mp[i]++;
    }
    for (int i : b) {
        mp[i]++;
    }
    for (auto i: mp) {
        if (i.second >= 2) {
            cout << i.first << " ";
        }
    }
}
int main () {
    testCase();
}