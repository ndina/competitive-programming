#include <iostream>
using namespace std;

int main(){
	long long n, ans;
	cin >> n;
	long long a[n];
	a[0] = 0;
	a[1] = 1;

	for(int  i = 2; i <= n; i++){
		a[i] = a[i - 1] + a[i-2];
		ans = a[i];
	}

	if(n <= 1){
		cout << n;
	}
	else {
		cout << ans; //% 10;
	}
}