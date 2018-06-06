#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int n, cnt = 0;

	if(cnt > 0){
		cin >> n;

		cnt ++;
	}
     
    for(int i = cnt; i >= 0; i--)
    	printf("%.4f", sqrt(n));
    cout << "/n";
    
}