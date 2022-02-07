#include <stdio.h>
#include <string.h>
#define MAX 15
void exerc6() {
     char str[MAX]="0010011", stc[MAX]; 
     int i, T;
     T = strlen(str);
     for(i=0; str[i] != '\0'; i++)
     {
                stc[i] = str[T-i-1]; 
     }
     stc[i] = '\0';
     printf("%s", stc);
	}
int main(){
	exerc6();

}
