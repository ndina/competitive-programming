#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){
	int cnt1 = 0, cnt2 = 0, n;

	cin >> n;

	int a[n];

	for(int i = 0; i < n/2; i++){
		cin >> a[i];
	}
    sort(a, a + n/2);

    for(int i = 0; i < n/2; i++){
    	cnt1 += abs(a[i] - (i * 2) - 1);
    	cnt2 += abs(a[i] - (i * 2) - 2);
    }
    cout << min(cnt1, cnt2) << endl;

    return 0;
}