#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, m, sum1, sum2;

	cin >> n >> m; //1 2
    
    if(n == 0 & m == 0){
    	cout << 0 << " " << 0;
    }
    else if(n == 0){
    	cout <<"Impossible";
    }
    else if(m == 0){
    	cout << n << " " << n;
    }
    else if( m <= n){
    	cout << n << " " << n + m - 1;
    }
    else {
    	cout << m << " " << n + m - 1;
    }
    return 0;
}