#include <iostream>
#include <cmath>
using namespace std;

void IsPrime(int n){
	for(int i = 2; i <= n; i++){
		int cnt = 0;
		for(int j = 1; j <= i; j++){
			if(i % j){
				cnt ++;
			}
		}
		if(cnt == 2){
			cout << i << " ";
		}
	}
}

int main(){
	int n;
	cin >> n;
	IsPrime(n);

   return 0;
}