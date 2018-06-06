#include <iostream>
#include <cmath>


using namespace std;

int main(){

	int k, cnt = 0, a, mini = 1000;

	cin >> k;

	for(int i = k + 1; i < 24; i++){
		for(int j = 2; j <= sqrt(i); j++){
			if(i % j == 0){
				//cnt++;
				//a = i;
				cout << i;
				//mini = min(i, mini);
			}
		}
	}
	/*if(cnt == 1){
		cout << a;
	}
	*/
}