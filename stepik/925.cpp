#include <iostream>
using namespace std;
int main(){
	int m, n, a, b, c;

	cin >> m >> n >> a >> b >>c;

	int mini = min(min(a,b), c);
     
    if(mini == 1){
    	cout << 1;
    }
    else{
	if(m == 2){
		cout << mini;
	}
	else{
		cout << mini - 1;
	}}
}