#include <bits/stdc++.h>
/*
palindrome (doi xung)


*/
using namespace std;

/*
k = n - d(0, n - 1)
d(0, 0) = 1
d(0, 1) = 1
d(0, 3) = 3 (aea)
d(2, 7) = 3
d(1, 7) = 3

cac tinh chat cua ham d:
    - ham 2 bien
    - d(i, i) = 1
    - d(i, j) = 0 if i > j
    - s ------i(a)--------j(a)----
      -> d(i, j) = d(i + 1, j - 1) + 2 if s[i] == s[j]
      s--------i(a)----------j(b)-----
      -> d(i, j) = max(d(i + 1, j), d(i, j - 1))

    
d(i, j) = 0 if i > j
d(i, j) = 1 if i == j
        = d(1, j - 1) if s[i] == s[j] 
    else = max(d(i + 1, j), d(i, j - 1)) 
*/
/*
cai tien 1: goi D khong qua 1 lan, dung 1 mang 2D(4M)
cai tien 2: 2 mang 1 chieu(4K)
cai tien 3: 1 mang 1 chieu

*/
string s;
int c; //dem so lan goi ham D
const int MN = 2001;
int d[MN][MN];
// D(i, j) = D[i][j]
void Go() {
    cout << "?";
    fflush(stdin);
    if (cin.get() == '.') {
        exit(0);
    }

}


//cai tien lan 2: 2 mang 1D 
//O(n * n)

int D3(int i, int j) {
    int n = s.length();
    int *a = new int[n];//dong duoi
    int *b = new int[n];//dong tren
    
    fill(a, a   + n, 0);

    a[n - 1] = 1;//dong cuoi
    
    for (int i = n - 2; i >= 0; i--) {
        //dien gia tri b qua a
        b[i] = 1;
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                b[j] = a[j - 1] + 2;
            } else {
                b[j] = max(a[j], b[j - 1]);
            }
        }
        int *c = a;
        a = b;
        b = c;
    }
    //dien tu duoi len
    return a[n - 1];
}
int Palindrome(string input) {
    s = input;
    int n = s.length();
    cout << "\n Input: " << s << ", Len = " << n ;
    cout << "\n" << n - D3(0, n-1) << endl;
    // c = 0;
    // cout << "\n" << n - D(0, n-1) << endl;
    // cout << "\n So lan goi ham D: " << c << endl;
    // return n - D(0, n - 1);
}

int main () {
    // Palindrome("baeadbadb");
    Palindrome("a1bc2d3ed4cbaa1bc2d3ed4cbaa1bc2da1bc2d3ed4cbaa1bc2d3ed4cbaa1bc2da1bc2d3ed4cbaa1bc2d3ed4cbaa1bc2da1bc2d3ed4cbaa1bc2d3ed4cbaa1bc2da1bc2d3ed4cbaa1bc2d3ed4cbaa1bc2d");
    cout << "\n THE END \n";
}