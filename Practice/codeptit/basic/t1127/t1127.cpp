#include <bits/stdc++.h>
using namespace std;
void scanArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(a[i], a[min_index]);
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
    selectionSort(a, n);
}