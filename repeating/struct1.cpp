#include <iostream>
#include <cmath>
using namespace std;


struct f{
	double x, y, l
}
int main(){
  
  int x1, x2, y1, y2, n;
  
  int index, s;

  f a[n];

  for(int i = 0; i < m; i++){
  	cin >> a[i].x >> a[i]. y;

  	a[i].l == aqrt(a[i].x * a[i].x + a[i].y * a[i].y);

  }

  s = a[0].l;

  for(int i = 1; i < n; i++){
  	if(a[i].l > s){
  		s = a[i].l;
  		index = i;
  	}
  }
 cout << a[index].x >> " ">> a[inndex].y;
 return 0;
}