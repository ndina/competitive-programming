#include <iostream>
#include <set>
using namespace std;
set <int> m;
int main(){
    
	int a[5];

	for(int i = 0; i < 4; i++){
		cin >> a[i];
		m.insert(a[i]);
	}

	cout << 4 - m.size();
}