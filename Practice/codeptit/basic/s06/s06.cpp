#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void testCase();
void init(int *a, int *res, int n ,int k);
bool isFinal(int *a, int *res, int n ,int k);
void display(int *a, int *res, int n ,int k);
void genNext(int *a, int *res, int n ,int k);
int find(int *a, int x, int n) ;
int main (){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        // cout << endl;
    }
}
void testCase (){
    int n, k;
    cin >> n >> k;
//    cout << n << " " << k << " \n";
    int a[n + 1];
    int res[n + 1];
    // for (int i = 1; i < 100; i++) {
    //     a[i] = 0;
    //     res[i] = 0;
    // }
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        res[i] = a[i];
    }
    
    
    // for (int i = 1; i <= n; i++) {
    //     cout <<  a[i] << " ";
    // }
    // cout << endl;
    sort(a, a + n + 1);
    // for (int i = 1; i <= n; i++) {
    //     cout <<  a[i] << " ";
    // }
    // cout << endl;
    init(a, res, n , k);
    while(!isFinal(a, res, n , k)) {
        display(a, res, n , k);
        genNext(a, res, n , k);
    }
    display(a, res, n , k);
}
void init(int *a, int *res, int n ,int k) {
    for (int i = 1; i <= k; i++) {
        res[i] = a[i];
        // cout << "res[i] = a[" << i << "] = " << a[i]  << endl;
    }
}
bool isFinal(int *a, int *res, int n ,int k) {
    for (int i = 1; i <= k; i++) {
        if (res[i] != a[n - k + i]) {
            return false;
        }
    }
    return true;
}
void display(int *a, int *res, int n ,int k) {
    for (int i = 1; i <= k; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}
void genNext(int *a, int *res, int n ,int k) {
    int i = k;
    while (res[i] == a[n - k + i]) {
        i--;
    }
    int index = find(a, res[i], n);
    res[i] = a[index + 1];
    int current = find(a, res[i], n) + 1;
    for (int j = i + 1; j <= k; j++) {
        res[j] = a[current];
        // cout << "res[j] = a[current] = " << a[current]  << endl;
        current++;
    }
}
int find(int *a, int x, int n) {
    for (int i = 1; i <= n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return 0;
}