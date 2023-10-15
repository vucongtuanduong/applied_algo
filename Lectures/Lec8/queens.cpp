#include <bits/stdc++.h>
using namespace std;
//permutation: hoan vi
bool Next(string &s) {
    int n = s.length();
    int i, j;
    for (i = n - 2; i >= 0; i--) {
        if (s[i] < s[i + 1]) break;
        if (i < 0) return false;
    }
    for(j = n - 1, j > i, j--) {
        if (s[j] > s[i]) break;
    }
    int x = s[i];
    s[i] = s[j];
    s[j] = x;
    i++;
    j = n - 1;
    while (i < j) {
        x  = s[i];
        s[i] = s[j];
        s[j] = x;
        i++;
        j--;
    }
}
void P1(int n) {
    string DIGIT = "0123456789";
    string s = "";
    for (int i = 1; i <= n; i++) {
        s += DIGIT[i];
    }
    cout << "\n Init : " << s;
    int d = 0;
    while(true) {
        ++d;
        cout << "\n" << d << "." << s;
        if (!Next(s)) break;
    }
    cout <<" \n Total = " << d ;
}
void P2() {
    string x = "57196168721";
    cout << "\nInput x = " << x;
    if (Next(x)) {
        cout << "\n Now x = " << x;
    }
}
int main (){ 

}