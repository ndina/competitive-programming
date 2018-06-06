#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n; 
	string s;

	cin >> n >> s;

	for(int i = 0; i <= s.size(); i++){
		if(i == n - 1){
			s.erase(i, 1);
		}
	}

	cout << s;
}