#include <bits/stdc++.h>
using namespace std;
long long f[92];
void init() {
    f[1] = f[2] = 1;
    for (int i = 3; i < 92; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}
void implement() {
    long long n, k;
    cin >> n >> k;
    while (true) {
        if (n == 1) {
            cout << "A\n";
            return;
        } else if (n == 2) {
            cout << "B\n";
            return;
        }
        if (k > f[n - 2]) {
            k -= f[n - 2];
            n--;
        } else {
            n -= 2;
        }
    }
}
int main () {
    int t;
    cin >> t;
    init();
    while (t--) {
        implement();
    }
}