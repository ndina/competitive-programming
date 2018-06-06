#include <iostream>

using namespace std;

int main(){
	int n, a, b, max = 0, s = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a >> b;

		s = s + b - a;

		if(s > max){
			max = s;
		}
	}

	cout << max << endl;

	return 0;
}