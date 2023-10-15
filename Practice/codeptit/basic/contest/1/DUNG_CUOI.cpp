#include <bits/stdc++.h>
using namespace std;
/*
Có N người xếp hàng với N cái tên phân biệt. Người ta muốn xếp một người duy nhất luôn đứng ở cuối hàng. Hãy liệt kê tất cả các cách xếp hàng thoả mãn theo thứ tự từ điển.

Input

Dòng đầu ghi số N (1 < N < 10) là số người xếp hàng

Dòng 2 ghi N cái tên khác nhau từng đôi một, mỗi cái tên là một dãy ký tự độ dài không quá 30 và không có khoảng trống.

Dòng 3 ghi tên người luôn đứng cuối hàng. Dữ liệu đảm bảo tên của người đứng cuối luôn có trong danh sách ở dòng 2. 

Output

Ghi ra danh sách tất cả các cách xếp hàng theo thứ tự từ điển tăng dần.
*/
void testCase() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    string s;
    cin >> s;
    sort(a.begin(), a.end());
    vector<string> res;
    do {
        string tmp = "";
        for (int i = 0; i < n; i++) tmp += a[i] + " ";
        tmp += s;
        res.push_back(tmp);
    } while (next_permutation(a.begin(), a.end()));
    sort(res.begin(), res.end());
    for (auto x : res) cout << x << endl;
}
int main () {
    testCase();
}