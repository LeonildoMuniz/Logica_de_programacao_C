#include<stdio.h>
#include<stdlib.h>

float a[100],soma,media;

int main(){
	
	int c,b,i;
	b=0;
	i=0;
	while(b!=-99){
		
		printf("\nDigite o %d valor, para finalizar digite -99: ",i+1);
		scanf("%f",&a[i]);
		b=a[i];
		i+=1;
		
	}
	
	for (c=0;c<i;c++){
		soma+=a[c];
	}
	
	
	printf("\n\nValor da soma dos numeros lidos = %.2f",soma);
	printf("\n\nValor da media dos numeros lidos = %.2f",soma/i);
	
}
