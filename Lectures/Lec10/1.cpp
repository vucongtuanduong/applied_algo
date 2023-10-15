#include <bits/stdc++.h>
using namespace std;
//rhythm
/*
1 dong nhat
2 tang chat
3 dong bien
4 giam chat
5 nghich bien
0 len xuong
*/
int Rhythm(float a[], int n) {
    int b = 0, t = 0, g= 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            b = 1;
        } else if (a[i] > a[i - 1]) {
            t = 1;
        } else {
            g =1;
        }
    }
    // if (b > 0) {
    //     b = 1;
    // }
    
    // if (t > 0) {
    //     t =1 ;
    // }
    return (4 * g + 2 * t + b) % 7 % 6;
}
void Print(float a[], int n, const char *msg) {
    cout << msg << endl;
    for (int i = 0; i < n ; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void Gen(float a[], int n) {
    srand(time( NULL)); //start random           
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
}        
void GenTangChat(float a[], int n) {
    srand(time( NULL)); //start random           
    a[0] = rand() % 100;
    for (int i = 1; i < n; i++) {
        a[i] = a[i - 1] + rand() % 10;
    }
}  
void Rev(float a[], int n) {
    int d = 0, c = n -1;
    while (d < c) {
        float x = a[d];
        a[d] = a[c];
        a[c] = x;
        d++;
        c--;
    }
}
int  main () {
    // float a[] = {5,5, 5, 5,5 ,5,5,5,5,5};//1
    // float a[] = {5,7, 9, 15,25 ,30,31,35,54,59};//2
    // float a[] = {5,5, 7, 7,15,15,15,25,25,35,};//3
    // float a[] = {50,45, 25, 14,10 ,9,7,-5,-15,-25};//4
    // float a[] = {50,50, 50, 45,45 ,45,15,15,5,5};//5
    // float a[] = {50,15, 65, 5,5 ,5,51,55,5, 5};//0
    int n = 10;
    float a[n];
    GenTangChat(a, n);
    Print(a, n, "Mang: ");
    cout << Rhythm(a, n) << endl;
}