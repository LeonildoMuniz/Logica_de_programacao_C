#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>


struct projeto{
	int codigo;
	char titulo[100];
	char descricao[100];
	char responsavel[100];
	int status;
};

struct projeto projetos[200];
int opcao,sequencia=0;
const int A=1,F=2,C=3;


void cadastrar_projeto(){
	bool cadastro=true;
	char continuar;
	do{
		system("cls");
		projetos[sequencia].codigo=sequencia+1;
		printf("\nDigite o titulo do projeto: ");
		fflush(stdin);
		gets(projetos[sequencia].titulo);	
		
		printf("\nDigite a descrição do projeto : ");
		fflush(stdin);
		gets(projetos[sequencia].descricao);
			
		printf("\nDigite o responsavel pelo projeto : ");
		fflush(stdin);
		gets(projetos[sequencia].responsavel);	
		
		printf("\nDigite o status do projeto : ");
		scanf("%d",&projetos[sequencia].status);	
		
		printf("\nCadastro ralizado com sucesso, deseja realizar um novo cadastro? S-sim - N-não: ");
		fflush(stdin);
		scanf("%c",&continuar);
		if((continuar=='N') or (continuar=='n')){
			cadastro=false;
		}
			
		sequencia++;
	}while(cadastro==true);	
}

void todos_projetos(){
	system("cls");
	int i;
	if(projetos[0].codigo>0){
		for(i=0;i<sequencia;i++){
			printf("\nCódigo: %d",projetos[i].codigo);
			printf("\nTitulo: %s",projetos[i].titulo);
			printf("\nDescrição: %s",projetos[i].descricao);
			printf("\nResponsável: %s",projetos[i].descricao);
			printf("\nStatus: %d",projetos[i].status);
			printf("\n===============================\n");
		}
	}else{
		printf("\nNenhum projeto cadastrado\n");
	}
	system("pause");
}

void por_status(int s){
	system("cls");
	int i;
	bool achou;
	for(i=0;i<sequencia;i++){
		if(projetos[i].status==s){
			printf("\nCódigo: %d",projetos[i].codigo);
			printf("\nTitulo: %s",projetos[i].titulo);
			printf("\nDescrição: %s",projetos[i].descricao);
			printf("\nResponsável: %s",projetos[i].descricao);
			printf("\nStatus: %d",projetos[i].status);
			printf("\n===============================\n");			
		}else{
			achou=false;
		}
	}
	if(achou==false){
		printf("\nProjeto não encontrado");
		system("pause");
	}
}

busca_codigo(){
	
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	do{
		system("cls");
		opcao=9;
		printf("\nDigite 1 para cadastrar projetos\nDigite 2 para imprimir todos os projetos\nDigite 3 para imprimir todos os projetos com status: A FAZER\nDigite 4 para imprimir todos os projetos com o status: FAZENDO\nDigite 5 para imprimir todos os projetos com status: CONCLUIDO\nDigite 6 para busca de projeto por código\nDigite 0 para sair da aplicação\nEscolha: ");
		scanf("%d",&opcao);
		
		switch(opcao){

			case 1:
				cadastrar_projeto();
			break;
			case 2:
				todos_projetos();
			break;
			case 3:
				por_status(A);
			break;

			case 4:
				por_status(F);
			break;

			case 5:
				por_status(C);				
			break;
			case 6:
				
			break;
			
			case 0:
				
			break;
			
			default:
				printf("\nOpção invalida!\n");
				system("pause");
		
		}
		
	}while(opcao!=0);
	
	
	return 0;
}
