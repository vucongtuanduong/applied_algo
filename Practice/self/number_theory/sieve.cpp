#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e7;
int prime[MAX + 1];
void sang() {
    for (int i = 0; i <= MAX; i++) {
        prime[i] =1;
    }
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (prime[i] == i) {
            for (int j = i * i; j <= MAX; j+= i) {
                if (prime[j] == j) {
                    prime[j] = i;
                }
            }
        }
    }
}
void sang2(int l, int r) {
    vector<bool> p (r - l + 1, true);
    for (int i = 2; i <= sqrt(r); i++) {
        for (int j = max(i * i, (l + i -1 ) / i * i); j <= r; j+=i) {
            p[j - l] = false;
        }

    }
    for (int i = max(2, l); i <= r; i++) {
        if (p[i - l]) cout << i << " ";
    }
    cout << endl;
}
void pt(int n) {
    //phan tich thua so nguyen to
    while (n > 1) {
        cout << prime[n] << " ";
        n /= prime[n];
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    sang2(1, 100);
}