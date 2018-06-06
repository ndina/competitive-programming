#include <iostream>
#include <algorithm>

using namespace std;

unsigned char ToUpper(unsigned char c){
	if(int(c) >= 'a' && int(c) <= 'z'){
		return int(char(c) - 32);
	}
	else
		return c;
}

int main(){

char c;

cin >> c;

cout << ToUpper(c);

}