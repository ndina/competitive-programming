#include <iostream>
#include <cmath>
#include <map>

using namespace std;

map <int, int> m;

int main(){
	int n, mini = 1000;

	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
		m[a[i]]++;

		mini = min(mini, m[a[i]]);
	}

	map<int, int>::iterator it;

	for(it = m.begin(); it != m.end(); it++){
		if((*it).second == mini){
			cout << (*it).first << " ";
			//break;
		}
	}
}