#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> v;
int main(){
	int x;

	int kek = 0;

	while(cin >> x){
		if(x != 0){
			v.push_back(x);
			kek++;
		}

		else{
			break;
		}
	}

for(int i = kek/2 - 1; i >= 0; --i){
	cout << v[i] << " ";
}

for(int i = kek - 1; i >= kek /2; --i){
	cout  <<v[i] << " ";
}
}