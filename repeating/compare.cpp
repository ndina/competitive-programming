#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool Compare(string s1, string s2){
	if(s1 != s2){
        return false;
	}

	return true;
}

int main(){
	string s1, s2;

	cin >> s1 >> s2;

	if(Compare(s1,s2)){
		cout << "yes";
	}
	else {
		cout << "no";
	}

	return 0;
}