#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int n, k, cnt = 0, i;
    int a[n];
	cin >> n >> k;


	for(i = 0; i < n; i++){
		
			cin >> a[i];
	    
	}
	
    for(i = 0; i < n; i ++){
    	for(int j = 0; j < 20000; j++){
    		if(a[i] <= j){
    			cnt++;
    		}
    	}
    }
	
	if(cnt == k){
		cout << i;
	}
	else{
		cout << -1;
	}
	
	return 0;
}