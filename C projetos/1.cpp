#include <stdio.h>


#define N 8
int main() {
int v[N]={5,1,4,2,7,8,3,6},i, aux;
for (i=N-1; i>=4; i--){
	aux=v[i];
	v[i]=v[N-i-1];
	v[N-i-1]=aux;
}
for(i=0; i<N; i++)
	printf("%d, ", v[i]);
return 0;
}
