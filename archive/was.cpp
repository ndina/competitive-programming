#include "bits/stdc++.h"
using namespace std;


int main()
{
    long long int n,k,c=0;
    cin>>n;
    string s,p;
    cin>>s;
    for(int i=1;i<=n;i++){
        if(n%i==0){
           for (int j=0;j<i/2;j++)
              swap(s[j], s[i-j-1]);

        }
        //cout<<s<<" "<<endl;
    }
    cout<<s;

}