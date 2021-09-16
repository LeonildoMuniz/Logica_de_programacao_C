#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char nome[50],nome2[1];
int tamanho,i,cont;

int main(){
	
	printf("Digite um nome: ");
	gets(nome);
	
	tamanho=strlen(nome);
	
	for(i=0;i<tamanho;i++){
		nome2[0]=nome[i];
		if(strcmp(nome2,"a")==0 or strcmp(nome2,"A")==0){
			cont+=1;
		}
	}

	printf("\nO nome digitado tem: %d letras A",cont);
	
	return(0);
}

