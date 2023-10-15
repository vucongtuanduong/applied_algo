#include <bits/stdc++.h>
using namespace std;
//circular primes: quay vong van la so nguyen to
/*

*/
const int MN = 1000000;
typedef bitset<MN> BS;

BS Sieve(int n) {
    BS e;
    e.reset();
    e[0] = e[1] = 0;
    //xoa cac so chan ke tu 4 
    for (int i = 4; i < n; i++) {
        e[i] = 0;
    }
    int sn = (int)sqrt(n);
    //duyet cac so le
    for (int i = 3; i <= sn; i += 2) {
        if (e[i]) {
            for (int j = i * i; j < n; j+= i) {
                e[j] = 0;
            }
        }
    }
    return e;
}
void circularPrimes(int n) {
    BS e = Sieve(n);
    // for (int i = 1; i < 100; i++) {
    //     if (e[i]) {
    //         cout << " " << i;
    //     }
    // }
    int d = 1;
    cout << "\n 2";
    for (int i = 3; i < 10; i += 2) {
        if (e[i]) {
            d++;
            cout << "\n" << i;
        }
    }
    for (int i = 11; i < n; i += 2) {
        if (e[i]) {
            d++;
            cout << "\n" << i;
        }
    }
}

int main () {
    circularPrimes(MN);
}