/*#include <iostream>
#include <cmath>

using namespace std;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	long long int n, m, a, b, cnt=0;

	cin >> n >> m >> a >> b;

	if(n % m == 0){
		cout << 0;
		return 0;
	}
	else{
		for(int i = n + 1; i <= 100; i++){
			cnt++;

			if(i % m == 0){
				break;
			}
		}
	}

	//cout << (m - n) * a << endl;
  
   //cout <<  (m-(n%m))<< endl;

    
    /*if(n > m){

           if(cnt * a >= abs(n- m) * b ){
	         cout << abs(n - m) * b;
	        }
	       else{
		     cout << cnt * a;
	        }
    }

    else{
    	if(n * b <= abs(m - n) * a){
    		cout << n * b;
    	}
    	else{
    		cout << (m- n) * a;
    	}

    }
    
    cout << min(cnt * a, n % m * b) << "\n";
    

	return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m, a, b;
  cin >> n >> m >> a >> b;
  if (n%m==0) {
    cout << 0 << "\n";
  } else {
    
    long long ac =(m-(n%m));
    long long bc = n % m;
    cout << min(ac * a, bc * b) << "\n";
    
  } 
    
  return 0;
}
