#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long a, b;

cin >> a >> b;
	/*int mini , ans1, ans2;

	mini = min(a, b);

	if(a % 2 == 0){
		ans1 = a / 2;
	}
	if(b % 2 == 0){
		ans2 = b / 2;
	}
	if(a % 2 != 0){
		ans1  = a / 2 + 1;
	}
	if(b % 2 != 0){
		ans2 = b / 2 + 1;
	}

	int minni = min(ans1, ans2);

	cout << minni << " " << mini;

	return 0;
	*/
 cout << ceil(max(a,b) / 2) << " " << ceil(min(a, b));

 return 0;

}