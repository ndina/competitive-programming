#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool IsPoli(string n){
	int s = n.size() - 1;

	for(int i = 0; i<n.size()/2; i++){
		if(n[i] == n[s]){
			return true;
		}
	}
	return false;

}
int main(){
	string o;
	string m;
	//cin >> o;
	for(int i = 100; i <= 999; i++){
		for(int j = 100; j <= 999; j++){
			for(int k = 100; k <= 999; k++){
				m = i * j * k;
			}
		}
	}

	if(IsPoli(m)){
		cout << m;
	}

}