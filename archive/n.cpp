#include <iostream>

using namespace std;

int main(){
	string s;

	cin >> s;

	int cnt = 0;

	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 65 && s[i] <= 90){
			cnt++;
		}
	} 

	if(cnt == s.size()){
		for(int i = 0; i < s.size(); i++){
			s[i] += 32;
		}
	}

	else if(s[0] >= 97 && s[0] <= 122 && cnt == s.size()-1){
		s[0] -= 32;

		for(int i = 1; i < s.size(); i++){
			s[i] += 32;
		}
	}
	cout << s;
}