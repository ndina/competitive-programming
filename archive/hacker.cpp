#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<char> v;

int main(){

	int n;

	char c;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> c;
       v.push_back(c);

	}

	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i];
	}
}