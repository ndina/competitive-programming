#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	int n, k, maxi = 0, cnt = 0;

	cin >> n;
	int a[102][102];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 2; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 2; j++){
        
           if(a[i][1] == 1){
        	  if(a[i][0] > maxi){
        		maxi = a[i][0];
                k = i;
        	  }
            }

		}
	}

	if(maxi == 0){
		cout << -1;
	}
	else {
		cout << k + 1;
	}
}