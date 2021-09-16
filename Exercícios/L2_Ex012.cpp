#include<stdio.h>
#include<stdlib.h>

int i,soma;

int main(){
	
	for(i=0;i<=20;i++){
		soma+=i;	
	}
	
	printf("\n\nA soma dos 20 primeiros numeros inteiros e: %d",soma);
	
	return(0);
}
