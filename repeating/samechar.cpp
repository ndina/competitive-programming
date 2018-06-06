#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt = 0, maxx = 0;
	string l = "";

	for(int i = 0; i < s.size(); i++){
		for(int j = i+1; j < s.size(); j++){
			if(s[i] == s[j]){
				
					l = s[i];
				}
			}
		}
	
	cout << l;
}