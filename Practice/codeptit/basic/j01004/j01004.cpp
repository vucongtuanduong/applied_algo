#include <iostream>
#include <math.h>
using namespace std;
int isPrime(int n) {
    if (n < 2 ) {
        return 0;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}
void check(int n) {
    if (isPrime(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        check(n);
    }
}