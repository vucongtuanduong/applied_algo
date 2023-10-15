#include <bits/stdc++.h>

/*
Cho một bảng số N hàng, M cột chỉ gồm 0 và 1. Bạn hãy tìm hình vuông có kích thước lớn nhất, sao cho các số trong hình vuông toàn là số 1.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
Mỗi test bắt đầu bởi 2 số nguyên N, M (1 ≤ N, M ≤ 500).
N dòng tiếp theo, mỗi dòng gồm M số mô tả một hàng của bảng.
Output: 

Với mỗi test, in ra đáp án là kích thước của hình vuông lớn nhất tìm được trên một dòng.
*/
using namespace std;
int implement(int a[][500], int rows, int columns) {
    int max = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns ; j++) {
            if (a[i][j] == 1) {
                int count = 1;
                int k = 1;
                while (i + k < rows && j + k < columns) {
                    int check = 1;
                    for (int l = i; l <= i + k; l++) {
                        if (a[l][j + k] == 0) {
                            check = 0;
                            break;
                        }
                    }
                    for (int l = j; l <= j + k; l++) {
                        if (a[i + k][l] == 0) {
                            check = 0;
                            break;
                        }
                    }
                    if (check == 1) {
                        count++;
                    }
                    else {
                        break;
                    }
                    k++;
                }
                if (count > max) {
                    max = count;
                }
            }
        }
    }
    return max;
}
//attempt 2
void testCase() {
    int rows, columns;
    cin >> rows >> columns;
    int a[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns ; j++) {
            cin >> a[i][j];
        }
    }
    int res = 0;
    int f[rows][columns] = {0};
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (a[i][j] == 0) {
                f[i][j] = 0;
            } else {
                f[i][j] = min(f[i - 1][j], min(f[i][j - 1], f[i - 1][j - 1])) + 1;
            }
            res = max(res, f[i][j]);
        }
        
    }
    cout << res;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
        // cout << implement(a, rows, columns) << endl;
    }
    

}