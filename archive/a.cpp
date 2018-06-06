#include <iostream>

#include <cmath>

using namespace std;

int main(){
	int n, m, x;

	cin >> n >> m;

	int a[n];
    
    int cnt = 0,sum = 0;
    


// 	for(int i = 1; i <= n; i ++){
// 		cin >> a[i];
// 		sum += a[i];
// 	}


    	
// 	 for( int i = 1; i <= n; i ++){
// 	 	if (a[i] > 0){
// 	          if(a[i] >= a[m] ){
// 		         cnt ++;
// 	          }
//            }
        

//         else 
//     }
        



    

//    if(sum > 0){
//    	cout << cnt;
//    	return 0;
//    }

//    else {
//    	cout << 0;
//    	return 0;
//    }

// // }

// for(int i = 1; i <= n; i ++){
// 	cin >> a[i];
// }

// for(int i = 1; i <= n; i ++){
// 	if(a[i] < 0){
// 		sum ++;
// 	}
//     else if(a[i]==a[i+1] && a[i] == 0){
//     	cout << 0;
//     	return 0;
//     }

//     else if(a[i] >= a[m]){
//     	cnt++;
//     }

  
// }

// if(sum <= 0){
// 	cout << cnt;
// }

// }

for( int i = 0; i < n; i ++){
	cin >> a[i];
}

for(int i = 0; i < n; i++)
	if(a[i] >= a[m-1] && a[i] > 0)
		cnt ++;
		cout << cnt;

		return 0;
}




