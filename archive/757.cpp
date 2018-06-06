#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b, c, cnt1 = 0, cnt2 = 0, cnt3 = 0;

	int a1, b1, c1;

	cin >> a >> b >> c;
     
    if(a >= 2 && b >=6 && c >= 1){
    while(cnt1 == cnt2 && cnt2 == cnt3){
    while(a >= 0){
    	a -= 2;
    	cnt1++;
    	cout << "cnt1 " <<cnt1 << " " << endl;
    }
    while( b >= 0){
    	b -= 6;
        cnt2++;
        cout << "cnt2 " << cnt2 << " " << endl;
    }

    while(c >= 0)
    	c -= 1;
        cnt3++;

        cout << "cnt3 " << cnt3  << " " << endl;
    }
    }

    cout << cnt3;

}