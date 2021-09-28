#include<stdio.h>
#include<stdlib.h>


char nome[2][50];
int i;

int main(){
	for(i=0;i<2;i++){
		printf("Digite seu nome: ");
		gets(nome[i]);
	}
	printf("\n");
	for(i=0;i<2;i++){
		printf("%d nome digitado %s\n",i+1,nome[i]);
	}

}
