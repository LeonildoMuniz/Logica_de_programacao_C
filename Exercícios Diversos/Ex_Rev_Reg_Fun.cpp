#include<stdio.h>
#include<stdlib.h>

float media,n1;
int op;
int i;

struct alunos{
	char nome [100];
	int idade;
	float n1;
};

struct alunos cadastro;

float md (float n1){
	media+=n1;
	return media;
}

int main(){
	op=1;
	
	while(op!=0){
		printf("\nDigite o nome do Aluno: ");
		fflush(stdin);
		gets(cadastro.nome);

		printf("\nDigite a idade do aluno: ");
		scanf("%f",&cadastro.idade);
		for(i=0;i<2;i++){
			printf("\nDigite a nota %d do aluno: ",i+1);
			scanf("%f",&cadastro.n1);
			media=md(cadastro.n1);
		}							

		printf("\nMédia do aluno: %.2f",media/2);
		printf("\nPara continuar digite 1 para sair 0: ");
		scanf("%d",&op);
		media=0;
	}

	
}
