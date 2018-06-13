#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n, sum = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
	cin >> n;
    int a[10000][10];
	char s1, s2;

	for(int i = 0; i < n; i++){
		cin >> s1 >> s2;
		if(s1 == '('){
			cnt1++;
		}	
		if(s1 == ')'){
			cnt2++;
		}
		if(s2 == ')'){
			cnt3++;
		}
		if(s2 == '('){
			cnt4++;
		}
	}
     
    /*if(cnt1 == cnt2){
    	sum += cnt1;
    }
    else if(cnt1 != cnt2){
    	sum += min(cnt1, cnt2);
    }
    */

    if(cnt1 == cnt3){
    	sum += cnt3 * cnt3;
    }
    else if(cnt3 != cnt4){
    	sum += min(cnt3, cnt4);
    }

  cout << sum;

  return 0;
	
}