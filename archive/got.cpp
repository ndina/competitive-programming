#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

vector <string> v;
vector <int> vv;

 void func(vector vv){
	for(int i = vv; i >= 0; i--){
       v.push_back(s[i]);
	}
	cout << v[i];
}

int main(){

	int n;

	cin >> n;

	string s;

	cin >> s;
	
	for(int i = 2; i < n; i++){
		if(n % i == 0){
        vv.push_back(i);
		}
	}

	func(vv);
}