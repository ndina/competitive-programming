#include <iostream>
#include <cmath>

using namespace std;
int main(){

	long long n = 31, sum = 0;
	int a[n];

	for(int i = 0; i < 31; i++){
		cin >> a[i];
		sum += a[i];
	}

	cout << sum / 27;
}