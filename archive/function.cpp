#include <iostream>

using namespace std;

int main(){
	unsigned long long n;

	cin >> n;

	if(n % 2 == 0){
		cout << n / 2;
	}
	else {
		cout << "-" << n/2+1;
	}
}