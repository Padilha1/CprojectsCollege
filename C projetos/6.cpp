#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char texto[30] = "12345abcde";
	int i=0, p=1, k;
	while(i<strlen(texto) && p!=0){
		if(texto[i] == 'a') p=0;
			i++;
	}
	for(k=i;k>=0;k--){
		if(texto[k]!='b')
			printf("%c", texto[k]);	
	
	}return 0;
	
}





