#include <bits/stdc++.h>
using namespace std;
//chuyen cac ki tu in hoa cua xau s thanh in thuong
void inthuong(string &s) {
    for (char &x:s) {
        x = tolower(x);
    }
}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("introstring_input.txt", "r", stdin);
    freopen("introstring_output.txt", "w", stdout);
    #endif
    // string s  = "cau truc du lieu va giai thuat";
    // cout << s << endl;

    /*
    cin >> s : chi doc xau khong co dau cach, dung khi gap dau cach
    getline(cin, s) : doc xau co dau cach, dung khi gap phim Enter
    */
    // string s;
    // // cout << s;
    // getline(cin , s);
    // cout << s << endl;

    /*
    xu ly loi khi nhap vao 1 so roi nhap mot xau thi getline se tat khi gap phim Enter
    => dung cin.ignore() de xoa bo nho dem
    */
    // int n;
    // cin >> n;
    // cin.ignore(1);
    // string s;
    // getline(cin , s);
    // cout << s << endl;
    // //lay do dai xau
    // cout << s.length() << endl;
    // cout << s.size() << endl;
    // //in do dai xau
    // for (int i = 0; i < s.size(); i++) {
    //     cout << s[i] << endl;
    // } 
    // cout << endl;
    // for (char x: s) {
    //     cout << x << " ";
    // }
    // cout << endl;
    // for (auto it = s.begin(); it != s.end(); it++) {
    //     cout << *it << " ";
    // }


    //them ki tu vao cuoi
    // string s = "python";
    // s.push_back('3');
    // cout << s << endl;
    // s.pop_back();
    // cout << s << endl;

    // //truy cap vao phan tu dau va phan tu cuoi
    // cout << s[0] << " " << s[s.size() - 1] << endl;
    // cout << s.front() << " " << s.back() << endl;

    // //ham insert
    // s.insert(0, "hello");
    // cout << s << endl;

    // //ham erase: co the chi ro chi so bat dau xoa va so luong ki tu muon xoa
    // s.erase(0, 5);
    // cout << s << endl;

    // //ham find: tim kiem xau con trong xau
    // //tra ve chi so dau tien cua xau con neu co xau con trong s, neu khong thi tra string::npos
    // string s1 = "hello";
    // string s2 = "lo";
    // if (s1.find(s2) != string::npos) { // hoac la != -1
    //     cout << s1.find(s2) << endl;
    // } else {
    //     cout << "NOT FOUND\n";
    // }

    // //ham substr: tra ve xau con bat dau tu vi tri pos voi do dai len
    // cout << s1.substr(1, 3) << endl;

    // //so sanh hai xau va cong xau: co the  dung toan tu
    // // ==, !=, <, >, <=, >=
    // string s3 = "hello";
    // string s4 = "world";
    // cout << (s3 + s4) << endl;

    // //so sanh hai xau: so sanh theo thu tu tu dien
    // if (s3 == s4) {
    //     cout << "s3 == s4\n";
    // } else if (s3 < s4) {
    //     cout << "s3 < s4\n";
    // } else {
    //     cout << "s3 > s4\n";
    // }
    // /*
    // ngoai ra con cac ham nhu isdigit, islower, isupper, isalpha, int tolower, int toupper
    // */


    // //dao nguoc string
    // string s5 = "hello";
    // reverse(s5.begin(), s5.end());
    // cout << s5 << endl;

    //chuyen xau thanh so: stoll
    //chuyen so thanh xau: to_string

    //string with vector, set, map
    // string a[] = {"28tech", "dev", "dsa", "c++", "python"};
    // sort(a, a + 5);
    // for (string x: a) {
    //     cout << x << " ";
    // }
    // cout << endl;
    // vector<string> v = {"28tech", "dev", "dsa", "c++", "python"};
    // sort(v.begin(), v.end(), greater<string>());
    // for (string x: v) {
    //     cout << x << " ";
    // }
    // string a[] = {"28tech", "dev", "dsa", "c++", "python", "c++", "dev", "python"};
    // set<string>se;
    // for (string x: a) {
    //     se.insert(x);
    // }
    // cout << se.size() << endl;
    // for (string x: se) {
    //     cout << x << " ";
    // }
    // cout << endl;
    // map<string, int> mp;
    // for (string x: a) {
    //     mp[x]++;
    // }
    // for(auto x: mp) {
    //     cout << x.first << " " << x.second << endl;
    // }
    //stringstream: tach cac tu bang stringstream theo dau cach
    string s = "28tech    c++ program java";
    stringstream ss(s);
    string word;
    while(ss >> word) {
        cout << word << endl;
    }
}