#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void DevideString(std::string s, std::vector<std::string>& a) {
    std::string x = "";
    s += " ";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (x != "") {
                a.push_back(x);
                x = "";
            }
        } else {
            x += s[i];
        }
    }
}

int main() {
    int t;
    std::cin >> t;
    std::cin.ignore();
    while (t-- > 0) {
        std::string s;
        std::getline(std::cin, s);
        std::vector<std::string> a;
        DevideString(s, a);
        for (int i = 0; i < a.size(); i++) {
            s = a[i];
            std::reverse(s.begin(), s.end());
            std::cout << s << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
