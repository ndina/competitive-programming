#include <iostream>
using namespace std;
int main(){
	int n, m, i , j, c;

	cin >> n >> m >> i >> j >> c;

	if(n  * m % 2 == 0){
		cout << "equal";
	}
	else if( (i + j + c) % 2 == 0){
		cout << "black";
	}
	else{
		cout <<"white";
	}
	/*
	else{
		if(i == j){
			if(c == 1){
				cout << "white";
				return 0;
							}
			else{
				cout <<"black";
return 0;			}
		}
		else{
			if(c == 0){
				cout << "white";
return 0;			}
			else{
				cout <<"black";
return 0;			}
		}
	}
	т}