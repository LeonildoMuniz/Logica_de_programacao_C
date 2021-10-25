#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int cont=0;
int valida=3;
struct projeto{
	int codigo;
	char titulo[100];
	char descricao[100];
	char responsavel[100];
	int status;
};

struct projeto registro[200];

void cadastro(){
	int sair=0;
	while (sair!=1){
		system("cls");
		printf("\nDigite o titulo do projeto: ");
		fflush(stdin);
		gets(registro[cont].titulo);	
		
		printf("\nDigite a descrição do projeto : ");
		fflush(stdin);
		gets(registro[cont].descricao);
			
		printf("\nDigite o responsavel pelo projeto : ");
		fflush(stdin);
		gets(registro[cont].responsavel);	
		
		while(valida!=0 and valida!=1 and valida!=2){
			printf("\nDigite o status do projeto \n0-Pendente\n1-Iniciado\n2-Concluido\nDigite:  ");
			scanf("%d",&valida);	
			if(valida>=0 and valida<=2){
				registro[cont].status=valida;
			}else{
				printf("\n==================================\n");
				printf("\nStatus digitado invalido!");
				printf("\n==================================\n");
			}
		}
		valida=3;
		system("cls");
		printf("\nPara cadastrar novo projeto digite 0 para sair digite 1: ");
		scanf("%d",&sair);
		registro[cont].codigo=cont+1;
		cont+=1;
	}	
}

void pesquisa(int num){
	int i;
	if(num==2)
		system("cls");
		if(cont>0){
			for(i=0;i<cont;i++){
				printf("\nCodigo: %d",registro[i].codigo);
				printf("\nTitulo: %s",registro[i].titulo);
				printf("\nDescrição: %s",registro[i].descricao);
				printf("\nResponsavel: %s",registro[i].responsavel);
				printf("\nStatus: %d",registro[i].status);
				printf("\n================================\n");
			}
			system("pause");
		}
}
void menu(){
	int op=0;
	while(op!=1 and op!=2 and op!=3 and op!=4){
		printf("\nEscolha a opção \n1 - Cadastrar\n2 - Consultar todos projetos\n3 - Consultar por status\n4 - Consultar por código\nDigite: ");	
		scanf("%d",&op);
		if(op<1 or op>4){
			printf("\nOpção invalida!");
		}
	}		
	switch(op){
		case 1:
			cadastro();	
		break;
		case 2:
			pesquisa(2);
		break;
		
		default:
			printf("\nOpção invalida\n");
			system("pause");	
	}
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	int repetir=0;
	while(repetir!=1){
		menu();
		printf("\nVoltar ao menu inicial digite 0 para sair digite 1: ");
		scanf("%d",&repetir);
	}
}
