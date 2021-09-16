#include <stdio.h>
#include <stdlib.h>

int num;

int main(){

	printf("\nDigite um numero inteiro: ");
	scanf("%d",&num);

	
	if(num>=20 and num<=80){
		printf("\nParabens o numero: %d esta entre 20 e 80",num);
	
	}
	else{
		printf("\nTente outra vez!");
	}
	

	return(0);  

}

