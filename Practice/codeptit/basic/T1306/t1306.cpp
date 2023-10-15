#include <bits/stdc++.h>
using namespace std;
int sumDigits(long long n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    
    return res;
}
int sumDivisors(long long n) {
    int res = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while(n % i == 0) {
            res += sumDigits(i);
            n /= i;
        }
    }
    if (n != 1) {
        res += sumDigits(n);
    }
    cout << "sumDivisors: " << res << "\n";
    return res;
}
int check(long long n) {
    return sumDigits(n) == sumDivisors(n);
}
void implement(long long n) {
    if (check(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        implement(n);
    }
}