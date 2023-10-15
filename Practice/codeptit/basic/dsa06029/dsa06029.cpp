#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a , const void *b) {
    return (*(int *) a = *(int *) b);
}
int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<int>> res;
    for (int i = 0; i < n; i++) {
        sort(a.begin(), a.begin() + i + 1);
        vector<int> temp(a.begin(), a.begin() + i + 1);;
        
        res.push_back(temp);
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i << ": ";
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}