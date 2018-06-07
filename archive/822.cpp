#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x1, y1, x2, y2, x3, y3;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	int ans;

	ans = 1/2 * abs((x1-x3)*(y2 - y3) - (y1 - y3)*(x2 - x3));

    cout << ans;

    return 0;	
}