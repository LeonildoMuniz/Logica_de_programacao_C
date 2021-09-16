#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[20],sexo[1];
int idade;

int main(){

	
	printf("Digite o nome: ");
	gets(nome);
	
	printf("\nDigite o sexo (F/M): ");
	gets(sexo);

	printf("\nDigite idade: ");
	scanf("%d",&idade);



	if(idade>18 && strcmp(sexo,"M")==0){
		printf("\n%s alistamento!",nome);
	}
	else{
		printf("\nNAO ESTA APTO");
	}
	return(0);  
}

