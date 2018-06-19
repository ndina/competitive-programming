#include <iostream>
using namespace std;
int main(){
	double  n, a, b;
	double x, y;
	cin >> n >>a >> b >> x>> y;

    //cout << n / 10 << endl;

    if(n > a && n > b){
    	double maxi = max(a, b);
    	//cout << n -  n * maxi / 100;
    	if(maxi == a){
    		cout <<n -  n * x / 100;
    	}
    	else{
    		cout <<n -  n * y / 100;
    	}
    	return 0;
    }
	if(n > a){
		cout <<n -  n * x / 100;
		return 0;
	}
	if(n > b){
		cout <<n -  n * y / 100;
		return 0;
	}
	else {
		cout << n;
	}

	return 0;
}