#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, k, sum = 0, kek;

	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	cin >> k;

	for(int i = 0; i < n; i++){
		if(a[i] <= k){
			sum+=a[i];
		}
		else{
            kek = a[i] - k;

            sum += a[i] - kek;
		}
	}

	cout<< sum;
}