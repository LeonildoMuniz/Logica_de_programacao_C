#include<stdio.h>
#include<stdlib.h>


char nome[2][50];
float nota[2][2],soma,media[2];
int i,j;

int main(){

	for(i=0;i<2;i++){
		printf("Digite o nome do %d Aluno:  ",i+1);
		fflush(stdin);
		gets(nome[i]);
		for(j=0;j<2;j++){
			printf("Digite a %d nota:  ",j+1);
			scanf("%f",&nota[i][j]);
			soma+=nota[i][j];
		}
		media[i]=soma/2;
		soma=0;
	}
	printf("\n");
	for(i=0;i<2;i++){
		if(media[i]>=7){
			printf("Aluno aprovado!\n");
			printf("Media do aluno %s: %.2f \n\n",nome[i],media[i]);	
		}else{
			printf("Aluno reprovado!\n");
			printf("Media do aluno %s: %.2f \n\n",nome[i],media[i]);	
		}
	}
return(0);
}
