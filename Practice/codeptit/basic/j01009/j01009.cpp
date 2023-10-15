#include <bits/stdc++.h>
using namespace std;
long long factorial(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
long long sumFactorial(int n) {
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        res += factorial(i);
        // cout << "i = " << i << "factorial (i) = " << factorial(i) << ",res = " << res << endl;
    }
    return res;
}
int main () {
    int n;
    cin >> n;
    cout << sumFactorial(n);
}