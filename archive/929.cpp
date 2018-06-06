#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long int n;

	cin >> n;
    
    if(n == 0){
    	cout << 0;

    }
    else{


	if(n > 6){
		if(n % 6 == 0){
			cout << n / 6 << " " << n * 6;
		}
		else{
			cout << n / 6 + (7 - n % 6) << " " << n * 6;
	    }
	}

	else{
		cout << 7 - n << " " << n * 6;
	}
}
}