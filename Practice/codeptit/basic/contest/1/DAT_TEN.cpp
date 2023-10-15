#include <bits/stdc++.h>
using namespace std;
/*
Kỳ thi ICPC có K đội của PTIT tham gia và đội tuyển đang rất đau đầu không biết chọn các cái tên như thế nào cho các đội. Yêu cầu phải đảm bảo tên không có khoảng trống và không được trùng nhau. Sau khi thảo luận, có N cái tên được đề xuất (có thể bị trùng nhau). Với K<15 và 4 < N < 30.

Hãy liệt kê tất cả danh sách các tổ hợp K cái tên khác nhau có thể được tạo ra theo thứ tự từ điển.

Input

Dòng đầu ghi 2 số N và K.

Tiếp theo là 1 dòng ghi N cái tên, mỗi cái tên có độ dài không quá 15 và cách nhau một khoảng trống. Tất cả đều là ký tự in hoa.

Output

Ghi ra tất cả các tổ hợp tên có thể được lựa chọn theo thứ tự từ điển.

Tức là các tên trong mỗi tổ hợp liệt kê theo thứ tự từ điển và các tổ hợp cũng được liệt kê theo thứ tự từ điển.
*/
void testCase() {
    int n, k;
    cin >> n >> k;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<string> res;
    for (int i = 0; i < (1 << n); i++) {
        string s = "";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) s += a[j] + " ";
        }
        if (count(s.begin(), s.end(), ' ') == k - 1) res.push_back(s);
    }
    sort(res.begin(), res.end());
    for (auto x : res) cout << x << endl;
}
int main () {
    testCase();
}