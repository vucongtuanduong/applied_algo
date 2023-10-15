#include <bits/stdc++.h>
using namespace std;
int main () {
    map<int ,int> mp;
    mp.insert({1,2});
    //map[key] = value
    //key duoc sap xep theo thu tu
    mp.insert({2, 4});
    mp.insert({3, 6});
    mp[4] = 9;
    mp.insert({1,5});
    cout << mp.size() << endl;
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
}