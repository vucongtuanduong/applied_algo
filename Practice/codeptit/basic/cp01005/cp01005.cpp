#include <bits/stdc++.h>


using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n];
        int fre[100000] = {0};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            fre[a[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (fre[a[i]] % 2 == 1) {
                cout << a[i] << "\n";
                fre[a[i]] = -1;
                            
            }
        }

    }
    return 0;
}