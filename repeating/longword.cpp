#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	string s, l = "", maxx = "";

	getline(cin,s);

	for(int i = 0; i < s.size(); i++){
		if(s[i] == ' '){
			if(l.size() > maxx.size()){
				maxx = l;
				l = "";
			}
		}
		else{
			l += s[i];
			if(i == s.size() - 1){
			if(l.size() > maxx.size()){
				maxx = l;
				l = "";
			}
		}
		}
	}
    cout << maxx << endl << maxx.size();

}