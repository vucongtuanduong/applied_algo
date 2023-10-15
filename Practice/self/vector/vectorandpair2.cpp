#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<pair<pair<int ,int >, int>> v;
    for (int i = 0; i < n; i++) {
        pair<pair<int,int>, int> temp;
        cin >> temp.first.first >> temp.first.second >> temp.second;
        v.push_back(temp);
    }
    vector<int> res;
    for(int i = 0; i < n; i++) {
        int sum = v[i].first.first + v[i].first.second + v[i].second;
        res.push_back(sum);
    }
    for (int  i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
}