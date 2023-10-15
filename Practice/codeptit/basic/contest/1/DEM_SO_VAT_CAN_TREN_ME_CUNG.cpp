#include <bits/stdc++.h>
using namespace std;
/*
Một mê cung được mô tả dưới dạng ma trận ký tự trong đó dấu ‘.’ là mô tả ô trống, không có vật cản, dấu ‘#’ mô tả một vật cản. Các vật cản sẽ ghép lại với nhau thành vật cản lớn hơn nếu nó liền kề theo hàng hoặc cột.

Hãy đếm xem trong mê cung có bao nhiêu vật cản.

Input

Dong đầu ghi số hai số N, M là số hàng và số cột của mê cung.

N dòng tiếp theo mô tả mê cung trong đó chỉ có các ký tự ‘.’ và ‘#’.

Output

Ghi ra số vật cản đếm được.
*/
void testCase() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            a[i][j] = s[j];
        }
    }
    int res = 0;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            if (a[i][j] == '#' && !visited[i][j]) {
                res++;
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = true;
                while (!q.empty()) {
                    pair<int, int> u = q.front();
                    q.pop();
                    for (int k = 0; k < 2; k++) {
                        int x = u.first + dir[k].first;
                        int y = u.second + dir[k].second;
                        if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '#' && !visited[x][y]) {
                            q.push({x, y});
                            visited[x][y] = true;
                        }
                    }
                }
            }
        }
    }
    cout << res;
}
int main () {
    testCase();
}
