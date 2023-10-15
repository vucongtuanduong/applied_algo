#include <bits/stdc++.h>
using namespace std;
/*
Cho một xâu ký tự S có N từ chỉ bao gồm các chữ cái viết hoa.

Hãy liệt kê tất cả các từ khác nhau tạo được bằng cách ghép các từ trong xâu S lại với nhau, có thể ghép với bất cứ số lượng từ 1 đến đủ N từ nhưng vẫn giữ nguyên thứ tự trước sau như trong xâu ban đầu.

Input

Dòng đầu ghi số N (1 < N < 16).

Dòng thứ 2 ghi lần lượt N từ, mỗi từ có độ dài lớn hơn 1 nhưng không quá 20, các từ có thể trùng nhau.

Output

Ghi ra các từ khác nhau tạo được theo thứ tự từ điển.
*/
void testCase() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<string> res;
    for (int i = 0; i < (1 << n); i++) {
        string s = "";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) s += a[j];
        }
        res.push_back(s);
    }
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    for (auto x : res) cout << x << " ";
    cout << endl;
}
int main () {
    testCase();
}