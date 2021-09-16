#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[20],nome2[4];

int tamanho,i;

int main()
{
	printf("Digite o nome: ");
	gets(nome);
	
	tamanho = strlen(nome);

	if(tamanho>4){
		for(i=0;i<4;i++){
			printf("%d letra: %c\n",i+1,nome[i]);
		}
	}
	else{
		printf("\nNome nao possui quatro letras!");
	}
	return(0);  
}

