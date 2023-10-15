#include <bits/stdc++.h>
using namespace std;
/*
Cho một xâu ký tự S chỉ có các chữ cái Tiếng Anh viết thường. Hãy đếm xem có bao nhiêu ký tự chữ cái khác nhau trong S.
*/
void testCase () {
    string s;
    cin >> s;
    int a[26] = {0};
    for (auto x :s) {
        a[x - 'a']++;
    }
    int count = 0;
    for (auto x : s) {
        if (a[x - 'a'] == 1) {
            count++;

        }
    }
    cout << count;
}
void testCase2() {
    string s;
    cin >> s;
    set<char> a;
    for (auto x : s) {
        a.insert(x);
    }
    cout << a.size();
}
int main () {
    testCase2();
}