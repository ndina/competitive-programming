#include <iostream>
#include <algorithm>
using namespace std;
// int main(){
// 	string a,b;
// 	int k = 0;
// 	cin >> a  >> b;

// 	for(int i = 0; i < a.size(); i++)
// 	for(int j = 0; j < b.size(); j++){
// 		if(a[i] == b[b.size()-1-j]){
// 			k = 1;
// 		}
// 	}
// 	if(k == 1){
// 		cout <<"YES";
// 	}
// 	else {
// 		cout << "NO";
// 	}
// }
int main(){
	string a, b;
	cin >> a >> b;
    reverse(b.begin(),b.end());
    if(a == b){
    	cout <<"YES";
    }
    else {
    	cout << "NO";
    }
}