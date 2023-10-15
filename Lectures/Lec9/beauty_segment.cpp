#include <bits/stdc++.h>
using namespace std;
/*
liet ke cac doan dep
h hoan vi
p[x] vi tri cua x trong h
*/

// void Go() {
//     cout <<"?";
//     fflush(stdin);
//     if (cin.get == ".") {
//         exit(0);
//     }
// }
void Print(int a[], int l, int r , const char *msg = "") {
    cout << msg << "\n";
    for (int i = l; i <= r; i++) {
        cout << a[i] << " ";
    }
}
//Liet ke cac doan dep
void Beauty(int h[], int n) {
    int p[n + 1];
    Print(h,0,  n - 1, "\n Init h: ");
    p[0] = 0;
    for (int i = 1; i <= n; i++) {
        p[h[i]] = i;
    }
    Print(p,1, n, "\n Init p: ");
    int l = p[1];
    int r = p[1];
    int v = 0;
    int dt;
    int d = 0;
    while ( v <= n) {
        if (p[v]< l || p[v] > r) { //neu v nam ngoai cua so lr
            l = min(l, p[v]);
            r = max(r, p[v]);
            dt = r - l + 1;
        }
        if (dt == v) {
            d++;
            cout << "\n Doan dep No " << d << ".";
            Print(h, l, r ,"");
        }
    }
}
int main () {
    int h[] = {0, 8, 6, 2, 1, 3, 5, 4, 7};
    int n = sizeof(h) / sizeof(h[0]);
    cout << "\n n = " << n;
    Beauty(h, n );
}