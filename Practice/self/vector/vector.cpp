#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int>v(n);
    /*
    iterator:
    v.begin(): iterator den phan tu dau tien
    v.end(): iterator den phan tu sau phan tu cuoi
    vector<int> v = {1(=v.begin()), 2, 3, 4, 5 , (v.end())}
    */
    vector<int>v1 = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    v.push_back(6);
    it = v.begin() + 3;
    cout << *it << endl;
    /*
    function:
    v.size(): kich thuoc vector
    v.clear() : xoa tat ca phan tu
    v.empty(): true neu vector rong, nguoc lai tra ve false
    v.insert(v.begin() + x, value)
    */

}