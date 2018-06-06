#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

vector<int>v;

int main(){

	int n, sum1 = 0;

	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
        sum1 += a[j];
			for(int k = 0; k < n; k++){
			cout << sum1 <<  " ";

		   v.push_back(sum1);
		   cout << v[i] << " ";

		}


		  //  cout << sum1 << endl; 
		}
	}

	for(int i = 0; i < n; i++){
		cout << v[i] << endl;
	}
	//cout << sum1;
}

