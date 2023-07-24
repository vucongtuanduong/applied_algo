#include <bits/stdc++.h>
using namespace std;
/*
Cho N cặp số Ai (xi, yi). Cặp (x1, y1) < (x2,y2) nếu như x1 < x2 và y1 < y2.

Nhiệm vụ của bạn là hãy tìm dãy con tăng dài nhất trên mảng các cặp số này.

Input:

Dòng đầu tiên là số nguyên N (N ≤ 100 000).

N dòng tiếp theo, mỗi dòng gồm 2 số nguyên xi, yi. Các số có giá trị tuyệt đối không vượt quá 109.

Output: 

In ra một số nguyên là độ dài dãy con tăng dài nhất tìm được.   
*/
int implement(int n, pair<int, int> a[]) {
    int dp[n];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = i - 1; j >= 0; j--) {
            if (a[i].first > a[j].first && a[i].second > a[j].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = max(res, dp[i]);
    }
    return res;
}
int main () {
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    cout << implement(n, a);
}