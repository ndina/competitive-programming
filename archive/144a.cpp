#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n, x, index1, index2;
	int mini = 100000, maxi = -1;
	cin >> n;
	int a[n];
    
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mini = min(a[i], mini);
		if(a[i] == mini){
			index1 = i;
		}
		maxi = max(a[i], maxi);
		if(a[i] == maxi){
			index2 = i;
		}
	}
	if(index1 > index2){
		cout << (n - 1) - index1 + index2 - 1;
	}
	else{
		cout << (n -1) - index1 + index2;
	}



	return 0;

}