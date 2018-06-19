#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, a, b;

	cin >> n;
	cin >> a  >> b;

	for(int i = n - 1; i >= 1; i--){
		int c = b - a;
		b = a;
		a = c;
	}

	cout << a << " " << b;

	return 0 ;
}