#include <iostream>
#include <cmath>
using namespace std;
int main(){

	int x1, y1, x2, y2, k = 0;

	cin >> x1 >> y1 >> x2 >> y2;

	if((x1 + y1) %  2 == 0 && (x2 + y2) %  2 == 0 ){
		k = 1;
	}
	if((x1 + y1) %  2 != 0 && (x2 + y2) %  2 != 0){
		k  = 1;
	}
    if(k == 1){
    	cout <<"YES";
    }
    else{
    	cout <<"NO";
    }

}