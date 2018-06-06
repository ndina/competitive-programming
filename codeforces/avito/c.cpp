#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n, cnt = 0;

	cin >> n;

	int a[n];

	for(int i = 0; i < n / 2; i++){
		cin >> a[i];
    }
    for(int i = 0; i < n / 2; i++){
    	for(int j = 1; j <= n/2; j++){
    		if(a[i] + 1 == a[j]){
    			cnt++;
    		}
    	}
    }

    cout << cnt * 2;
}