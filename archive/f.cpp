#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;

	cin >> n;

	string s;

	int ans = 0,sna = 0;

	for(int i = 0; i < n; i++){
		cin >> s; 
	

	if(s == "++X" || s == "X++" || s == "++x" || s == "x++"){
		ans ++;
	}
	
    if(s == "X--" || s =="--X" || s == "--x" || s == "x--"){
		sna ++;
    }
	
}
	cout << ans - sna;
}