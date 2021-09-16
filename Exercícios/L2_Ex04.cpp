#include <stdio.h>
#include <stdlib.h>

int numero;

int main(){

	printf("\nDigite um numero: ");
	scanf("%d",&numero);
	
	if(numero%2==0){
		printf("%d e um numero divisivel por 2! \n",numero);
	}
	if(numero%5==0){
		printf("%d e um numero divisivel por 5! \n",numero);
	}
	if(numero%10==0){
		printf("%d e um numero divisivel por 10! \n",numero);
	}
	else{
	printf("%d nao e divisivel por 2, 5 e 10! \n",numero);
	}

	return(0);  

}

