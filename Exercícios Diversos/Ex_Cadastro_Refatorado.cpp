#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int cont=0,a;
int valida=3;
struct projeto{
	int codigo;
	char titulo[100];
	char descricao[100];
	char responsavel[100];
	int status;
};
struct projeto registro[200];
void imprimir(int a){
	printf("\nCodigo: %d",registro[a].codigo);
	printf("\nTitulo: %s",registro[a].titulo);
	printf("\nDescrição: %s",registro[a].descricao);
	printf("\nResponsavel: %s",registro[a].responsavel);
	printf("\nStatus: %d",registro[a].status);
	printf("\n================================\n");
}
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
				system("cls");
				printf("Status digitado invalido!\n");
			}
		}
		valida=3;
		system("cls");
		printf("\n0 - Para inserir um novo projeto\n1 - Para sair do Cadastro\nDigite: ");
		scanf("%d",&sair);
		while(sair!=0 and sair!=1){
			system("cls");
			printf("Opção invalida digite novamente!\n");
			printf("\n0 - Para inserir um novo projeto\n1 - Para sair do Cadastro\nDigite: ");	
			scanf("%d",&sair);
		}
		registro[cont].codigo=cont+1;
		cont+=1;
	}	
}
void pesquisa(int num){
	int i,codigo1,codigo2,c=0;
	switch (num){
		case 2:
			system("cls");
			if(cont>0){
				for(i=0;i<cont;i++){
					imprimir(i);
				}
			}else{
				printf("Nenhum código cadastrado!\n");
			}	
			system("pause");
		break;
		case 3:
			system("cls");
			printf("Digite o código do status\n0-Pendente\n1-Iniciado\n2-Concluido\nDigite: ");
			scanf("%d",&codigo1);
			for(i=0;i<cont;i++){
				if(registro[i].status==codigo1){
					imprimir(i);
					c+=1;	
				}
			}
			if(cont==0 or c==0){
				printf("Nenhuma pesquisa para o status!\n");
			}
			system("pause");
		break;		
		case 4:
			system("cls");
			printf("Digite o código do projeto: ");
			scanf("%d",&codigo2);
			for(i=0;i<cont;i++){
				if(registro[i].codigo==codigo2){
					imprimir(i);
					c+=1;	
				}
			}
			if(cont==0 or c==0){
				printf("Nenhuma pesquisa para o codigo!\n");
			}
			system("pause");
		break;
	}
}
void alterar(){
	int i,codigo2,c=0,sair=0;
			system("cls");
			printf("Digite o código do projeto: ");
			scanf("%d",&codigo2);
			for(i=0;i<cont;i++){
				if(registro[i].codigo==codigo2){
					imprimir(i);
					c=1;
				}
			}
			if(c>0){
				printf("Projeto encontado!\n");
				printf("Digite os campos abaixo para alterar!\n");
			while (sair!=1){
				printf("\nDigite o titulo do projeto: ");
				fflush(stdin);
				gets(registro[c].titulo);			
				printf("\nDigite a descrição do projeto : ");
				fflush(stdin);
				gets(registro[c].descricao);			
				printf("\nDigite o responsavel pelo projeto : ");
				fflush(stdin);
				gets(registro[c].responsavel);			
				while(valida!=0 and valida!=1 and valida!=2){
					printf("\nDigite o status do projeto \n0-Pendente\n1-Iniciado\n2-Concluido\nDigite:  ");
					scanf("%d",&valida);	
					if(valida>=0 and valida<=2){
						registro[c].status=valida;
					}else{
						system("cls");
						printf("Status digitado invalido!\n");
					}
				}
				sair=1;					
			}				
			}else{
				printf("Projeto não localizado\n0 - Para tentar localizar novamente\n1 - Para sair\nDigite: ");
				scanf("%d",&sair);				
			}

}
void menu(){
	int op;
	printf("\nEscolha a opção \n1 - Cadastrar\n2 - Consultar todos projetos\n3 - Consultar por status\n4 - Consultar por código\n5 - Alterar\n6 - Para sair\nDigite: ");	
	scanf("%d",&op);
	switch(op){
		case 1:
			cadastro();	
		break;
		case 2:
			pesquisa(2);
		break;
		case 3:
			pesquisa(3);
		break;	
		case 4:
			pesquisa(4);
		break;	
		case 5:
			alterar();
		break;	
		case 6:
			exit(0);
		break;	
		default:
			printf("\nOpção invalida\n ");	
			system("pause");	
	}
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	int repetir=0;
	while(repetir!=1){
		system("cls");
		menu();
		system("cls");
		printf("\n0 - Menu inicial\n1 - Sair\nDigite: ");
		scanf("%d",&repetir);
		while(repetir!=0 and repetir!=1){
			system("cls");
			printf("Opção invalida digite novamente!");
			printf("\n0 - Menu inicial\n1 - Sair\nDigite: ");
			scanf("%d",&repetir);
		}
	}
}
