#include <iostream>
using namespace std;
int main(){
	int a, b, box[1000], k;
	cin >> a >> b;

	int c[a], d[1000];


	for(int i = 1; i < a; i ++){
		cin >> c[i];
	    box[i] = i + c[i];
	}
    
    for(int i = 1; i < a; i ++){
    	if(box[i] == b){
    		k = 1;
    	}
    }
    if(k == 1){
    	cout << "YES";
    }
    else {
    	cout << "NO";
    }
   cout << "\n";

}