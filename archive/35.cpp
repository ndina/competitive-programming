#include <iostream>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

int main(){
	int k;

	long long int n, m, d;
    
    cin >> k;

   /* long long int a[1000][1000];

    for(int i = 0; i < k; i++){
    	for(int j = 0; j < 2; j++){
    	cin >> a[i][j];
        }
    }

    for(int i = 0; i < k; i++){
    	for(int j = 0; j < 2; j++){
    	d = 19 * a[i][0] + (a[i][1] + 239) * (a[i][1] + 366) / 2;
        }
    }

    cout << d << endl;

    */
    
    
    set <int> s;

    vector<int>v;
    for(int i = 0; i < k; i++){
    	cin  >> n >> m;

    	d = 19 * m + (n + 239) * (n + 366) / 2;


       // s.insert(d);
        
        v.push_back(d);
    }

    d = 19 * m + (n + 239) * (n + 366) / 2;

    for(int i = 0; i  < k; i++){
    	cout << v[i] << endl;
    }

   }
