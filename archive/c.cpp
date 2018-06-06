// #include <iostream>
// #include <cmath>
// #include <string>
// #include <algorithm>

// using namespace std;

// // int main(){
// // 	string s;

// // 	cin >> s;

// // 	for(int i = 0; i < s.size(); i ++){
// // 		if(s[i] >= 65 && s[i] <= 97){
// // 			s[i] += 32;
// // 		}
// // 	}

// // 	for(int i = 0; i < s.size(); i ++){
// // 		if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'u' || s[i] == 'i'){
// // 			s[i] == 00;
// //             s[i-1] == 00;
// // 		}

// // 		if(s[i] != 00)
// // 			cout << '.' << s[i];
		

// // 	}
// // return 0;
// // }
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  for(int i = 0; i < n; i++)       {
    if(s[i] >= 65 && s[i] <= 90)      {
      s[i] += 32;
    }
  }
  for(int i = 0; i < n; i++)        {
    if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u')  {
      s[i] = 00;
      s[i-1] = 00;
    }
    if(s[i] != 00)
    cout << "." << s[i];
  }

 
  return 0;
}