/*
a magic square is a square matrix where the sum of each row, column, and diagonal is the same.
*/

/*
quy tac: 
dien 1 dong tren o giua
for k = 2 ... , n^2:
    tim (i, j)
    a[i][j] = k
Di theo huong Dong Bac (cheo' len)
Neu gap goc: den duoi
Ngoai tren: xuong het
Ngoai phai: dich trai
Vuong: den duoi

*/
/*
  Name: magic_square.cpp
  author: Duong Vu Cong Tuan
  date: 7/7/2023
  Description: Ma phuong
*/
#include <bits/stdc++.h>
using namespace std;       
const int MN = 200;
/*
ma phuong bac chan:
1. Init 1.. nn
2. tao xau mau len n2 = n /2
    k = n2 / 2 ki tu T
    neu n2 le them 2 ki tu DN
    dien them # cho du n2
    n = 8, n2 = 4, k = 2;\
    TT##

    n = 10, n2 = 5, k = 2
    .....
    TTDN#
    Loop i = n2 lan
        Dien dong i theo xau mau
        Quay xau mau
    TTDN# - > #TTDN -> N#TTD -> DN#TT -> TDN#T
*/
int a[MN][MN];
// so chu so cua so x: len(9) = 1, len(1023) = 4;
int len(int x) {
    // hop ao thuat type A > B
    stringstream ss ;
    ss << x;
    // string s;
    // ss >> s;
    // return s.length();
    return ss.str().length();
}
void test(int n) {
    // dac so c
    //duyet
}
void go() {
    cout << "?";
    fflush(stdin);
    if (cin.get() == '.') {
        exit(0);
    }
}  
void print(int a[][MN], int rows, int columns) {
    cout << "\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";

    }
}
void odd_ms(int n) {
    cout << "\n Odd Magic Square " << n;
    for (int i = 0; i <= n; i++) {
        fill(a[i], a[i] + n, 0);
    }
    print(a, n, n);
    int i = 0, j = n / 2;
    int k = 1;
    a[i][j] = k;
    int nn = n * n;
    for (k = 2; k <= nn; k++) {
        //xac dinh o (i, j)
        // north east
        --i;
        ++j;
        // kiem tra xem co o goc khong: den duoi
        if (i < 0 && j == n) {
            i += 2;
            --j;
        } else if (i < 0) {// tren: nhay du
            i = n - 1;
        } else if (j == n)  { // phai: day sang trai
            j = 0;
        }
        if (a[i][j] > 0) {
            i += 2;
            --j;
        }
        a[i][j] = k;
    }
    print(a, n, n);
    test(n);
}
void even_ms(int n) {
    cout << "\n Even Magic Square " << n;

}   
void ms(int n) {
    cout << "\n Magic Square " << n;
    if (n < 1) {
        cerr << "\n n must be >= 1";
        return;
    }
    if (n % 2 == 1) {
        odd_ms(n);
    } else {
        even_ms(n);
    }
}        

int main () {
    // for (int n = 1; n <= 50; n+=2) {
    //     ms(n);
    //     go();
    // }
    // ms(3);
    // ms(5);
    cout << "\n Len (1023) = " << len(10203040) << "\n";
    go();
    cout << "\n THE END... \n";
}