#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    unsigned long long m, max = 0;
	int a[21][21];

	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 20; j++){
         cin >> a[i][j];
		}
	}


	for(int i = 0; i < 20; i ++){
		for(int j = 0; j < 20; j++){
			if(i < 17){
             m = a[i][j]*a[i + 1][j]*a[i + 2][j] * a[i + 3][j];
                if (m > max){
             	max = m;
                }
            }

            if(i < 17){
            	m = a[i][j] *a[i][j + 1] * a[i][j + 2] * a[i][j + 3];
            	if(m > max){
            		max = m;
            	}
            }

             if (j < 17 && i < 17){
            m = a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3];
            if (m > max) max = m;
        }
        if (i < 17 && j > 2){
    m = a[i][j] * a[i+1][j-1] * a[i+2][j-2] * a[i+3][j-3];
    if (m > max) max = m;
}

		}
	}

	cout << max;
}