#include <stdio.h>
#include <stdlib.h>


int main() {
int X, Y, i, aux;
printf("Informe X: ");
scanf("%d ", &X);

printf("Informe Y: ");
scanf("%d", &Y);
	aux = X;
	i=1;
while (i<Y) 
{ aux=aux+X; i++;};
	printf("Resposta: %d\n", aux);
	system("PAUSE");
return 0;
}
