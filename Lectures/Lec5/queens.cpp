// Queens, Ver. 1: Tim mot nghiem
#include <bits/stdc++.h>
using namespace std;
const int MN = 20;
int v[MN]; // Hau k dat tai dong v[k], 1 <= k <= n

void Go() {
   cout << " ? ";
   fflush(stdin);
   if (cin.get() == '.')
	    exit(0);
}

// Hien thi nghiem: cac dong dat Hau
void Print(int n) {
   for (int i = 1; i <= n; ++i)
	 cout << " " << v[i];
}

// Hau k duoc dat tai dong i ?
bool GoodPlace(int k, int i) {
   // xet cac Hau da dat truoc Hau k
   for (int j = 1; j < k; ++j) 
       if (v[j] == i || k - j == abs(v[j] - i))
          return 0; // Hau j va k dung do
    return 1;
}

// Tim dong dat Hau k
// tren ban co nxn
// day Hau k xuong cac dong duoi
// kiem tra co the dat Hau k tai dong do?
int Find(int k, int n) {
   for (int i =  v[k] + 1; i <= n; ++i) 
     if (GoodPlace(k, i)) return i; // Hau k duoc dat tai dong i         
   return 0;
}

void Queens(int n) {
    cout << " Queens of " << n << ": ";		
    if (n >= MN) {
        cout << " Large chess board size: " << n;
        return;
    }
    if (n < 1) {
        cout << " No solution.";
        return;
     }
	   if (n == 1) {
		cout << 1;
		return;
	   }        
    fill(v, v+n+1, 0);  // n > 1: Dat n Hau ngoai ban co
    int k = 1; // cam Hau k
    while (true) {
        if (k < 1) {
           cout << " No solution.";
           return;
        }
        if (k > n) {  // nghiem
            Print(n);
            return;
        }
        v[k] = Find(k, n);  // Tim dong dat Hau k
        if (v[k] > 0) // neu tim duoc
            ++k;   // Tien: xet Hau ke tiep: k + 1
        // neu ko: Lui: k - 1
        else  --k;
    }
}

void Run() {
  for (int n = -1; n < MN; ++n) {
     Queens(n); Go();
  }	
}

main() {
  Run();
  cout << "\n T h e   E n d";
  return 0;
}
