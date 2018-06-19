#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector <int> v;
int main(){
	int n, ans, maxi = - 1, sum = 0, m = 0;

	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
    }

    for(int i = 0; i < n; i++){
		while(i <= 3){
			sum +=a[i];
			i++;
		}
   }
    cout << endl;
    cout << sum;
}