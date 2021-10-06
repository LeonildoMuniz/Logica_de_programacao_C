#include<stdio.h>
#include<stdlib.h>

struct alunos{
	char nome[100];
	float nota1,nota2,media;
};

struct alunos aluno[2];

int main(){
	int i;
	for(i=0;i<2;i++){
		printf("Digite o nome: ");
		fflush(stdin);
		gets(aluno[i].nome);
		printf("Digite a nota 1: ");
		scanf("%f",&aluno[i].nota1);
		printf("Digite a nota 2: ");
		scanf("%f",&aluno[i].nota2);
		
		aluno[i].media=(aluno[i].nota1+aluno[i].nota2)/2;
			
	}
	
	for(i=0;i<2;i++){
		printf("\nA media do aluno %s e: %.2f",aluno[i].nome,aluno[i].media);
	}

}
