#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;

	cin >> n;

	if((n >= 1 && n < 3) || n == 12){
		cout <<"Winter";
		//break;
	}
	if(n > 2 && n < 6){
		cout << "Spring";
	}
	if(n > 5 && n < 9){
		cout << "Summer";
	}
	if(n >8 && n < 12){
		cout << "Autumn";
	}
	if(n <= 0 || n >= 13){
		cout << "Error";
	}
}