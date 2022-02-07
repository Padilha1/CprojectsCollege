#include <stdio.h>

#define n 4

int main(){
	float A[n][n] = {{3,3,3,3}, {3,3,3,3},{3,3,3,3}, {3,3,3,3}};
	int i, j;
	float t= -10;
	for (i=0; i<n-1; i++){
		for(j=0;j<n-1;j++){
			if(j<=i){
				t= t+A[i][j];
			}
		}
	}
	printf("%f", t);
}
