#include <bits/stdc++.h>
using namespace std;
void scanArray(int a[], int n, int fre[]) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        fre[a[i]]++;
    }
}
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i]  << " ";
    }
    cout << endl;
}
void sortFreArray(int fre[], int a[], int n, int res[]) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (fre[a[i]]  > 0) {
            
        }
    }
} 
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int fre[100005] = {0};
        scanArray(a, n, fre);
        

    }
}