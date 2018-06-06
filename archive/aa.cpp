#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;

	string a = "I hate ";
	string b = "it ";
	string c = "that ";
	string d = "I love ";
	string ss = "";
     
    cout << a;
	for(int i = 1; i < n; i++){
		cout <<c;  

		if(i % 2 != 0){
			cout << d;
		}
		if(i % 2 == 0){
			cout << a;
		}

	}
	cout << b;
	return 0;
}