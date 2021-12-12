#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>

int menu(){
    int opcao=0;
    printf("Escolha a opção:\n 1 - Jogar o bingo\n 2 - Sair\n\nOpção===> : ");
    scanf("%d",&opcao);
    return opcao;
}

bool validaCartela(int numero[],int max, int sorteio){
	int i;
	for(i=0;i<max;i++){
		if(numero[i]==sorteio or sorteio==0){
			return true;
		}
	}

	return false;
}

void sorteio(){
	system("cls");
	srand(time(NULL));
	int sorteado,i,j,numeroB[5],numeroI[5],numeroN[5],numeroG[5],numeroO[5],cartela[75],cont=0,cont2=0;
	double a=88;

	
	for(i=0;i<5;i++){
		sorteado = rand()%15;
		while(validaCartela(numeroB,i,sorteado) or sorteio==0){
			sorteado = rand()%15;	
		}
		numeroB[i]=sorteado;
	}
	
	for(i=0;i<5;i++){
		sorteado = rand()%15+15;
		while(validaCartela(numeroI,i,sorteado) or sorteado==15){
			sorteado = (rand()%15)+15;	
		}
		numeroI[i]=sorteado;
	}
	
	for(i=0;i<5;i++){
		sorteado = rand()%15+30;
		while(validaCartela(numeroN,i,sorteado) or sorteado==30){
			sorteado = (rand()%15)+30;	
		}
		numeroN[i]=sorteado;
	}
	
	for(i=0;i<5;i++){
		sorteado = rand()%15+45;
		while(validaCartela(numeroG,i,sorteado) or sorteado==45){
			sorteado = (rand()%15)+45;	
		}
		numeroG[i]=sorteado;
	}
	for(i=0;i<5;i++){
		sorteado = rand()%15+60;
		while(validaCartela(numeroO,i,sorteado) or sorteado==60){
		sorteado = (rand()%15)+60;	
		}
		numeroO[i]=sorteado;
	}
	for(i=0;i<75;i++){
		
		sorteado = rand()%76;
		while(validaCartela(cartela,i,sorteado)){
			sorteado = rand()%76;	
		}
		cartela[i]=sorteado;

	}

	printf("\n\n\n          B    I    N    G    O\n          %d   %d   %d   %d   %d\n          %d   %d   %d   %d   %d\n          %d   %d   @@   %d   %d\n          %d   %d   %d   %d   %d\n          %d   %d   %d   %d   %d\n\n\n",numeroB[0],numeroI[0],numeroN[0],numeroG[0],numeroO[0],numeroB[1],numeroI[1],numeroN[1],numeroG[1],numeroO[1],numeroB[2],numeroI[2],numeroG[2],numeroO[2],numeroB[3],numeroI[3],numeroN[3],numeroG[3],numeroO[3],numeroB[4],numeroI[4],numeroN[4],numeroG[4],numeroO[4]);
	printf("          Cartela gerada com sucesso!!\n          Boa sorte!\n\n");
	system("pause");
	
	while(cont!=24){

		for(i=0;i<75;i++){
			system("cls");	
			printf("Numero sorteado: %d\n\n",cartela[i]);
			printf("Apuração de resultado!!\n\n");
			printf("\n\n\n          B    I    N    G    O\n          %d   %d   %d   %d   %d\n          %d   %d   %d   %d   %d\n          %d   %d   @@   %d   %d\n          %d   %d   %d   %d   %d\n          %d   %d   %d   %d   %d\n\n\n",numeroB[0],numeroI[0],numeroN[0],numeroG[0],numeroO[0],numeroB[1],numeroI[1],numeroN[1],numeroG[1],numeroO[1],numeroB[2],numeroI[2],numeroG[2],numeroO[2],numeroB[3],numeroI[3],numeroN[3],numeroG[3],numeroO[3],numeroB[4],numeroI[4],numeroN[4],numeroG[4],numeroO[4]);
			for(j=0;j<5;j++){
				if(numeroB[j]==cartela[i]){
					numeroB[j]=a;
					cont+=1;
				}
				if(numeroI[j]==cartela[i]){
					numeroI[j]=a;
					cont+=1;
				}
				if(numeroN[j]==cartela[i]){
					if(j!=2){
					numeroN[j]=a;
					cont+=1;		
					}

				}
				if(numeroG[j]==cartela[i]){
					numeroG[j]=a;
					cont+=1;
				}
				if(numeroO[j]==cartela[i]){
					numeroO[j]=a;
					cont+=1;
				}
			}
			cont2+=1;
			system("cls");	
			printf("Numero sorteado: %d\n\n",cartela[i]);
			printf("Total números sorteados: %d\n\n",cont2);
			printf("Total de acertos: %d\n\n",cont);
			
			printf("Apuração de resultado acertos aparecem com o numero 88!!\n\n");
			printf("\n\n\n          B    I    N    G    O\n          %d   %d   %d   %d   %d\n          %d   %d   %d   %d   %d\n          %d   %d   @@   %d   %d\n          %d   %d   %d   %d   %d\n          %d   %d   %d   %d   %d\n\n\n",numeroB[0],numeroI[0],numeroN[0],numeroG[0],numeroO[0],numeroB[1],numeroI[1],numeroN[1],numeroG[1],numeroO[1],numeroB[2],numeroI[2],numeroG[2],numeroO[2],numeroB[3],numeroI[3],numeroN[3],numeroG[3],numeroO[3],numeroB[4],numeroI[4],numeroN[4],numeroG[4],numeroO[4]);		
			system("pause");
			if(cont==24){
				system("cls");
				printf("\n\n\n          Parabens você ganhou!!!\n\n");
				printf("          Último número: %d\n\n\n",cartela[i]);
				system("pause");
				exit(1);
			}
		}
	}	

}
	

int main(){
	int opcao;
	setlocale(LC_ALL,"Portuguese");
	
	opcao=menu();
	
    while(opcao != 2){ 
    switch(opcao){
    	case 1:
			sorteio();
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
