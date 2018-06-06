#include <iostream>
using namespace std;
int main(){
	int n, m, l;
	cin >> n >> m;

	int res = n;

	while(n >= m){

        l = n/m;
		n = l + n%m;

		res += l;
	}

	cout << res;
}