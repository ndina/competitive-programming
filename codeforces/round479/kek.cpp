#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){
	long int a, b;
	cin >> a >> b;


	while(b  > 0){
		if(a % 10 != 0){
			a -= 1;
			//cout << a << endl;
		}
		else{
			a = (a / 10) ;
			//cout << "second" << endl << a << endl;
		}
		b--;
	}

	cout << a;
    
	//cout << b;4

	

}