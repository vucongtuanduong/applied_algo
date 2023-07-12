#include <bits/stdc++.h>
using namespace std;
/*
voi khong qua 9 cau hoi Y/N co the doan duoc ngay sinh nhat cua nguoi khac
? ngay: 31 -> 16 -> 8 -> 4 -> 2 -> 1
? thang: 12 -> 6 -> 3 -> 2 -> 1
tim 1 trong n:
O(n) -> O(log n) -> tim duoc x sao cho 2 ^n = x
vi du: n = 31 -> log2(31) = 5 -> 2^5 = 32

*/
/*
cac bai toan kinh dien:
1. quicksort 
2. binary search(search in sorted array)
3. binary search tree
*/
void Go() {
    cout << "?";
    fflush(stdin);
    if (cin.get() == '.') {
        exit(0);
    }
}
// find secret number x in range [d, c], ask no more than log2(c - d + 1) times
// request one person choose 1 number in range [d, c], keep secret
// ask no more than log2(c - d + 1) times
// Num(1, 31) (17)

int Num(int d, int c, string h) {
    //d---------m----------c
    // if in range (m, c] -> x: in range [m + 1, c]
    // if in range (d, m] -> x: in range [d, m - 1]
    // ----------d----m-----c
    char ans;
    int ask = 0;//so lan hoi
    while (d < c) {
        int m = (d + c) / 2;
        ++ask;
        while (true) {
            cout << "\n " << ask << ". " << h << " " << m << "? [y/n]: ";
            fflush(stdin);
            
            cin >> ans;
            ans = toupper(ans);
            if (ans == 'Y' || ans == 'N') {
                break;
            }
            
        }
        if (ans == 'Y') {
                d = m + 1;
            } else {
                c = m;
            }

    } 
    cout <<  "\n Ban da nghi so: " << d;
    return d;
}
int SecretNumber(int d, int c) {

}
void Birthday() {
    int day = Num(1, 31, "\n *Ban sinh sau ngay ");
    int month = Num(1, 12, "\n ** Ban sinh sau thang ");
    cout << "\n Your birthday is: " << day << "/" << month;
}
int main () {
    // Num(1, 31); // 19
    Birthday(); // 8/3
    cout << "\n \n THE END \n";
}