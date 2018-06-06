#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b, n, sum = 0;

	cin >> a >> b;

	for(int i = 0; i < 10; i++){
		cin >> n;
      sum += n*20;

	}

	if(b - sum <= a){
		cout << "Dirty debug";
	}
	else{
        cout << "No chance.";
	}
}