#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long n, b = 0, a;
	cin >> n;
	while(n != 0){
		a = n % 10;
		if(a == 4 || a == 7){
			b++;
		}
		a /= 10;
	}
	if(b == 4 || b == 7){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}