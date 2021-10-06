#include<stdio.h>
#include<stdlib.h>

float nvSalario;


struct salarios{
	char nome[100];
	float sal,reajuste;
};


struct salarios salario;

void calc_sal(float reajuste){
	nvSalario=salario.sal*(1+(salario.reajuste/100));
	printf("Seu salario com reajuste sera: %.2f",nvSalario);	
}

int main(){
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(salario.nome);
	
	printf("Digite seu salario: ");
	scanf("%f",&salario.sal);
	
	printf("Digite seu salario: ");
	scanf("%f",&salario.reajuste);

	calc_sal(salario.reajuste);
	
}
