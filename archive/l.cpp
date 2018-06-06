#include <iostream>
#include <cmath>

using namespace std;



int main(){

	string s;

	cin >> s;

	for(int i = 0; i < s.size(); i++){
		if(s[0] >= 97 && s[0] <= 122){
			s[0] -= 32;
		}

		
	}

	cout << s;


}