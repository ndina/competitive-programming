#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long n,a;
	cin>>n>>a;
	if(a<=(n+1)/2)
		cout<<a*2-1;
	else
		cout<<(a-(n+1)/2)*2;
  return 0;
}