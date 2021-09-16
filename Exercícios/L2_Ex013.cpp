#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char nome[50];
int tamanho;

int main(){
	
	printf("Digite um nome: ");
	gets(nome);
	
	tamanho=strlen(nome);
	
	printf("\nO nome digitado tem: %d letras",tamanho);
	
	return(0);
	
}
