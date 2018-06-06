#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>


using namespace std;

int main(){

	int n;
	string s;
	cin >> n >> s;

	int maxi = 0;
	string ans;

	for(int i = 0; i < n -1; i++){
		int cnt = 0;

		for(int j = 0; j < n - 1; j++){
			if(s[j] == s[i] && s[j + 1] == s[i+1]){
				cnt++;
			}
		}
		if(maxi < cnt){
			maxi = cnt;
          // cout << string(1, s[i]);
			ans = string(1, s[i]) + string(1, s[i+1]);
		}
	}

	cout << ans;

	return 0;
}