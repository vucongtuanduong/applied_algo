#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0 ; i < n; i++) {
        pair <int, int> temp;
        cin >> temp.first >> temp.second;
        v.push_back(temp);
    }
    vector<double> res;
    for (int i = 0 ; i < n; i++) {
        // res.push_back(sqrt(v[i].first*v[i].first + v[i].second*v[i].second));
        double distance = sqrt(v[i].first * v[i].first + v[i].second * v[i].second);
        res.push_back(distance);
    }
    for (int i = 0 ; i < n; i++) {
        cout << fixed<< setprecision(2)<< res[i] << " ";
    }
}