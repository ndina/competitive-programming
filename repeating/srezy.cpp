#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string s;

	cin >> s;

	/*for(int i = 0; i < s.size(); i++){
		cout << s[2]<< endl;
	}
	for(int i = 0; i < s.size(); i++){
		cout << s[s.size() - 2]<< endl;
	}
	*/
	cout << s[2] << endl << s[s.size() - 2]<< endl;
	
	for(int i = 0; i < 5; i++){
		cout << s[i];
	}
	cout << endl;

	for(int i = 0; i < s.size() - 2; i++){
		cout << s[i];
	}
	cout << endl;
	for(int i = 0; i <= s.size(); i+=2){
		//if(s[i] % 2 == 0)
		{
			cout << s[i];
		}
	}
	cout << endl;
	for(int i = 1; i <= s.size(); i+=2){
        cout << s[i];
	}

	cout << endl;

	for(int i = s.size() - 1; i >= 0; i--){
		cout << s[i];
	}
	cout << endl;
    

	for(int i = s.size() - 1; i >= 0; i -= 2){
		cout << s[i];
	}
	cout << endl;

	cout << s.size() << endl;

	return 0;
}