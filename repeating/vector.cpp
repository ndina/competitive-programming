#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v;
int main(){
int x;
int k = 0;
while(cin >> x){
	if(x != 0){
		v.push_back(x);
		k++;
	}
	else{
		break;
	}
}
sort(v.begin(), v.end());

for(int i = 0; i < k; i++){
	cout << v[i] << " ";
}

}