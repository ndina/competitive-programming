#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
/*
bool prime(long long b){
	for(int i = 2; i <= sqrt(b); i++){
		if(b % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	long long int n, t, max = 0;
	cin >> n;
	for(int i = 2; i < n; i++){
		if(prime && n % i == 0){
			t = i;
			n = n / i;
			if(t > max){
				max = t;
			}
		}
	}
	cout << max;
}

int main(){
	int n, b = 2, max = 0;
	cin >> n;
	while(n > 1){
      if(n % b == 0){
      	n = n / b;
      	if(n >= max)
      	n = max;
      }
      else {
      	n = n / (b + 1);
      	if(n >= max)
      	n = max;
	  }
    }
	cout << max;
}
*/
int main(){
	long long int n, b = 2;
	cin >> n;
	int max = 0;
	for(int i = 2; n!=1; i++){
		while(n % i == 0){
			n = n / i;
			max = i;
		}
	}
	cout << max;
}