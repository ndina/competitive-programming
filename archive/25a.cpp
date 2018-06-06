#include <iostream>
using namespace std;
int main(){
	int n, cnt1 = 0, cnt2 = 0, x, y;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			cnt1++;
			x = i;
		}
		else{
			cnt2++;
			y = i;
		}
	}

	
		if(cnt1 == 1){
			cout << x + 1;
		}
		else if(cnt2 == 1){
			cout << y + 1;
		}
	
}