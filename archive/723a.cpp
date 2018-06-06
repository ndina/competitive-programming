#include <iostream>
#include <algotrithm>
using namespace std;
int main(){
	int a[4];

	cin >> a[1] >> a[2] >> a[3];

	sort(a, a+3);

	cout << a[3] - a[1];
}