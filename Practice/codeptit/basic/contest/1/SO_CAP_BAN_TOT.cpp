#include <bits/stdc++.h>
using namespace std;
/*
Sau khi thi trượt môn CTDL&GT, lớp PTIT_TLE được thành lập và có N sinh viên, xếp ngẫu nhiên thành một hàng dọc. Giả sử anh em đều nói khá to nên mỗi người có thể hỏi tên của chiến hữu đứng cách mình không quá K vị trí. Và nếu cặp nào đó có độ dài tên đúng bằng nhau thì sẽ trở thành một cặp bạn tốt, hứa hẹn sẽ hỗ trợ nhau trong những lần TLE tiếp theo.

Hãy đếm xem có bao nhiêu cặp bạn tốt tồn tại trong hàng.

Input

Ghi hai số N và K (3<=N<=300 000; 1<= K <=N)

Tiếp theo là N dòng, mỗi dòng ghi một cái tên (đều là chữ cái in hoa không dấu, không có khoảng trống).

Output

Ghi ra số cặp bạn tốt tìm được.
*/
void testCase() {
    int n, k;
    cin >> n >> k;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int res = 0;
    for (int i = 0; i < n; i++) {
        int l = i + 1, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[mid].length() - a[i].length() <= k) {
                if (a[mid] == a[i]) {
                    res++;
                }
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    cout << res;
}
int main () {
    testCase();
}