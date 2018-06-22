#include <iostream>
using namespace std;

int main(){
	int n, m, cnt1 = 0, cnt2 = 0;
	cin >> n >> m;

	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < n; i++){
		if(a[i] <= m){
			cnt1++;
		}
		else{
			break;
		}
	}

	for(int i = n - 1; i >= 0; i--){
		if(a[i] <= m){
			cnt2++;
		}
		else{
			break;
		}
	}
    
    if(cnt1 + cnt2 == n * 2){
    	cout << cnt1;
    }
    else {
     cout << cnt1 + cnt2;
    }
	
	return 0;




}