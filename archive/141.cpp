#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
	sort(s3.begin(), s3.end());
	string ss = s1 + s2;
	sort(ss.begin(), ss.end());

    if(ss == s3){
    	cout <<"YES";
    }
    else {
    	cout << "NO";
    }

}