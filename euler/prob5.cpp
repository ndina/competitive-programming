#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int i = 2520;
	bool isfound = false;
	while(!isfound){
		i += 2520;
		isfound = true;
		for(int j = 11; j <= 20; j++){
			if(i % j != 0){
				isfound = false;
				break;
			}
		}
		if(isfound){
			isfound = true;
		}
	}
	cout << i;
}