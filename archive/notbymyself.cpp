#include <iostream>
using namespace  std;

int main(){
	int n;

	cin >> n;

	string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    
    while(n > 5){
    	n = n/2 - 2;


    }	
    cout << names[n - 1];
}