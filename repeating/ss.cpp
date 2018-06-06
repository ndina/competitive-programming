#include <bits/stdc++.h>

using namespace std;

int main(){

	set <int> s;

	string a;

	int x, l = 0;
    
    getline(cin,a);

	stringstream ss, t;
   
    ss<<a;

    while(ss>>x){
    	s.insert(x);
    }

    getline(cin, a);

    t<<a;
    while(t >> x){
    	if(s.find(x) != s.end()){
    		 l++;
    	}
    }

    cout << l
}