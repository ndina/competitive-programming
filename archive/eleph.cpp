#include <iostream>
using namespace std;
int main(){
	int k; 
	cin >> k;

	int t = k /5;
	k = k % 5;
	if(k > 0){
		t ++;
	}

	cout << t;
}