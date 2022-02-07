#include <stdio.h>




int main(){
	int k, i;
	int v[5] = {30,75,7,19,68};
//	v[0]= 30;
//	v[1]= 75;
//	v[2]= 7;
//	v[3]= 19;
//	v[4]= 68;
	printf("Type a number: ");
	scanf("%d", &k);
	
	for(i=0; i<5; i++){
		if (k==i[v]){
			break;
		}
	}
	if(i<5){
		printf("Found the number on position: %d", i);
	}else{
		printf("Didn`t find the number: %d ", -1);
	}
	return 0;
}
