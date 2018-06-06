#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n, m, a, b, cnt = 0, substr;
	cin >> n >> m >> a >> b;
    
    
	while(substr > 0){
		substr = n / m;
		cnt++;
	}
     

	cout << cnt * b + (n - cnt * m) * a;

	return 0;
}