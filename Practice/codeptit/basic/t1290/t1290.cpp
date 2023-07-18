#include <bits/stdc++.h>
using namespace std;
int check(int n) {
    int digits = log10(n);
    int first = n / pow(10, digits);
    int last = n % 10;
    return first == last;
}
void imple(int n) {
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
        int n;
        cin >> n;
        imple(n);
    }
}