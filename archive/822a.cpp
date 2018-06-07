#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long int  x1, y1, x2, y2, x3, y3;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    double ans;

    ans = abs( (x1-x3)*(y2 - y3)-(y1 - y3)*(x2 - x3)) / 2 ;
    cout <<ans;

    //cout << endl;
   
    return 0;

}