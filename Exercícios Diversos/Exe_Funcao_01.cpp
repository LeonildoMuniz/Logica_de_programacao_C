#include<stdio.h>
#include<stdlib.h>

float soma,subt,divi,mult,num1,num2;
int op;


float calc_soma(int num1,int num2){
	soma=num1+num2;
	return soma;
	
}

float calc_sub(int num1,int num2){
	subt=num1-num2;
	return subt;
}

float calc_div(int num1,int num2){
	divi=num1/num2;
	return divi;
}

float calc_mult(int num1,int num2){
	mult=num1*num2;
	return mult;
	
}

ent_vlr(){

	printf("Escolha a opção: \n 1-Soma\n 2-Subtracao\n 3-Divisao \n 4-Multiplicacao\n Escolha a opcao: ");
	scanf("%d",&op);
	
	switch (op)
	{
		case 1:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			soma=calc_soma(num1,num2);
			printf("Valor da soma: %.2f",soma);
		break; 
			
		case 2:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			subt=calc_sub(num1,num2);
			printf("Valor da subtracao: %.2f",subt);
		break; 
		
		case 3:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			divi=calc_div(num1,num2);
			printf("Valor da divisao: %.2f",divi);
		break; 
		
		case 4:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			mult=calc_mult(num1,num2);
			printf("Valor da Multiplicacao: %.2f",mult);
		break; 
		
		default:
		printf("Opcao nao encontrada!");
	}	
}



int main(){
	ent_vlr();
return(0);
}
