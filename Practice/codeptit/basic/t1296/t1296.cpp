#include <iostream>
#include <cmath>
using namespace std;
int countDivisor(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int x = n / i;
            if (x % 2 == 0) {
                count++;
            }
            if (i % 2 == 0) {
                count++;
            }

        }
    }
    int temp = sqrt(n);
    if (temp * temp == n && temp % 2 == 0) {
        count--;
    }
    return count;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << countDivisor(n) << endl;
    }
}