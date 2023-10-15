#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b );
}
void scanArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void mergeSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        qsort(a, i + 1, sizeof(int), cmp);
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
int main () {
    int n;
    cin >> n;
    int a[n];
    scanArray(a, n);
    mergeSort(a, n);
}