#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>



using  namespace std;

vector <int> v;
vector <char> vv;
vector <char> vvv;
vector <char> vvvv;
int main(){
	int n, cnt = 0;
	char c;
	cin >> n;

	for(int i = 2; i < n; i++){
		if(n % i == 0){
			cnt++;
			v.push_back(i);
		}
	}

	for(int i = 0; i < n; i ++){
		cin >> c;
		vv.push_back(c);
	}
    
    	for(int i = vv.size() - 1; i >= 0; i-- ){
    		vvv.push_back(vv[i]);}
    		
    
	while(cnt > 0){
		for(int i = 0; i < cnt; i++){
			for(int i = v[i] - 1; i >= 0; i --){
				vvvv.push_back(vvv[i]);
			}
		}
	}

	for(int i = 0; i < vvvv.size(); i++){
		cout << vvvv[i];
	}
}