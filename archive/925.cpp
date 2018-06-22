#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int n, m, a, b, c;
	cin >> m>> n >> a >> b >>c;

	if(m == 2){
		cout << min(min(a,b), c);
	}
	else{
		cout << n - min(n, (n - a) + (n - b) + (n - c));

	}

	return 0;
}