#include <iostream>
#include <algorithm>

using namespace std;
int main(){
  
  int n = 3, cnt = 0, cnt2 = 0, cnt3 = 0;

  int a[n], b[n];

  for(int i = 0; i < n; i++){
  	cin >> a[i];
  }
  sort(a, a + n);

  for(int i = 0; i < n; i++){
  	cin >> b[i];
  }
  sort(b, b+ n);

  for(int i = 0; i < n; i++){
  	if(a[i] == b[i]){
  		cnt++;
  	}
  	if(a[i] <= b[i]){
  		cnt2++;
  	}
  	if(a[i] >= b[i]){
  		cnt3++;
  	}
  }

  if(cnt == 3){
  	cout << "Boxes are equal";
  }
  else if(cnt2 == 3){
  	cout << "The first box is smaller than the second one";
  }
  else if(cnt3 == 3){
  	cout << "The first box is larger than the second one";
    }
  else cout << "Boxes are incomparable";
    
    return 0;
}