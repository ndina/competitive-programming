#include <iostream>
#include <set>

using namespace std;

set <int> m;

int main(){
	int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < s.size(); i ++){
    	if(s[i] >= 'A' && s[i] <= 'Z'){
    		s[i] += 32;
    	}
    }

    for(int i = 0; i < s.size(); i ++){
    m.insert(s[i]);

    }
    if(m.size() == 26){
    	cout << "YES";
    }
    else {
    	cout << "NO";
    }
}