/*
	Name: DIV11.CPP
	Copyright: (C) 2023
	Author: Devcpp Fan 
	Date: 22-06-23 11:50
	Description:
	x chia het 11 khi va chi khi 
	abs(TC - TL) la boi cua 11
	12345678906
	TL = 1+3+5+7+9+6 = 31
	TC = 2+4+6+8+0 = 20
	hieu = 11 
*/

#include <bits/stdc++.h> 
using namespace std;

void Go() {
	cout << " ? ";
	fflush(stdin);
	if (cin.get()=='.') exit(0);
}

// Kiem tra so x co chia het cho 11?
bool Div11(string x) {
	int n = x.length();
	x += "0";
	int tc = 0, tl = 0;
	// 12345678906
	for(int i = 0; i < n; i += 2) {
	  tc += x[i] - '0';	
	  tl += x[i+1] - '0';
	}
	return (abs(tc - tl) % 11) == 0;	
}

main() {	  
  cout << Div11("1234567890666778822115555441");
  cout << endl << "\n\n T h e   E n d \n";
  return 0;
}

