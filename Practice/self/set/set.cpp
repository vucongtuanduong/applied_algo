#include <bits/stdc++.h>
using namespace std;
int main () {
    int a[] = {1,1,2,1,2,7,1,3};
    set<int> se;
    for (int i = 0; i < 8; ++i) {
        se.insert(a[i]);
    }
    cout << se.size();
    for (int x: se) {
        cout << x << " ";
    }
    for (auto it = se.begin() ; it != se.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    //duyet nguoc
    for (auto it = se.rbegin() ; it != se.rend(); ++it) {
        cout << *it << " ";
    }
    //phan tu dau tien(nho nhat)
    cout << *se.begin() << endl;
    //phan tu cuoi cung(lon nhat)
    cout << *se.rbegin() << endl;
    //iterator chi co the ++ hoac --
    

    /*
    cac ham:
    se.size(): kich thuoc set
    se.insert(value): them phan tu value vao set
    
    */
   auto it = se.find(3);
   auto it1 = se.find(9);
   //complexity O(log(n))
   //function find() return iterator to the value if found, else iterator end()
   if (it == se.end()) {
         cout << "Khong tim thay" << endl;
    }
    else {
         cout << "Tim thay" << endl;
   }
   /*
   s.erase(value): xoa phan tu ton tai trong set, neu 0 ton tai se bao loi runtime error
   O(log(n))
   */

    /*
    se.count(3): will return 1 or 0
    and can replace find function
    */
   multiset<int> ms;
   for (int i = 0; i < 8; ++i) {
        ms.insert(a[i]);
    }
    cout << ms.size();
    for (int x: ms) {
        cout << x << " ";
    }
    auto it = ms.find(3);//neu xoa luon thi xoa tat ca 3
    ms.erase(it)
    for (int x: ms) {
        cout << x << " ";
    }
}