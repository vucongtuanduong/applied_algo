#include <bits/stdc++.h>
using namespace std;
void scanArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void init(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(&a[i], &a[min_index]);
        }
        cout << "Buoc " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}
int main () {
    int n;
    cin >> n;
    int a[n];
    scanArray(a, n);
    init(a, n);
}