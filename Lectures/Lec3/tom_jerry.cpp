#include <bits/stdc++.h>
using namespace std;
const char * fn = "tom_jerry.inp";
const int MN = 1024;
char a[MN]; // meet 0 -> x2; meet 1 -> x 2 + 1
void Go() {
    cout << "?";
    fflush(stdin);
    if (cin.get() == '.') {
        exit(0);
    }
}
//ma cua ki tu
int Code (string s ) {
    int c = 1;
    for (int i = 0; i < s.length(); i++) {
        c = c * 2 + s[i] - '0';
    }
    return c;
}
void Run() {
    ifstream f(fn);
    if (f.fail()) {
        cerr << "Cannot open file " << fn << endl;
        exit(1);
    } 
    string s;
    char ch;
    int n;// so ki tu
    f >> n;
    cout << "\n n = " << n << endl;
    fill(a, a + MN , '#');
    for (int i = 1; i <= n; i++) {
        f >> ch >> s;
        cout << "\n"<< ch << " " << s;
        a[Code(s)] = ch;
    }
    cout << "\n a: ";
    for (int i = 0; i < MN; i++) {
        if (a[i] != '#') {
            cout << "\n" << i << " " << a[i];
        }
    }
    f >> s;
    cout << "\nCoding: " << s << endl;
    f.close();
    int c = 1;
    for (int i = 0; i < s.length(); i++) {
        c = c * 2 + s[i] - '0';
        if (a[c] != '#') {
            cout << a[c];
            c = 1;
        }
    }
}
int main() {
    Run();
    cout << "\n THE END \n";
}