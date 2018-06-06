#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main(){

	int n, cnt = 0;
	string s, s1 = "";

	cin >> n >> s;

	for(int i = 0; i < s.length(); i++){
		/*if(s[i] == s[i+1]){
			cnt++;
		}
		*/
        s1[i] = (s[i] + s[i+1]);
          cout << s1[i] << endl;
        for(int j = 0; j <= s.length() - i; j++){
        	if(s1[i] == s1[i + j]){
        	//	cout << s1[i];
        	}
        }

      //  cout << cnt;
	}
}