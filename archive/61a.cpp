#include <iostream>
using namespace std;
int main(){
	/*string a, b;
	int res;
	cin >> a;
	cin >> b;

	for(int i = 0; i < a.size(); i++){
		for(int j = 0; j < b.size(); j++)
			 res = a[i] ^ b[j];
		
	}

	cout << res;
	return 0;
	*/
	string a, b;
	cin >> a >> b;
	for(int i = 0; i < a.size(); i++)
    {
    	if(a[i] != b[i]){
    		cout << 1;

    	}
    	else {
    		cout << 0;
    	}
    }
}