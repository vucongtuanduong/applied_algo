#include <bits/stdc++.h>
using namespace std;
void scanArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << "\n";
    }
}
int main () {
    int n;
    cin >> n;
    int a[n];
    scanArray(a, n);
    bubbleSort(a, n);
}