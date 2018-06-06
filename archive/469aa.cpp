#include <iostream>
#include <cmath>
#include <set>
using namespace std;


set <int> s; 
int main(){
	int n, p, q, s2, s1;
	cin >> n;

    cin >> p;
    for(int i = 0; i < p; i ++){
    	cin >> s1;
    	s.insert(s1);
    }

    cin >> q;
    for(int i = 0; i < q; i ++){
    	cin >> s2;
    	s.insert(s2);
    }

    if(n == s.size()){
    	cout << "I become the guy.";
    }
    else{
    cout << "Oh, my keyboard!";
    }

    return 0;

}