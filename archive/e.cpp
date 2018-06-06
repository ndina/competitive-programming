#include <iostream>
#include <cmath>

using namespace std;

// int main(){
// 	int a, b[1000][3], c = 0, d = 0;

// 	cin >> a;

// 	for(int i = 0; i < a; i++){
// 		for(int j = 0; j < 3; j++){
// 			cin >> b[i][j];
// 			c += b[i][j];
// 		}

// 		if(c >= 2){
// 			d++;
// 		}

// 		c = 0;
// 	}

// 	cout << d;
// 	return 0;
// }

int main(){
	int n, ans = 0, cnt = 0;

	cin >> n;

	int a,b,c;

	for(int i = 0; i < n; i++){
		cin >> a >> b >> c;

		if(a + b + c > 1)

			cnt ++;

	}

cout << cnt;
}