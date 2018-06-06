#include <iostream>
using namespace std;

int main(){
	string s ;

	int cnt1 = 0, cnt2 = 0;

	cin >> s;

	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'A' and s[i] <= 'Z'){
			cnt1 ++;
		}
		else {
			cnt2 ++;
		}
	}
	for(int i = 0; i < s.size(); i++){
		if(cnt1 == cnt2){
			if(s[i] >= 'A' and s[i] <= 'Z'){
				s[i] += 32;
			}
		}
		else if(cnt1 > cnt2){
			if(s[i] >= 'a' and s[i] <= 'z'){
				s[i] -= 32;
			}
		}
		else if(cnt2 > cnt1){
			if(s[i] >= 'A' and s[i] <= 'Z')
			s[i] += 32;
		}
	}

	cout << s;

	return 0;
}