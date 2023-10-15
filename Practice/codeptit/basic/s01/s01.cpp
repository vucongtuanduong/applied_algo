#include <bits/stdc++.h>
using namespace std;
void testCase () {
    int n;
    cin >> n;
    int digits = log10(n) ;
    int x = n / pow(10, digits);
    int res = x % 10;
    if (res > 5) {
        cout << (x + 1) * pow(10, digits) << endl;
    } else {
        cout << x * pow(10, digits) << endl;
    }
}
int main () {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }
}