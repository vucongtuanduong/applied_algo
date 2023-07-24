#include <iostream>
using namespace std;
// long long fibo[92];
const long long MOD = 1e9 + 7;
// void init() {
//     fibo[0] = 0;
//     fibo[1] = 1;
//     for (int i = 2; i < 92; i++) {
//         fibo[i] = fibo[i - 1] + fibo[i - 2];
//     }
// }
long long x[2][2], y[2][2];
void init() {
    x[0][0] = x[0][1] = x[1][0] = 1;
    x[1][1] = 0;
    y[0][0] = y[0][1] = y[1][0] = 1;
    y[1][1] = 0;
    
}
//multiply 2 matrixes
void mul(long long a[2][2], long long b[2][2]) {
    long long c[2][2] = {};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                c[i][j] = (c[i][j] + a[i][k] * b[k][j] % MOD) % MOD;
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            a[i][j] = c[i][j];
        }
    }
}
void pow(long long a[2][2], long long k) {
    if (k <= 1) {
        return ;
    }
    pow(a, k / 2);
    mul(a, a);
    if (k % 2 == 1) {
        mul(a, y);
    }
}
int main () {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        init();
        pow(x, n - 1);
        cout << x[0][0] << endl;
    }
}