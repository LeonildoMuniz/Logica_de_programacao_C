#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int cont=0;

struct produto{
	int cod_produto;
	char nome_produto[100];
	float qtde_produto;
	float unit_produto;
	float vlr_total;
};

struct produto material[100];

void cadastro(){
	int sair=0;
	
	while(sair!=1){
		
		system("cls");
		printf("Digite o código do produto: ");
		scanf("%d",&material[cont].cod_produto);
		printf("\nDigite o nome do produto: ");
		fflush(stdin);
		gets(material[cont].nome_produto);
		printf("\nDigite a quantidade: ");
		scanf("%f",&material[cont].qtde_produto);
		printf("\nDigite o valor unitario: ");
		scanf("%f",&material[cont].unit_produto);
		material[cont].vlr_total=material[cont].qtde_produto*material[cont].unit_produto;
		printf("\nDigite 1 para sair / 0 - Novo produto\n Opção:  ");
		scanf("%d",&sair);
		if(sair!=0 and sair!=1){
			while(sair!=0 and sair!=1){
				system("cls");
				printf("\nValor digitado invalido, digite novamente, 1 - Sair / 0 - Novo produto \nOpção:");
				scanf("%d",&sair);
			}
		}
		cont+=1;
		
	}
}

void listagem_todos(){
	int i;
	system("cls");
	if(cont>0){
		for(i=0;i<cont;i++){
			printf("\nCódigo: %d",material[i].cod_produto);
			printf("\nDescrição: %s",material[i].nome_produto);
			printf("\nQuantidade: %.2f",material[i].qtde_produto);
			printf("\nUnitario: %.2f",material[i].unit_produto);
			printf("\nValor total: %.2f",material[i].vlr_total);
			printf("\n=================================");
		}	
	}else{
		printf("Nenhum cadastro realizado");
	}		
}

void listagem_codigo(){
	int codigo;
	int i,cont2=0;
	system("cls");
	printf("Digite código para pesquisa: ");
	scanf("%d",&codigo);
	for(i=0;i<cont;i++){
		if(codigo==material[i].cod_produto){
			printf("\nCódigo: %d",material[i].cod_produto);
			printf("\nDescrição: %s",material[i].nome_produto);
			printf("\nQuantidade: %.2f",material[i].qtde_produto);
			printf("\nUnitario: %.2f",material[i].unit_produto);
			printf("\nValor total: %.2f",material[i].vlr_total);
			printf("\n=================================");
			cont2+=1;
		}
		else if(cont2==0){
			system("cls");
			printf("\nNenhum código foi encontrado");
		}
	}
}

void altera_codigo(){
	int codigo;
	int i,cont2=0;
	system("cls");
	printf("Digite código para alterar: ");
	scanf("%d",&codigo);
	for(i=0;i<cont;i++){
		printf("\nCodigo encontrado!\nEntre com os dados a seguir para alterar\n");
		if(codigo==material[i].cod_produto){
			printf("\nCódigo atual: %d - Novo: ",material[i].cod_produto);
			scanf("%d",&material[i].cod_produto);
			printf("\nDescrição atual: %s Nova: ",material[i].nome_produto);
			fflush(stdin);
			gets(material[i].nome_produto);
			printf("\nQuantidade atual: %.2f Nova: ",material[i].qtde_produto);
			scanf("%f",&material[i].qtde_produto);
			printf("\nUnitario atual: %.2f Novo: ",material[i].unit_produto);
			scanf("%f",&material[i].unit_produto);
			material[i].vlr_total=material[i].qtde_produto*material[i].unit_produto;
			cont2+=1;
		}
		else if(cont2==0){
			system("cls");
			printf("\nNenhum código foi encontrado");
		}
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	cadastro();
	altera_codigo();
	//listagem_todos();
	listagem_codigo();
	
}
