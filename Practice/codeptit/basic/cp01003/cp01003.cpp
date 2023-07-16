#include <bits/stdc++.h>
using namespace std;
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}
int checkSum(int n) {
    int sum = 0;
    int x  = n;
    while (n > 0) {
        int digit = n % 10;
        if (isPrime(digit) == 0) {
            return 0;
        }
        sum += n%10;
        n /= 10;
    }
    if (isPrime(sum) && isPrime(x)) {
        return 1; 
    } else {
        return 0;
    }
}

void check(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (checkSum(i)) {
            count++;
        }
    }
    cout << count << "\n";
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        check(a, b);
    }
   


}