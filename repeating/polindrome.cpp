#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt = 0;
    bool ok = true;
	for(int i = 0; i < s.length()/2; i++){
		if(s[i] != s[(s.length() - 1) - i]){
			//cnt++;
		   ok = false;

		}
	}

	if(ok == true){
		cout << "yes";

	}
	else{
		cout <<"no";
	}
	
	//cout << cnt;
}