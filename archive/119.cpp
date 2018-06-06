#include <iostream>
using namespace std;
int main(){
	int a, b, n, gcda, gcdb;
	cin >> a >> b >> n;

	while(a!=0 || n!=0){
		if(a > n){
			a %= n;
		}
		else {
			n %= a;
		}
		int gcda = a + n;;
	}
	while(b!=0 || n!=0){
		if(b > n){
			b %= n;
		}
		else {
			n %= b;
		}
		int gcdb = b + n;;
	}
	int h = 0;
	while(n!=0){
		if(h % 2 == 0){
			n -= gcda;
		}
		else {
			n -= gcdb;
		}
		h++;
        
	}
	if(h % 2 == 0){
		cout << 1;

	}
	else {
		cout << 0;
	}
}