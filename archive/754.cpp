#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n = 3, maxi = 0;
	bool ok;
    int a[n];

    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }

     for(int i = 0; i < n; i++){
    	if(a[i] > 727 || a[i] < 94){
    		ok = false;

    	}
    	else{
    		ok = true;
    		maxi = max(maxi, a[i]);
    	}
    }

    if(ok == false){
    	cout << "Error";
    	//break;
    }
    else{
    	cout << maxi;
    }

    return 0;

}