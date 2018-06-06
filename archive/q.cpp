#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string s;
	string s1 = "hello";
	while(cin >> s){
		int sum = 0, j = 0, k = 0;
		for(int i = 0; i < s.size(); i++)
			if(s[i] == s1[j]){
				sum++;
				j++;
			}
			if(sum == 5)
				cout << "YES" << endl;
			else 
				cout << "NO" << endl;
		}
	}
