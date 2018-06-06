#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, c, d;

	cin >> a >> b >> c >> d;
    
   // if(d ==  0){
    //	cout << 0;
    //}
	else if( d <= a){
		cout << a * b;
	}
	else{
		cout << a * b + (d - a) * c;
	}

	return 0;
}