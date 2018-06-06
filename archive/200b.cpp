#include <iostream>
using namespace std;
int main(){
	int n;
	double sum = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i ++){
		cin >> a[i];
		sum += a[i];
	}

	cout << sum / n;
}