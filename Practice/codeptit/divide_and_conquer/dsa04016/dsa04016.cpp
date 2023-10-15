#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a , const void *b) {
    return (*(int *) a - *(int *)b);
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int m, n, k;
        cin >> m >> n >> k;
        int l = m + n;
        int a[l];
        for (int i = 0; i < l; i++) {
            cin >> a[i];
        }
        qsort(a, l, sizeof(int), cmp);
        cout << a[k - 1] << endl;
    }
}