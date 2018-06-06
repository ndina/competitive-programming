#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n, k, ans, cnt = 0;

    int a[n];

    cin >> n >> k;

    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }

    sort(a, a + n);
    for(int i = 0; i < n; i ++){

        if(k == 0){

    	ans = a[0] - 1;

        }
        else{
        	ans = a[k - 1];
        }
    }

    for(int i = 0; i < n; i ++){
    	if(a[i] <= ans){
    		cnt++;
    	}
    }

    if(cnt != k){
    	cout << -1;
    }
    else{
    	cout << ans;
    }


	return 0;
}