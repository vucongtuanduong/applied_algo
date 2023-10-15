#include <bits/stdc++.h>
using namespace std;
// const int MAX = 1e9;
// int fre[MAX] = {0};
// void scanArray (int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         fre[a[i]]++;
//     }
// }
// void find(int a[], int n) {
//     int ok = 0;
//     for (int i = 0; i < n; i++) {
//         if (fre[a[i]] != 0) {
//             ok = 1;
//             cout << a[i] << endl;
//             break;
//         }
//     }
//     if (ok == 0) {
//         cout << "NO\n";
//     }
// }
//attempt 2
void testCase () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int,int> mp;
    
    for (auto i: a) {
        mp[i]++;
        
    }
    for (auto i : a) {
        if (mp[i] >= 2) {
            cout << i << endl;
            return;
        }
    }
    cout << "NO\n";
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        // int n;
        // cin >> n;
        // int a[n];
        // scanArray(a, n);
        // find(a, n);
        testCase();
    }
}