#include <iostream>
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main () {
    int t;
    std::cin>>t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        std:: cout << gcd(a, b) << "\n";
    }
}