
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
struct pessoa{
	char cpf[16];
	char nome[100];
	char sexo[1];
	int idade;
	
	int total_pontos,sintomas_pontos[10]={5,1,1,1,3,10,1,1,10,3};
	char sintomas_descricao[10][200]={"Tem febre?",
	"Tem dor de cabeça?",
	"Tem secreção nasal ou espirros?",
	"Tem dor/irritação na garganta?",
	"Tem tosse seca?",
	"Tem dificuldade respiratória",
	"Tem dores no corpo?",
	"Tem diarréia?",
	"Esteve em contato com alguém positivado covid-19?",
	"Estve em locais com grande aglomeração?"};
};

struct pessoa paciente;


void cadastro_paciente(){
	printf("\nPara atendimento, faça seu cadastro:");
	printf("\nDigite seu CPF: ");
	fflush(stdin);
	gets(paciente.cpf);
	
	printf("\nDigite seu nome:");
	fflush(stdin);
	gets(paciente.nome);
	
	printf("\nDigite seu sexo: ");
	scanf("%s",&paciente.sexo);
	
	printf("\nDigite sua idade: ");
	scanf("%d",&paciente.idade);
	system("cls");
	printf("Confira seus dados: ");
	printf("\nCPF: %s",paciente.cpf);
	printf("\nNome: %s",paciente.nome);
	printf("\nSexo: %s",paciente.sexo);
	printf("\nIdade: %d",paciente.idade);	
}

void coleta_sintomas(){
	char resposta;
	paciente.total_pontos=0;
	int i=0;
	printf("\nRespondas as proximas pergutas para saber a qual ala deve se dirigir");
	while(i<10){
		printf("\n%s | S-sim N-não: ",paciente.sintomas_descricao[i]);
		fflush(stdin);
		scanf("%c",&resposta);
		if((resposta=='s') or (resposta=='S')){
			paciente.total_pontos+=paciente.sintomas_pontos[i];	
			i+=1;
		}else if(resposta=='n' or resposta=='N'){
			i+=1;
		}else{
			printf("\nValor invalido digite novamente");
		}
	}
}
void triagem(){
	system("cls");
	printf("O total de pontos foi: %d",paciente.total_pontos);
	
	if(paciente.total_pontos<=9){
		printf("\nEncaminhe-se para a ala de risco BAIXO");
	}else if(paciente.total_pontos>=20){
		printf("\nEncaminhe-se para ala de risco ALTO");
	}else{
		printf("\nEncaminhe-se para ala de risco MEDIO");
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int op;
	int sair=1;
	

	while(sair!=4){
		
		system("cls");
		printf("Escolha a opção desejada:\n1 - Cadastrar paciente\n2 - Coletar sintomas\n3 - Apresentar dados triagem\n4 - Sair\nOpção: ");
		scanf("%d",&op);
		switch(op){
			int cont1;
			int cont2;

				case 1:
					cont1=+1;
					cadastro_paciente();	
				break;
				case 2:
					cont2=+1;
					if(cont1>0){
						coleta_sintomas();	
					}else{
						printf("\nNão há cadastro de cliente");
						system("pause");
					}
				break;
				case 3:
					if(cont2>0 and cont1>0){
						triagem();
					}else{
						printf("\nSem reposta dos sintomas ou cadastro de cliente");
						system("pause");
					}
				break;
				case 4:
					sair=4;
				break;
				
				default:
					printf("\nOpção invalida!");
			}
	}
	return 0;
}
