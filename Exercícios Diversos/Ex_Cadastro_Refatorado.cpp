;
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
