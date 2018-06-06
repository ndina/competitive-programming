#include <iostream>
#include <algorithm>

using namespace std;

struct f{
	string n,s;
	double a1, b ,c; //r1, r2 ,r3;

};
int main(){
 int n;
 double r1 = 0, r2 = 0, r3 = 0;
 cin >> n;
f a[n];
 for(int i = 0; i < n; i ++){ 	
 	cin >> a[i].n >> a[i].s >> a[i].a1 >> a[i].b >> a[i].c;
     r1 += a[i].a1;
     r2 += a[i].b;
     r3 += a[i].c;
 }


 cout <<r1 / n << " " << r2 / n << " " << r3 / n;
}