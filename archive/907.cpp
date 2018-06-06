
#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

int main(){
	int a, b, c;

	cin >> a >> b >> c;

	if( a * b > PI * c * c){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}