#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long a, b, k, ok;

	cin >> a >> b;

	for(int i = 1; i <= a * b; i++){
		if(i * i == a * b){
			k = 1;
			ok = i;
		}
	}

	if(k == 1){
		cout << ok;
	}
	else{
		cout << '0';
	}
//	cout << endl;

	return 0;
}