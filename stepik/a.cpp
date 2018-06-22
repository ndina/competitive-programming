#include <iostream>
using namespace std;
int gcd(int a, int b){
	if(a == 0){
		return b;
	}
	if(b == 0){
		return a;
	}
}
int main(){
	int a, b;
   cin >> a >> b;

   if(a >= b){
   	cout << gcd(a%b, b);
   }
   else if (a <= b){
   	cout << gcd(a, b %a);
   }

}