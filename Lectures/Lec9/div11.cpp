#include <bits/stdc++.h>
using namespace std; 
/*
x chia het 11 khi va chi khi abs(TC - TL) la boi cua 11
12345678909
TL = 1 + 3 +5 + 7 + 9 + 6 = 31
TC = 2 + 4 + 6 + 8 + 0 = 20
hieu = 5
*/   
//kiem tra so x co chia het cho 11 
bool Div11(string x) {
    int n = x.length();
    x += "0";
    int tc = 0;
    int tl = 0;
    for (int i = 0; i < n; i+=2) {
        tc += x[i] - '0';
        tl += x[i + 1] - '0';
    }
    return abs(tc - tl) % 11 == 0;
}
int main () {
    cout << Div11("1234567890666778822114455");
}