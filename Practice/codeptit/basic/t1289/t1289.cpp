#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;

    }
    return a;
}
long long lcm(int a, int b) {
    long long res = a * b / gcd(a, b);
    return res;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
}