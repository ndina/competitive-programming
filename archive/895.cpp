#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int n = 9, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5= 0, cnt6  =0, cnt7 = 0, cnt8 = 0, cnt9 = 0, cnt10 = 0, cnt11 = 0, cnt12 = 0, cnt13 = 0, cnt14 = 0;

	int a[n][n];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j && i == 'X'){
				cnt1++;
			}
			if( i + j == n - 1 && a[0][2] == 'X')
			{
				cnt2++;
			}
			if(a[0][j] == 'O'){
				cnt3++;
			}
			if(a[0][j] == 'X'){
				cnt4++;
			}
			if(a[1][j] == 'O'){
				cnt5++;
			}
			if(a[1][j] == 'X'){
				cnt6++;
			}
			if(a[2][j] == 'O'){
				cnt7++;
			}
			if(a[2][j] == 'X'){
				cnt8++;
			}
			if(a[i][0] == 'O'){
				cnt9++;
			}
			if(a[i][0] == 'X'){
				cnt10++;
			}
			if(a[i][1] == 'O'){
				cnt11++;
			}
			if(a[i][1] == 'X'){
				cnt12++;
			}
			if(a[i][2] == 'O'){
				cnt13++;
			}
			if(a[i][2] == 'X'){
				cnt14++;
			}

		}


	}
if(cnt1 == 3 || cnt2 == 3 || cnt4 == 3 || cnt6 == 6 || cnt8 == 3 || cnt10 == 3 || cnt12 == 3 || cnt14 == 3){
 cout << "Win";
}
else if(cnt3 == 3 || cnt5 == 3 || cnt7 == 3 || cnt9 == 6 || cnt11 == 3 || cnt13 == 3){
	cout << "Lose";
}
else{
	cout <<"Draw";
}



}