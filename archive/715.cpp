#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>


using namespace std;
int n, m;

vector<char> orig;
int main(){
  //int n, m;

  cin >> n >> m;
  char cc;
  for(int i = 0; i < n * m; i++){
  	cin >> cc;
  	orig.push_back(cc);
  }
  int cnt = 0;

  for(int i = 0; i < n * m; i++){
  	char c;

  	//scanf(" %c", &c);
  	cin >> c;
  	if(c + orig[i] != 'B' + 'W'){
  		cnt++;
  	}
  }
  cout << cnt;

  return 0;
}