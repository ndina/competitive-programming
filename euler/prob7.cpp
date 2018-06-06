#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool IsPrime(int  n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n, cnt = 0,prime = 0;
	int a[n];
    for(int i = 0; i < 200;i++){
    	cnt++;
    	if(IsPrime(cnt)){
    		prime++;
    	}
    	i+=200;

    }
    if(prime == 1001){
    	cout << cnt;
    }
}