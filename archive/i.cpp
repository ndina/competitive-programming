#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string s1, s2;

	cin >> s1 >> s2;

	int cnt1 = 0, cnt2 = 0;

// 	for(int i = 0; i < s1.size(); i++){
// 		if(s1[i] >= 65 && s1[i] <= 90){
// 			s1[i] += 32;
// 		}
// 	}

// 	for(int i = 0; i < s2.size(); i++){
// 		if(s2[i] >= 65 && s2[i] <= 90){
// 			s2[i] += 32;
// 		}
// 	}

// 	for(int i = 0; i < s1.size(); i ++){
// 		cnt1 += int(s1[i]);
// 	}

//     for(int i = 0; i < s2.size(); i++){
//     	cnt2 += int(s2[i]);
//     }

//     if(cnt1 == cnt2){
//     	cout << 0;
//     }

//     else if(cnt1 > cnt2){
//     	cout << 1;
//     }

//     else if(cnt2 > cnt1){
//     	cout << -1;
//     }

//     return 0;
// }

	for( int i = 0; i < s1.size(); i++){
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
	}

	if(s1 < s2){
		cout << -1;
	}

	else if(s2 < s1){
		cout << 1;
	}
	else {
		cout << 0;
	}

}