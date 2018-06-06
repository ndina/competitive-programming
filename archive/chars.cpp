#include <iostream>
#include <algorithm>

using namespace std;

/*bool Kek(string a){

	for(int i = 0; i < a.size(); i++){
		if(int(a[i]) + 1 == int(a[i + 1])){
			return true;
		}
		return false;
}
*/
int main(){
	string s;
	int cnt = 0;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(int(s[i]) + 1 == int(s[i + 1])){
			cnt++;
		}
	}

	for(int i = 0; i < s.size(); i++){
		if(int(s[i]) + 1 == int(s[i + 1])){

			s.erase(i, i + cnt + 1);

		}
    }
    cout << cnt + 1;
    cout << s;

    
	

}