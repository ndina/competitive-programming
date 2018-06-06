#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s, x, a;

	cin >> s;

	x = s.find("WUB");

	a = s.erase(x);

	cout << a;

	return 0;


}