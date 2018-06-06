#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int cnt = 0;
	string s;
	getline(cin,s);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'a' || s[i] == 'd' || s[i] == 'g' || s[i] == 'j' || s[i] == 'm'  || s[i] == 'p' || s[i] == 's' || s[i] == 'v'  || s[i] == 'y'  || s[i] == '.'  || s[i] == ' '){
			cnt += 1;
		}
		if(s[i] == 'b'  || s[i] == 'e' || s[i] == 'h' || s[i] == 'k' || s[i] == 'n' || s[i] == 'q' || s[i] == 't' || s[i] == 'w' || s[i] == 'z' || s[i] == ','){
			cnt += 2;
		}
		if(s[i] == 'c' || s[i] == 'f' || s[i] == 'i' || s[i] == 'l' || s[i] == 'o' || s[i] == 'r' || s[i] == 'u' || s[i] == 'x' || s[i] == '!'){
			cnt += 3;
		}
	}

	cout << cnt;
}