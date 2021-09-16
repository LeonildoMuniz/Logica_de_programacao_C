#include <stdio.h>
#include <stdlib.h>

int vl1,vl2,soma;

int main(){

	printf("\nDigite o primeiro valor: ");
	scanf("%d",&vl1);
	printf("\nDigite o segundo valor: ");
	scanf("%d",&vl2);
	
	soma=vl1+vl2;
	
	if(soma>10){
		printf("\nO valor da soma e: %d",soma);
	
	}
	else{
		printf("\nSoma e inferior a 10");
	}
	

	return(0);  

}

