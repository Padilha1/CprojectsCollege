#include <stdio.h>

int f(int N) {
     if (N==0) return 1;
     return N+f(N-1);
}


int main(){
	int N;
	printf("Digite um numero inteiro: ");
	scanf("%d ", &N);
	printf(" %d", f(N));
	
}
