#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//vector <int> v;
int main(){
	string s;
	getline(cin,s);
	int cnt = 0;
    
    
	/*for(int i = 0; i < s.size();  i++){
		if(s[i] >= 'a' and s[i] <= 'z'){
			v.push_back(s[i]);

		}
	}

	for(int i = 1; i <= v.size(); i ++){
		if(s[i] != s[i+1]){
			cnt++;
		}
	}
	cout << cnt;
	*/
	sort(s.begin(), s.end());

	for(int i = 0; i < s.size(); i ++){
		if(s[i] >='a' && s[i] <= 'z'){
			if(s[i] != s[i+1]){
				cnt++;
			}
		}
	}
	cout << cnt;
}