#include <bits/stdc++.h>
using namespace std;
//permutation: hoan vi
bool Next(int s[], int n) {
    // int n = s.length();
    int i, j;
    for (i = n - 2; i >= 0; i--) {
        if (s[i] < s[i + 1]) break;
        if (i < 0) return false;
    }
    for(j = n - 1; j > i;j--) {
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
    return true;
}
// void P1(int n) {
//     string DIGIT = "0123456789";
//     string s = "";
//     for (int i = 1; i <= n; i++) {
//         s += DIGIT[i];
//     }
//     cout << "\n Init : " << s;
//     int d = 0;
//     while(true) {
//         ++d;
//         cout << "\n" << d << "." << s;
//         if (!Next(s, n)) break;
//     }
//     cout <<" \n Total = " << d ;
// }
bool Sat(int s[], int n) {
    for(int i = 1; i < n; i++) {
        //Hau i co dung do voi cac hau dat truoc : 0...i - 1
        for(int j = 0; j < i; j++) {
            if (abs(s[i] - s[j]) == i - j) {
                return false;
            }
        }
    }
}
void Print(int a[], int n, const char *msg = "") {
    cout << msg;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
void Queens(int n, int sn = 1) {
    cout << "\n Queens of " << n;
    int s[n];
    for (int i = 1; i <= n; i++) {
        s[i - 1] = i;

    }
    Print(s, n, "\n Init: ");
    //init hv don vi
    int d = 0;
    while(true) {
        if (Sat(s, n)) {
            ++d;
            cout << "\n Nghiem " << d << ".";
            Print(s, n);
           
        }
        if (!Next(s, n)) {
            cout << "Total = " << d << "\n";
            Print(s, n);
            return;
            
        }
    }
}
int main (){ 
    Queens(8,2);
}