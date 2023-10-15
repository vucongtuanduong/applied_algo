#include <bits/stdc++.h>
using namespace std;
/*
Cho dãy số A[] có n phần tử. Hãy sắp xếp các số chẵn trong dãy theo thứ tự tăng dần và các số lẻ theo thứ tự giảm dần.

In ra dãy kết quả đã sắp xếp trong đó vị trí số chẵn và vị trí số lẻ không thay đổi so với dãy ban đầu.

Input

Dòng đầu ghi số n (1 < n ≤ 1000)

Các dòng tiếp theo ghi đủ n số của dãy A[], các số đều nguyên dương và không quá 1000.

Output

Ghi ra dãy kết quả đã sắp xếp trong đó các vị trí của số chẵn và số lẻ không thay đổi.
*/
void testCase() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) b.push_back(a[i]);
        else c.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end(), greater<int>());
    int j = 0, k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << b[j] << " ";
            j++;
        }
        else {
            cout << c[k] << " ";
            k++;
        }
    }
    cout << endl;
    
    
}
int main () {
    testCase();
}