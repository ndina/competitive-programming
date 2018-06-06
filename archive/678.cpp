#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string s;
	cin >> s;
	int a = 1, b = 0, c = 0;
	//s[0] = 1;
	for(int i = 0 ; i < s.size(); i++){
      if(s[i] == 'A'){
      	if(a == 1){
      		a = 0;
      		b = 1;
      	}
      	else if(b == 1){
      		a = 1;
      		b = 0;
      	}
      	else{
      		continue;
      	}
      }
      if(s[i] == 'B'){
        if(c == 1){
        	c = 0;
        	b = 1;
        }
        else if(b == 1){
        	c = 1;
        	b = 0;
        }
        else{
        	continue;
        }
      }
      if(s[i] == 'C'){
      	if(a == 1){
      		c = 1;
      		a = 0;
      	}
      	else if(c == 1){
      		c = 0;
      		a = 1;
      	}
      }
	}

	if(a == 1){
		cout << 1;
	}
	else if(c == 1){
		cout << 3;
	}
	else if(b == 1){
		cout << 2;
	}
}