#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);

    for (auto &i: a) {
        cin >> i;
    }
    deque<int>dq;
    for (int i = 0; i < n; i++) {
        if (dq.front() == i - k) {
            dq.pop_front();
        }
        while (dq.empty() == 0 && a[dq.back()] <= a[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i + 1 >= k) {
            cout << a[dq.front()] << " ";
        }
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}