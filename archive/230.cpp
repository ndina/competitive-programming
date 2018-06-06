#include <iostream>
using namespace std;
int main(){
	int s, n, x, y, cnt = 0;
	cin >> s >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
		if(s > a[i]){
			s += b[i];
			cnt++;
		}

	}
	if(cnt == n){
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}