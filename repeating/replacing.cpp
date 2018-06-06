#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s;
	getline(cin,s);

	string s1, s2;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == ' '){
			s1 = s.substr(0, i);
			s2 = (i + 1, s.size() - 1 - i);
		}
	}

	cout << s2 << " " << s1;
}