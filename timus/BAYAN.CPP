#include <iostream>
#include <string>
#include <set>


using namespace std;

int main(){
	int n , cnt = 0;

	set<string> s;

	string shop;
    
     cin >> n;
	for(int i = 0; i <= n; i++){
		getline(cin, shop);

		if(s.count(shop) > 0){
			cnt++;
		}
		else{
			s.insert(shop);
		}
	}

	cout << cnt;

	return 0;
}