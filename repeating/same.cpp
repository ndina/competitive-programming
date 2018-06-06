#include <iostream>
#include <set>
#include <sstream>


using namespace std;

set <int> a;
set <int> b;
set <int> c;


int main(){
	string a;
	stringstream ss1, ss2;
	int x;

	getline(cin, a);

	ss1<<a;

	while(ss1 >> x){
		a.insert(x);
	}

	getline(cin, a);

	ss2<<a;

	while(ss2 >> x){
		b.insert(x);
	}

	set <int>::iterator it;

	for(it = a.begin(); it != a.end(); it++){
		if(b.find(*it) != b.end()){
			c.insert(*it);
		}
	}

	for(it = c.begin(); it != c.end(); it++){
		cout << *it << " ";


	}

	return 0;
}