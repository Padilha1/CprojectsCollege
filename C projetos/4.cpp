#include <stdio.h>


#define TAM 7

int main(){

	int numeros [TAM]={101, 20, 5, 150, 4, 6, 0}, aux, i, contador;

	for (contador = 1; contador < TAM; contador++) {	
      for (i = 0; i < TAM - 1; i++) {
     	if (numeros[i] < numeros[i + 1]) {
       		aux = numeros[i];
       		numeros[i] = numeros[i + 1];
       		numeros[i + 1] = aux;
    	 }
      }
 	}
	printf("%d", numeros);
}
