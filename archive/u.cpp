#include <iostream>
using namespace std;
int main(){
	int n, a, b, cnt= 0;

	cin >> n;

	for(int i = 0; i < n; i ++){
		cin >> a >> b;

		if(b-a >= 2)
			cnt++;
	}
	cout  << cnt;
}