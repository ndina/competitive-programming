#include <iostream>
#include <set>

using namespace std;

int main(){
	int x;
	set <int> s;

	while(cin >> x){
		s.insert(x);
	}

	cout << s.size();

	return 0;
}