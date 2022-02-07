#include <stdio.h>
#include <string.h>


void exerc(int TAM){
	char s[TAM]= "ABCDEFG";
	char aux;
	int i, k;
	
	k =strlen(s)-1;
	for(i=0;i<k;i++){
		if(s[i]>s[k]){
			aux = s[i];
			s[i] = s[k];
			s[k] = k;
		}
		k--;
	}
	printf("%s", s);
	
}

int main(){
	exerc(4);
}
