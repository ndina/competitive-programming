#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, m, res, res1, res3;

	cin >> n >> m;

	int a, b ,c;

	cin >> a >> b >> c;

    // a *= 2;

    // b = b * (n - (n - 1)) * (m - (m - 1));

    // c *= 3;

    res = (n - a*2);
    res1 =  ((n - b)+(m - b));
    res3 = (m - c*3);

    cout << abs(res-res1-res3);
}