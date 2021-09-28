#include<stdio.h>
#include<stdlib.h>

float nota[4][2],media[4],soma;

int main(){
	int i,j;
	
	for(i=0;i<4;i++){
		soma=0;
		for(j=0;j<2;j++){
			printf("\nDigite a %d nota: ",j+1);
			scanf("%f",&nota[i][j]);
			soma+=nota[i][j];
		}
		media[i]=soma/2;	
	}
	
	printf("\n");

	
	for(i=0;i<4;i++){
		printf("Media do %d Aluno: %.2f\n",i+1,media[i]);
		if(media[i]>=7){
			printf("Aluno aprovado!\n\n");
		}else{
			printf("Aluno reprovado!\n\n");
		}
	}
	
return(0);
}
