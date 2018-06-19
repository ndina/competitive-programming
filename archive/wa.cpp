#include <iostream>

using namespace std;

int main(){

	int n, sum1 = 0, maxi = 0, sum2 = 0, sum3 = 0;

	cin >> n;
  
    int a[n + 2];

    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }

    for(int i = 1; i < n - 1; i ++){
    	sum1 = a[i - 1] + a[i] + a[i + 1];
        sum2 = a[n - 1] + a[n - 2] + a[0];
        sum3 = a[n - 1] + a[0] + a[1];

        if(sum1 > maxi){
        	maxi = sum1;
        }
         if(sum2 > maxi){
        	maxi = sum2;
        }
         if(sum3 > maxi){
        	maxi = sum3;
        }
    }

    cout << maxi;
  //  cout << sum1;
}