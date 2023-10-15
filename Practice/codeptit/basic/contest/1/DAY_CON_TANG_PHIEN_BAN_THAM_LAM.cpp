#include <bits/stdc++.h>
using namespace std;
/*
Dãy con tăng phiên bản tham lam được mô tả như sau:

Luôn lấy phần tử  đầu tiên của dãy
Với mỗi bước, lấy số tiếp theo trong dãy lớn hơn số đã có trong bước trước.
Cụ thể hơn, dãy được chọn là: ai1, ai2, . . . , aik với:

i1 = 1
Với mỗi chỉ số j (1 ≤ j < k), ij+1 được chọn sẽ là chỉ số nhỏ nhất lớn hơn ij thoả mãn aij < aij+1
aik ≥ aℓ với tất cả ℓ > ik
Hãy liệt kê tất cả các dãy con tăng tạo được theo cách trên. Biết rằng sau mỗi bước, dãy được chọn sẽ được xoá ra khỏi dãy ban đầu và thuật toán dừng lại khi dãy ban đầu không còn phần tử nào nữa.

Input

Dòng đầu ghi số N là số phần tử của dãy ( 1 ≤ N ≤ 2*105)

Dòng thứ 2 ghi N số của dãy a (0 ≤ ai ≤ 109).

Output

Dòng đầu ghi số lượng dãy tăng tạo được.

Mỗi dòng tiếp theo ghi ra một dãy tăng theo thứ tự tạo được từ cách tham lam như trong mô tả đề bài.*/
void testCase() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    vector<int> res;
    for (int i = 0; i < n; i++) {
        if (res.empty() || res.back() < a[i]) res.push_back(a[i]);
        else {
            int pos = lower_bound(res.begin(), res.end(), a[i]) - res.begin();
            res[pos] = a[i];
        }
    }
    cout << res.size() << endl;
    for (int x : res) cout << x << " ";
    cout << endl;
}

int main () {
    testCase();
}