#include <stdio.h>
#include <stdlib.h>

int idade;

int main(){

	printf("\nDigite a idade: ");
	scanf("%d",&idade);
	
	if(idade<16){
		printf("%d anos Nao eleitor! \n",idade);
	
	}
	
	if(idade>=18 and idade<=65){
			printf("%d anos Eleitor obrigatorio! \n",idade);
	}
	
	if(idade>=16 and idade<18){
		printf("%d anos Eleitor facultativo\n",idade);
	}
	
	if(idade>65){
		printf("%d anos Eleitor facultativo\n",idade);		
	}
	

	return(0);  

}

