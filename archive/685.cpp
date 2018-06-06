#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	// 1 2 3
	// 3 2 1
	// 9 + 4 + 1

	int n = 3, sum = 0;

	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	} 

	sort(a, a+n);

	int m = 3;

	int b[m];

	for(int i = 0; i < m; i++){
		cin >> b[i];
	}

	sort(b, b + m);

	for(int i = 0; i < n; i ++){
		sum += a[i] * b[i];
	}


	cout << sum;
}