#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;

int main(){
	char c;

	cin >> c;

	if(char(c) >= 'a' && char(c) <= 'z'){
		cout << char(c - 32);
	}

	else if(char(c) >= 'A' && char(c) <= 'Z'){
		cout << char(c +32);
	}

	else {
		cout << c;
	}
  return 0;

}