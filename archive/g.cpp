// #include <iostream>

// #include <cmath>

// using namespace std;

// // int main(){

// // 	string s;

// // 	// stringstream ss;

// // 	int t, cnt = 0;

// // 	cin >> s;

	

// // 	for(int i = 1; i <= s.size(); i++){
// // 		if(s[i] == s[i-1]){
// // 			cnt++;
// // 		}
// // 	}

// // 	if(cnt >= 7){
// // 		cout <<"YES";
// // 	}

// // 	else {
// // 		cout <<"NO";
// // 	}
// // }

// int main(){

// 	string s;

// 	cin >> s;

// 	int cnt1 = 0, cnt2 = 0;

// 	for(int i = 0; i < s.size(); i ++){
// 		if(s[i] == s[i+1] && s[i] == 1){
// 			cnt1 ++;
// 		} 
// 	}

// 	for(int i = 0; i < s.size(); i++){
// 		if(s[i] == s[i+1] && s[i] == 0){
// 			cnt2 ++;
// 		}
		
// 	}

// 	if(cnt1 > 6 || cnt2 > 6){
// 		cout << "YES";
// 	}
// 	else {
// 		cout <<"NO";
// 	}

// // 	return 0;
// // }
// #include <iostream>

// #include <cmath>

// using namespace std;

// int main(){

// 	string s;

// 	// stringstream ss;

// 	int t, cnt = 0;

// 	cin >> s;

	

// 	for(int i = 0; i < s.size(); i++){
// 		if(s[i] == s[i+1]){
// 			cnt++;
// 		}
// 	}

// 	if(cnt >= 7){
// 		cout <<"YES";
// 	}

// 	else {
// 		cout <<"NO";

// 	}

// }

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string s;

	cin >> s;

	int cnt1 = 0, cnt2 = 0, kek = 0;

	for(int i = 0; i < s.size(); i ++){
		if(s[i] == '1'){
			cnt1 ++;
			cnt2 = 0;
		}

		else if(s[i] == '0') {
			cnt2++;
			cnt1 = 0;
		}
	

	if(cnt1 >= 7 || cnt2 >= 7){
		kek = 1;
		cout <<"YES";
		break;
	}

}

	if(kek == 0)
		cout << "NO";
	
}