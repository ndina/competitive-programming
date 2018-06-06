#include <iostream>
using namespace std;
int main(){
	int n, m;

	cin >> n >> m;

	int a[n];

	for(int i = 1; i < n; i ++){
		cin >> a[i];
	} 

	int j = 1;

	while(j < m){
		j += a[j];

		if(j == m){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}