#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a[100][100], cnt = 0;

	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 1; i <= 5; i ++){
		for(int j = 1; j <= 5; j++){
			if(a[i][j] == 1){
				cnt = cnt + abs(3 - i) + abs(3 - j);
				
			}
		}
	}

	cout << cnt;
	return 0;
}