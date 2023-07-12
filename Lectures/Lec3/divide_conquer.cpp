/*
divide and conquer: chia de tri

chia mien du lieu D thanh cac mien con
D = D1, D2, D3, ..., Dk
sau do xu ly tung phan mot: F(Di)
tong hop
*/

/*
vi du: 
Hoa hau: The gioi -> QG1... QG200
QG1 -> tinh, tinh -> huyen ,...
*/

/*
cau hoi:
1. chia thanh may phan: toi gian
2. xu ly tung phan: F(Di)
*/
#include <bits/stdc++.h>

using namespace std;
void Go() {
    cout << "?";
    fflush(stdin);
    if (cin.get() == '.') {
        exit(0);
    }
}
//output: i: a[i] = max{a[0....n-1]} (max index!!)
/*
ex: a = {8, 7, 15, 2, 20}
Max(a, 5) = 4 (index) -> a[4] = 20
Thong tin dia chi >  noi dung: what? where?
*/
int Max(int a[], int n) {
    int d = 0, c = n - 1;//dau, cuoi
    
    if (d == c) {
        return d;
    }
    int m = (d + c) / 2;//giua
    int i = Max(a, d, m);// tu d den m

    int j = Max(a, m + 1, c); // tu m+1 den c
    if (a[i] < a[j]) {
        return j;
    }
    //so on...
}

/*
bai toan: 27 nhan vang, trong do co 1 nhan loi (nhe hon cac nhan khac)
Can dia A, B. Tim nhan loi voi so lan can it nhat
cach lam: 3 nhom, moi nhom 9 nhan
A: 9        B: 9 
ban: C: 9
Neu A = B -> nhan loi nam o C
Neu A < B -> nhan loi nam o A
Neu A > B -> nhan loi nam o B

1 lan can xac dinh duoc nhom nhan loi
------------------------------------
9 = 3 3 3

...
so on..
------------------------------------
1 1 1 -> tim duoc
*/

int main () {
    cout << "\n \n THE END \n";
}