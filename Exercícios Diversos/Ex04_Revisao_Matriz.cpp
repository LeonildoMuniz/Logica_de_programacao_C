#include<stdio.h>
#include<stdlib.h>

float soma,subt,divi,mult,num1,num2;
int op;


calc_soma(){
	soma=num1+num2;
	printf("Valor da soma e: %.2f",soma);
	
}

calc_sub(){
	subt=num1-num2;
	printf("Valor da subtracao e: %.2f",subt);
}

calc_div(){
	divi=num1/num2;
	printf("Valor da divisao e: %.2f",divi);
}

calc_mult(){
	mult=num1*num2;
	printf("Valor da multiplicacao e: %.2f",mult);
	
}

ent_vlr(){
	printf("Digite o primeiro valor: ");
	scanf("%f",&num1);
	printf("Digite o segundo valor: ");
	scanf("%f",&num2);
	printf("Escolha a opção: \n 1-Soma\n 2-Subtração\n 3-Divisao \n 4-Multiplicacao\n Escolha a opcao: ");
	scanf("%d",&op);
	
switch (op)
{

	case 1:
		calc_soma();
	break; 
		
	case 2:
		calc_sub();
	break; 
	
	case 3:
		calc_div();
	break; 
	
	case 4:
		calc_mult();
	break; 
	
	default:
	printf("Opcao nao encontrada!");
}	
}



int main(){
	ent_vlr();
return(0);
}
