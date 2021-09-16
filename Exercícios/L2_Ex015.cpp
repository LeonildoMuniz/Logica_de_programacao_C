#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int num[10],i,cont;

int main(){
	cont=0;
	for(i=1;i<=20;i++){
		if(i%2==0){
			num[cont]=i;
			cont+=1;
		}
	}
	for(i=0;i<cont;i++){
		printf("\nNumero %d e par",num[i]);
	}

	return(0);
}
