#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;

bool IsDigit(char c){
	if(int(c) >= 48 && int(c) <= 57){
		return true;
	}

	return false;
}

int main(){

	char c;

	cin >> c;

	if(IsDigit(c)){
		cout << "yes";
	}

	else{
		cout <<"no";
	}

	return 0;

}