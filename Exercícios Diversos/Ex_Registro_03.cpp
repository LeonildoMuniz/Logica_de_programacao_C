#include<stdio.h>
#include<stdlib.h>

float nvSalario;


struct salarios{
	char nome[100];
	float sal,reajuste;
};


struct salarios salario;

float calc_sal(float reajuste){
	nvSalario=salario.sal*(1+(salario.reajuste/100));
	return nvSalario;	
}

int main(){
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(salario.nome);
	
	printf("Digite seu salario: ");
	scanf("%f",&salario.sal);
	
	printf("Digite seu salario: ");
	scanf("%f",&salario.reajuste);

	nvSalario=calc_sal(salario.reajuste);
	printf("Seu novo salario e: %.2f",nvSalario);
	
	return 0;
	
}
