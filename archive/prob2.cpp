#include <iostream>
#include <algorithm>
using namespace std;

int main(){
unsigned long long int sum = 0, a1 = 0, a2 = 1, nextTerm = 0;
do{
	nextTerm = a1 + a2;
 	a1 = a2;
 	a2 = nextTerm;
    if(nextTerm % 2 == 0){
    	sum += nextTerm;
    }
}
while(nextTerm < 4000000);
{
  
  cout << sum;
}
}