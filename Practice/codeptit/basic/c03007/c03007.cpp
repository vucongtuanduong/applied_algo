#include <iostream>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int isPalindrome(int n) {
    int m = n, r = 0;
    while (m > 0) {
        r = r * 10 + m % 10;
        m /= 10;
    }
    return r == n;
}
void init(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) && isPalindrome(i)) {
            std::cout << i << " ";
            count++;
        }
        if (count == 10) {
            std::cout << "\n";
            count = 0;

        }
    }
}
int main () {
    int t;
    std:: cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        init(a, b);
        std::cout << "\n";
    }
}