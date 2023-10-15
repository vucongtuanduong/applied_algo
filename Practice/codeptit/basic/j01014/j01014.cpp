#include <iostream>
#include <math.h>
using namespace std;
long long find(long long n) {
    long long max = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            max = i;
            n /= i;
        }
    }
    if (n != 1) {
        max = n;
    }
    return max;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << find(n) << endl;
    }
}