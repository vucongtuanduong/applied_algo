#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++) {
        int ok = 0;
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ok = 1;
            }
        }
        if (ok == 1) {
            cout << "Buoc " << i << ": ";
            for (int j = 0; j < n; j++) {
                cout << a[j] << " ";
            }
            cout << endl;
        } 
    }
}