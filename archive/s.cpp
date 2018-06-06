#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	string a;
	getline(cin,a);
	sort(a.begin(),a.end());
	int cnt = 0;
	for(int i = 0; i < a.size(); i++ ){
		if(a[i] != a[i+1]){
			cnt++;
		}
	}
	if(cnt % 2 == 0){
		cout << "CHAT WITH HER!";
	}
	else {
		cout <<"IGNORE HIM!";
	}
}