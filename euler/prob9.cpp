#include <iostream>
#include <cmath>

using namespace std;

int main(){
	//int a, b, c;
	int c;

	for(int a = 1; a <= 1000; a++){
		for(int b = 1; b <= 1000; b++ ){
			c = 1000 - a - b;

			if(c > 0){
				if(c * c == a*a + b*b){
					cout <<a << " " << b << endl << c;
					cout << endl << a*b*c;
				}
			}
		}
	}
}