#include <bits/stdc++.h>
using namespace std;
void scanArray(int a[], int n) {
    for (int i=0; i<n; i++) cin >> a[i];
}
void bubbleSort(int a[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
        int count = 0;
        int flag = 0;
        int k = 0;
        for (int j = k  + 1; j < n; j++) {
            if (a[k] > a[j]) {
                swap(a[k], a[j]);
                count++;
                k++;
            }
        }
        if (count != 0) {
            cout << "Buoc " << i + 1 << ": ";
            for (int m = 0; k < n; m++) cout << a[m] << " ";
            cout << endl;
        }
    }
}
int main () {
    int n;
    cin >> n;
    int a[n];
    scanArray(a, n);
    bubbleSort(a, n);
    return 0;
}