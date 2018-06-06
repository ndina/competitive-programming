#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b;

	cin >> a >>b;


   if(a == b){
   	cout << 1 << " " << b;
   }
   else{
	cout << (b  - 1)/ a + 1 << " " << (b - 1) % a + 1;
}
}