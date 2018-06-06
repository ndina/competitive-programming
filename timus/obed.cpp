#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	string s;
	int cnt = 2;
	cin>> n;

	for(int i = 0; i < n; i ++){
		cin >> s;
		 for(int j = 0; j < s.size(); j++){
	    if(s[j] == '+'){
     		cnt += 1;
     		
		}
	}

    }
   
    if((cnt + n) == 13){
    	cout << (cnt + n + 1) * 100;
    }
    else{
    	cout << (cnt + n) * 100;
    }
	
}