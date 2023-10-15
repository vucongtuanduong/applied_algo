#include <bits/stdc++.h>
using namespace std;
int cmp(pair<int , int>a , pair<int, int>b) {
    if (a.second == b.second) {
        return a.first > b.first;
    }
    return a.second < b.second;
}
void testCase() {
    int n;cin >> n;
    vector<pair<int , int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;

    }
    sort(v.begin() , v.end() , cmp);
    int ans = 1;
    int current = v[0].second;
    for (int i = 1; i < n; i++) {
        if (v[i].first >= current) {
            ans++;
            current = v[i].second;
        }
    }
    cout << ans << endl;

}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}