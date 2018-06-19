#include <iostream>

using namespace std;

#define ll long long

int main(){
    ll n, m, d, k;
    cin >> n >> m >> d >> k;

    //ll ans = d * k * (n + m) - d * d * m * n;
    ll ans = d * k * (n+m) - d * d * n * m;
   // cout << d * k * (n + m) << endl << d * d * n * m<< endl;
    cout << ans;

    return 0;
   
	}