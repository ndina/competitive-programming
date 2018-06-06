#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

set<int>s;

int main(){
	int n, b, x;
    
    cin >> n >> b;

    int a[n];

    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }

    for(int i = 0; i < n; i++){
    	for(int j = 1; j <=n; j++){
    		if(a[i] != a[j]){
    			s.insert(i);
    			cout << "i " <<i << " " << endl;
    		}
    	}
    }



	/*for(int  i = 0; i < a; i++){
		cin >> x;
		s.insert(x);
	}
	*/
    set<int>::iterator it;

	if(s.size() >= b){
		cout << "YES";
		cout << endl;
		for(it = s.begin(); it!=s.end(); it++){
			cout << *it  + 1<< " ";
		}
	}
	else{
		cout <<"NO";
	}
	

}