#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){

	int n, sum = 0, max = 0;

	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];

		if(a[i] > max){
			max = a[i];
		}

		sum += a[i];
	}




cout << sum + max;
   


}