#include<stdio.h>
#include<stdlib.h>

int a;

int main(){

	printf("\nDigite o valor: ");	
	scanf("%d",&a);

	while(a<1 or a>4){
		
		printf("\nEntrada invalida!\n");
		printf("\nDigite novamente: ");
		scanf("%d",&a);
		
	}
	
	printf("Valor digitado permitido, valor digitado: %d",a);
	
	return(0);
	
}
