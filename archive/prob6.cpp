#include <iostream>
#include <cmath>
using namespace std;
int Square(int a){
 return a * a;
}
int main(){
	long int n, s1 = 0, s2 =0, dif;
	cin >> n;
	for(int i = 1; i <=n; i++){
		s1 += Square(i);
	}

	for(int i = 1; i<=n; i++){
		s2 += i;
	}
    
    dif = s2 * s2 - s1;

    cout << dif;


}