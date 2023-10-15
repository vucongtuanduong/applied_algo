#include <bits/stdc++.h>
using namespace std;
/*
1. tim diem gay
    k co diem gay: return false
2. rai deu
*/
int Fac(int n) {
    int r = 1;
    for (int i = 2; i <= n; i++) {
        r *= i;
    }
    return r;
}
int C(int n, int k) {
    return Fac(n) / (Fac(k) * Fac(n - k));
}
void Print(int a[], int k, const char *msg = "")  {
    cout << msg;
    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
    }
}
// to hop chap k sat sau n phan tu
bool Next(int a[], int n, int k) {
    //duyet nguoc tim diem hut
    int i, j;
    int v = n;
    for (i = k - 1; i >= 0; i--, --v ) {
        if (a[i] != v) {
            break;
        }
    }
    //cout << "\n Diem gay = " << i;
    if (i < 0) {
        return false;
    }
    //rai deu
    v = a[i] + 1;
    for (j = i; j < k; j++, ++v) {
        a[j] = v;
    }
    return true;
}
//liet ke theo trat tu tu dien
//moi to hop chap k cua n  phan tu
void AllComb(int n, int k) {
    int a[k];
    for (int i = 1; i <= k; i++) {
        a[i - 1] = i;
    }
    // Print(a, k , "\n FirstInit: ");
    int d= 0;
    while(true) {
        ++d;
        cout << "\n" << d << ".";
        Print(a, k);
        if (!Next(a, n, k)) {
            break;
        }
    }
    cout << "Total: " << d;
}
void TestNext() {

}
int main () {
    AllComb(5,3);
    int n =9, k = 4;
    int a[] = {4, 5, 8, 9};
    Print(a, k , "\n Given comb: ");
    Next(a, n, k);
    Print(a, k , "\n Now: ");  

}