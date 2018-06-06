#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string s;

	getline(cin,s);

	int k = 0;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			k = 1;
		}
	}

	if(k == 1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

	return 0;
}