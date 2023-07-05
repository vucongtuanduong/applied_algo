#include <iostream>
#include <cmath>
int main () {
    // int a = pow(a, 6);
    // int b = 1 >> 6;
    // std::cout << "a: " << a << ", b: " << b << "\n";

    int a = 2;
    int b = 3;
    int *v = &a;
    std :: cout << "a: " << a << ", b: " << b << ", v: " << *v << "\n";
    *v = a + b;
    std :: cout << "a: " << a << ", b: " << b << ", v: " << *v << "\n";
    return 0;
}