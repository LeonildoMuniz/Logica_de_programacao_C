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
		system("cls");
		printf("\nEscolha uma das opções\n 1 - Sair\n 0 - Novo código\n Opção:  ");
		scanf("%d",&sair);
		
		if(sair!=0 and sair!=1){
			while(sair!=0 and sair!=1){
				system("cls");
				printf("\nValor digitado invalido\n 1 - Sair\n 0 - Novo código\n Opção:  ");
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
			printf("\n=================================\n");
		}	
	}else{
		printf("Nenhum cadastro realizado\n\n");
	}	
	system("pause");	
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
	}
	if(cont2==0){
		system("cls");
		printf("Nenhum código foi encontrado\n\n");
	}
	system("pause");
}

void altera_codigo(){
	int codigo;
	int i,cont2=0;
	system("cls");
	printf("Digite código para alterar: ");
	scanf("%d",&codigo);
	for(i=0;i<cont;i++){
		if(codigo==material[i].cod_produto){
			printf("\nCodigo encontrado!\nEntre com os dados a seguir para alterar\n");
			printf("\nQuantidade atual: %.2f Nova: ",material[i].qtde_produto);
			scanf("%f",&material[i].qtde_produto);
			material[i].vlr_total=material[i].qtde_produto*material[i].unit_produto;
			cont2+=1;
		}
	}
	if(cont2==0){
		system("cls");
		printf("Nenhum código foi encontrado\n\n");
	}
	system("pause");
}

void ler_arquivo(){
  FILE *arquivo;
  char linha[100];
  char *result;
  int i;
  arquivo = fopen("estoque.txt", "rt");
  if (arquivo == NULL){
    printf("Arquivo aberto ou não existe\n");
    system("pause");
    return;
  }
  i = 1;
  system("cls");
  while (!feof(arquivo)){
      result = fgets(linha, 100, arquivo); 
      if (result)
	  printf("%s",linha);
      i++;
  }
  printf("\n");
  system("pause");
  fclose(arquivo);
  
} 

void gravar_arq(){
	int i;
	FILE *arquivo;
	arquivo = fopen("estoque.txt","a");
	
	if(arquivo==NULL){
		printf("Não foi possivel abrir o arquivo");
		return;
	}
	for(i=0;i<cont;i++){
		fprintf(arquivo,"\nCodigo: %d\nDescrição: %s\nQuantidade: %.2f\nValor unitario: %.2f\nValor total: %.2f\n--------------------------------"
		,material[i].cod_produto
		,material[i].nome_produto
		,material[i].qtde_produto
		,material[i].unit_produto
		,material[i].vlr_total);		
	}
	fclose(arquivo);
	exit(1);
}

int menu(){
    int opcao=0;
    printf("Escolha a opção:\n 1 - Cadastrar novo código\n 2 - Listar todos cadastros em memoria\n 3 - Consulta por código em memoria\n 4 - Altera código memoria\n 5 - Gravar arquivo de dados TXT e sair\n 6 - Mostrar dados arquivo TXT\n 7 - Encerrar aplicação\n\nOpção===> : ");
    scanf("%d",&opcao);
    return opcao;
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
    int opcao;
    opcao=menu();
    while(opcao != 7){ 
    switch(opcao){
    	case 1:
			cadastro();
    	break;
    	case 2:
			listagem_todos();
    	break;
	    case 3:
			listagem_codigo();
    	break;
    	case 4:
			altera_codigo();
    	break;
    	case 5:
			gravar_arq();
    	break;
    	case 6:
			ler_arquivo();
    	break;
    	
    	default:
    		system("cls");
    		printf("Opção escolhida invalida!\n\n");
    		system("pause");
    } 
    system("cls");
    opcao=menu(); 
    }
return 0;
	
}
