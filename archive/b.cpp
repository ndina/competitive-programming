#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;

	cin >> n;

	int cnt = 0;

	for( int i = 0; i <= n; i ++){
		if(i % 2 == 0){
			cnt ++;
		}
	}

	if(cnt >= 2)
		cout << "YES";
	else cout << "N0";
}