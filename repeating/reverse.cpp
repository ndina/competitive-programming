#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> v;

int main(){
	int n,x ;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> x;
		v.push_back(x);

	}

	reverse(v.begin(), v.end());

	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
}