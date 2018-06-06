#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	string s;

	cin >> s;

	string rever = s;

	reverse(rever.begin(), rever.end());
  
    int cnt = 0;

    for(int i = 0; i < s.size() - 1; i++){
    	if(s[i] == s[i + 1]){
    		cnt++;
    	}
    }

    if(cnt == s.size() - 1){
    	cout << 0;
    	return 0;
    }

    if(s != rever){
    	cout << s.size();
    }

    else{
    	cout << s.size() - 1;
    }

}