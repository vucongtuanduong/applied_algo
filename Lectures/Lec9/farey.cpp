/*
	Name: Farey.CPP
	Copyright: (C) 2023
	Author: Devcpp Fan 
	Date: 22-06-23 11:50
	Description:
	Cho n
	Liey ke cac phan so toi gian 0..1 sap rang
	1 <= mau <= n
*/
#include <bits/stdc++.h> 
using namespace std;

// (14,21) (14,21-14) = (14,7) = (7,7) = 7
// (49, 14) r = 49 % 14 = 7 (14, 7) 14 % 7 = 0 (7,0) 
int Gcd(int a, int b) {
	int r;
	while(b != 0) {
	  r = a % b;
	  a = b; b = r;
  } // b = 0
  return a;
}

class Frac {
	public:
		// Data
	  int Tu;
		int Mau;
		// cac phuong thuc
		Frac() { // constructor
		  Tu = 0; Mau = 1;
	  }
	  Frac(int t, int m) { // constructor
		  Tu = t; Mau = m;
	  }
	  Frac(int t) { // constructor
		  Tu = t; Mau = 1;
	  }
	  Frac(const Frac & f) { // constructor
		  Tu = f.Tu; Mau = f.Mau;
	  }
	  // Hien thi
	  inline void Print(const char * msg = "") {
	  	cout << msg << Tu << "/" << Mau;
	  }
	  inline void Set(int t, int m) {
	  	Tu = t; Mau = m;
	  }
	  // -14/21 Gcd(14,21) = 7, 2/3  
	  Frac Reduce() {
	  	int d = Gcd(abs(Tu), Mau);
	  	Tu /= d; Mau /= d;
	  	return *this;
	  }	  
	  // 1/2 4/8
	  friend bool operator ==(const Frac & a, const Frac & b) {
	  	return a.Tu*b.Mau == a.Mau*b.Tu;
	  }
	  
	  friend bool operator !=(Frac a, Frac b) {
	  	return !(a == b);
	  }
}; // end of class
	  
typedef vector<Frac> VF;

void Go() {
	cout << " ? ";
	fflush(stdin);
	if (cin.get()=='.') exit(0);
}

void Print(VF a, const char * msg = "") {
	cout << msg;
	for(int i = 0; i < a.size(); ++i) 
	   a[i].Print("\n ");	
	cout << "\n Total " << a.size();   
}

inline bool Less(Frac a, Frac b) {
	return a.Tu * b.Mau < a.Mau*b.Tu;
}

void Farey(int n) {
	VF f;
	f.push_back(Frac(0,1));
	f.push_back(Frac(1,1));
	for(int mau = 2; mau <= n; ++mau) {
		 for(int tu = 1; tu < mau; ++tu) {
		    f.push_back(Frac(tu, mau).Reduce());
	   }
	}
	Print(f, "\n Init: ");
	sort(f.begin(), f.end(), Less);
	Print(f, "\n Inc Sorted: ");
	// luoc cac duplicated Factions
	VF res;
	int j = 0;
	res.push_back(f[j]); 
	for(int i = 1; i < f.size(); ++i) {
		 if (f[i] != res.back()) 
		    res.push_back(f[i]);
	}
	Print(res, "\n Result: ");
}

main() {  
  Farey(15);
  cout << endl << "\n\n T h e   E n d \n";
  return 0;
}

