#include <bits/stdc++.h>
using namespace std;
void scanArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void init(int a[], int n) {
    int min = a[0];
    int max = a[0];
    
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    int secondMin = max;
    for (int i = 0; i < n; i++) {
        if (a[i] < secondMin && a[i] != min) {
            secondMin = a[i];
        }
    }
    if (secondMin == min) {
        cout << "-1\n"; 
    } else {
        cout << min << " " << secondMin << endl;
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        scanArray(a, n);
        init(a, n);
    }
}