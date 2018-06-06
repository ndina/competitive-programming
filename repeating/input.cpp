#include <iostream>
#include <set>

using namespace std;

set <string> s;

int main(){

	string a;

	while(cin >> a){
		s.insert(a);
	}


	cout << s.size();
}