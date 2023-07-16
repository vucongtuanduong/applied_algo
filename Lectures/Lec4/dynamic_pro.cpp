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
int D(int i, int j) {
    // ++c;
    if (i > j) {
        return 0;
    } else if (i == j) {
        return 1;
    }
    if (s[i] == s[j]) {
        return D(i + 1, j - 1) + 2;
    } else {
        return max(D(i + 1, j), D(i, j - 1));
    }
}

//cai tien lan 1: 2D array
//dien tu duoi len, trai sang phai
//O(n * n)

int D2(int i, int j) {
    int n = s.length();
    for (int i = 0; i < MN; i++) {
        fill(d[i], d[i] + MN, 0);
    }
    //duong cheo chinh
    for (int i = 0; i < n; i++) {
        d[i][i] = 1;
    }
    //dien tu duoi len
    for (int i = n - 2; i >= 0; i--) {
        // tu phai qua trai
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                d[i][j] = d[i + 1][j - 1] + 2;
            } else {
                d[i][j] = max(d[i + 1][j], d[i][j - 1]);
            }
        }
    }
    return d[0][n - 1];
}
int Palindrome(string input) {
    s = input;
    int n = s.length();
    cout << "\n Input: " << s << ", Len = " << n ;
    cout << "\n" << n - D2(0, n-1) << endl;
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