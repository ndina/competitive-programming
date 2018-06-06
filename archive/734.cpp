#include <iostream>
using namespace std;
int main(){
	int n, d= 0, a= 0;
	string s;
	cin >> n >> s;
	for(int i = 0; i < s.size(); i ++){
		if(s[i] == 'D'){
			d++;
		}
		else {
			a++;
		}
	}
	if(d > a){
		cout << "Danik";
		return 0;
	}
	if(d < a){
		cout << "Anton";
		return 0;
	}
	else {
		cout << "Friendship";
		return 0;
	}
}