#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	string s += "#";
	getline(cin,s);
	int cnt = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == ' '){
			cnt++;
		}
	}

	cout << cnt ;

	return 0;
}