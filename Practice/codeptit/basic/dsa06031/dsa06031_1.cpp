#include <iostream>
#include <climits>
using namespace std;
void testCase();
void duyet(int *a, int n, int k);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    duyet(a, n , k);
}
void duyet(int *a, int n, int k) {
    int max = INT_MIN;
    int index = 0;
    for (int i = 0; i < k; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    cout << max << " ";
    for (int i = k; i < n; i++) {
        if ((i - index) < k) {
            if (a[i] > max) {
                max = a[i];
                index = i;
            }
            cout << max << " ";
        } else {
            index++;
            max = a[index];
            for (int j  = index + 1; j <= i; j++) {
                if (a[j] >= max) {
                    max = a[j];
                    index = j;
                }
            }
            cout << max << " ";
        }
    }
}