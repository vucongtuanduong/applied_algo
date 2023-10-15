#include <bits/stdc++.h>
using namespace std;
//attempt 1
// void scanArray(int a[], int n, int fre[]) {
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         fre[a[i]]++;
//     }
// }
// void printArray(int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << a[i]  << " ";
//     }
//     cout << endl;
// }
// void sortFreArray(int fre[], int a[], int n, int res[]) {
//     int counter = 0;
//     for (int i = 0; i < n; i++) {
//         if (fre[a[i]]  > 0) {
            
//         }
//     }
// } 
//attempt 2
int cmp(pair <int, int >a, pair <int, int> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}
void testCase() {
    int n;
    cin >> n;
    map<int, int> fre;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        fre[x]++;
    }
    vector<pair<int, int>> a(fre.begin(), fre.end());
    sort(a.begin(), a.end(), cmp);
    for (auto i : a) {
        for (int j = 0; j < i.second; j++) {
            cout << i.first << " ";
        }
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}