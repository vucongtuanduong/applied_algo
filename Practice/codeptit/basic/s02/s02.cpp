#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void testCase();
string bigSum(string a, string b);
string bigMul(char a, string b);
string bigSub(string x, string y);
string bigGcd(string a, string b);
string bigMul1(string a, string b);
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
}
void testCase() {
    // int n;
    // cin >> n;
    // cin.ignore();
    string a,b;
    cin >> a >> b;
    // cout << a << " " << b << endl;
    string gcd = bigGcd(a, b);
    int len = a.size();
    string resMul = "";
    for (int i = len - 1; i >= 0; --i) {
        string m = bigMul(a[i], b);
        m.insert(m.size(), len - i - 1, '0');
        // cout << m << endl;
        resMul = bigSum(resMul, m);
        // cout << "enter!";
    }
    string res = "0", temp1, temp2;
    for (int i = 0; i < resMul.size(); i++) {
        res.push_back('0');

        temp1.push_back(resMul[i]);

        int count = 0;
        temp2 = "";
        while (temp1.size() > gcd.size() || (temp1.size() == gcd.size() && temp1 > gcd)) {
            count++;
            temp1 = bigMul1(temp1, gcd);
            while (temp1[0] == '0') {
                temp1.erase(0, 1);
            }
        }
        temp2 += to_string(count);
        res = bigSum(res, temp2);

    }
    if(temp1 == gcd) {
        res = bigSum(res,"1");
    }
    if (resMul.size() < gcd.size() || (resMul.size() == gcd.size() && resMul < gcd)) {
        cout << "0";
        return ;
    } else {
        while (res[0] == '0') {
            res.erase(0, 1);
        }
        cout << res;
    }
}
string bigSum(string a, string b) {
    string x = a, y = b;
    if (x.size() < y.size()) {
        x.insert(0, y.size() - x.size(), '0');
    } else {
        y.insert(0, x.size() - y.size(), '0');
    }
    
    string res = "";
    int temp = 0;
    // cout << temp << endl;
    for (int i = x.size() - 1; i >= 0; i--) {
        temp = (x[i] - '0') + (y[i] - '0') + temp;
        res.insert(0, 1, (temp % 10 + '0'));
        temp /= 10;
        // cout << res << endl;
    }
    if (temp > 0) {
        res.insert(0, 1, (temp + '0'));
    }
    return res;
}
string bigMul(char a, string b) {
    string res = "";
    int temp = 0;
    for (int i = b.size() - 1; i >= 0; --i) {
        temp = (a - '0') * (b[i] - '0') + temp;
        // cout << temp << endl;
        res.insert(0, 1, temp % 10 + '0');
        temp /= 10;
        
        // cout << res << endl;
    }
    if (temp > 0) {
        res.insert(0, 1, temp % 10 + '0');
    }
    return res;
}
string bigSub(string x, string y) {
    // x > y
    while (y.size() < x.size()) {
        y.insert(0, "0");
    }
    string res = x;
    int carry = 0;
    for (int i = x.size() - 1; i >= 0; i--) {
        int temp = (x[i] - '0') - (y[i] - '0') - carry;
        if (temp < 0) {
            temp += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        res[i] = temp + '0';

    }
    while (res[0] == '0' && res.size() > 1) {
        res.erase(0, 1);
    }
    return res;
}

string bigGcd(string a, string b) {
    while (a != b) {
        if (a.size() > b.size() || (a.size() == b.size() && a > b)) {
            a = bigSub(a, b);
            // cout << a << endl;
        } else {
            b = bigSub(b, a);
            // cout << b << endl;
        }
    }
    // cout << a << endl;
    return a;
}
string bigMul1(string a, string b) {
    // assume that b is always smaller than a
    while (a.size() != b.size()) {
        b.insert(0, "0");
    }
    string res = "";
    int x = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] >= b[i]) {
            x = a[i] - b[i];
        } else {
            x = a[i] - b[i] + 10 ;
            a[i - 1]--;
        }
        res.insert(0, to_string(x));
    }
    return res;
}