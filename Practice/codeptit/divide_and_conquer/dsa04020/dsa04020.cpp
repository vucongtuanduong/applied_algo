#include <bits/stdc++.h>
using namespace std;
//attempt 1

// int binarySearch(int a[], int n, int k) {
//     int l = 0, r = n - 1;
//     while (l < r) {
//         int mid = (l + r) / 2;
//         if (a[mid] == k) {
//             return mid + 1;
//         } else if (a[mid] > k) {
//             r = mid - 1;
//         } else {
//             l = mid + 1;
//         }
//     }
//     return -1;
// }

// void search(int a[], int n, int k) {
//     int res = binarySearch(a, n, k);
//     if (res != -1) {
//         cout << res << "\n";
//     } else {
//         cout << "NO\n";
//     }
// }
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        int index = lower_bound(a, a + n, k) - a;
        if (index == n || a[index] != k) {
            cout << "NO\n";
        } else {
            cout << index + 1 << "\n";
        }
    }
}