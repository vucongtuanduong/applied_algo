#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the least common multiple (LCM)
long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int numTestCases;
    cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {
        string num1, num2;
        cin >> num1 >> num2;

        // Convert the input strings to integers
        vector<int> digits1(num1.size());
        vector<int> digits2(num2.size());
        transform(num1.begin(), num1.end(), digits1.begin(), [](char c) { return c - '0'; });
        transform(num2.begin(), num2.end(), digits2.begin(), [](char c) { return c - '0'; });

        // Reverse the digits to perform calculations from right to left
        reverse(digits1.begin(), digits1.end());
        reverse(digits2.begin(), digits2.end());

        // Perform the LCM calculation
        long long result = lcm(stoll(num1), stoll(num2));

        // Output the result
        cout << result << endl;
    }

    return 0;
}