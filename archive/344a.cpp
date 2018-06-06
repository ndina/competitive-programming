#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	int a[n], k = 0;

	for(int i = 1; i <= n; i ++){
		cin >>  a[i];

		if(a[i] != a[i-1]){
			k++;
		}
	}

	cout << k ;


}