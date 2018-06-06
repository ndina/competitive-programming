#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int a[m];
	for(int i = 0; i < m; i ++){
		cin >> a[i];
	}
	sort(a,a+m);

	int mini = 200000;

	for(int i = 0; i <= m - n; i++){
		if(a[i + n - 1] -a[i] < mini){
			mini = a[i + n - 1] -a[i];
		}
	}
	cout << mini;
	return 0;
}