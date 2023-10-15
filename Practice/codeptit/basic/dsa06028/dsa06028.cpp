#include <bits/stdc++.h>
using namespace std;
void testCase() {
    int n;
    cin >> n;
    int a[n];
    vector<vector<int>>b;
    for (int &i: a) {
        cin >> i;
    }
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(a[i], a[min_index]);
        }
        vector<int>temp;
        for (auto j: a) {
            temp.push_back(j);
        }
        b.push_back(temp);
    }
    for (int i = b.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i + 1 <<  ": ";
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
int main () {
    // int t;
    // cin >> t;
    // while (t--) {
        testCase();
        cout << endl;
    // }
}