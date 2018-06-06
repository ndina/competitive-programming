#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int n, cnt1 = 0, cnt2 = 0;
	cin >> n;

	int a[n][n];

	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			if(i == j){
				cnt1+=a[i][j];
			}

		}
	}
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			if((i + j) == (n - 1) )
			{
				cnt2 += a[i][j];
				//cout << i << " " << j << endl;

				//cout << " fghf" << a[i][j] << endl;
			}
		}
	}
	//cout << n - 1;
//cout << cnt1 << " " << cnt2;
 cout <<abs(cnt1 - cnt2);
}