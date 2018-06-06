#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long int  a, b, c;
	cin >> a >> b >> c;

	cout << 2*(a*b + b*c + a*c) << " " << a*b*c;

	return 0;
}