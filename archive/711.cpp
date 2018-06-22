#include <iostream>
using namespace std;

struct f
{
	string name;
	double points, l;
};
int main(){
	int n, m;
	//double mini = 0;
	cin >> n >> m;
	int index, s;

	f a[n];

	for(int i = 0; i < n; i++ ){
		cin >> a[i].name;
		for(int j = 0; j < m; j++){
			cin >>a[j].points; 
			a[i].l += a[j].points;
		}
		//mini = min(mini, a[i].l);
       
	}
	s = a[0].l;

	for(int i = 1; i < n; i ++){
		if(a[i].l < s){
			s = a[i].l;
			index = i;
		}
	}
	if(n == 1){
		cout << s;

	}
	else {
	cout << a[index].name;
	 }
	return 0;
}