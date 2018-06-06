#include <iostream>

#include <cmath>

using namespace std;

// int main(){
// 	int n, cnt = 0;

// 	cin >> n;

// 	string s;

// 	cin >> s;

// 	for(int i = 0; i < s.size(); i++){

// 		if(s[i] != s[i+1]){
// 			cout <<0;
// 			return 0;
// 		}
// 		if(s[i] == s[i+1]){
// 			cnt++;
// 		}

// 	}
// 	if(cnt > 1){
// 		cout << cnt - 1;
// 		return 0;
// 	}
// }

int main(){
	int n, cnt = 0;

	cin >> n;

	string a;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < n; i++){
		if(a[i] == a[i+1]){
			cnt++;
		}
	}

	cout << cnt;
}