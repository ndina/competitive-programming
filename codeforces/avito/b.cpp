#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, cnt = 0;

	cin >> n;

	int a[n][2];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin  >> a[i][j];

			cnt += a[i][j];
		}
	}


}