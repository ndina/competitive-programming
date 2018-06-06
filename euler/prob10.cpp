#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool Isprime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if( n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
   
   unsigned long long  n, sum = 0;

   cin >> n;

   for(int i = 2; i < n; i++){
   	if(Isprime(i)){
   		//cout << i << endl;
   		sum += i;
   	}
   }

   cout << sum;
}