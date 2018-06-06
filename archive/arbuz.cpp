#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if(n == 2){
		cout << "NO";
		return 0;
	}
	else if ( n % 2 == 0)
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}