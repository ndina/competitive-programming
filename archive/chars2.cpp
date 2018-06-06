#include <iostream>
#include <algorithm>



/*bool Kek(string a){

    for(int i = 0; i < a.size(); i++){
        if(int(a[i]) + 1 == int(a[i + 1])){
            return true;
        }
        return false;
}
*/

using namespace std;

int main() {
    string s;
    int cnt;
    cin >> s;
    s += ".";
    bool din = false;
    //int cnt = 2;
    for (int i = 1; i < s.size(); i++) {
        if (din) {
            if (s[i] != s[i - 1] + 1) {
                cout << cnt;
                din = false;
            } else {
                cnt++;
            }
        } else {
            if (s[i] != s[i - 1] + 1 ) {
                cout << s[i - 1];
            } else {
                din = true;
               cnt = 2;
            }
        }
    }
}