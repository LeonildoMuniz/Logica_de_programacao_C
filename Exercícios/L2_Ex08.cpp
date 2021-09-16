#include <stdio.h>
#include <stdlib.h>

int i,cont,a[4],result[4];

int main(){
	
	cont=0;
	
	for (i=0;i<4;i++){
		printf("Digite o %d valor: ",i+1);
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<4;i++){
		if(a[0]>a[i]){
			cont+=1;
		}
	}
	result[cont]=a[0];	
	cont=0;
	
	for(i=0;i<4;i++){
		if(a[1]>a[i]){
			cont+=1;
		}
	}
	result[cont]=a[1];	
	cont=0;
	
	for(i=0;i<4;i++){
		if(a[2]>a[i]){
			cont+=1;
		}
	}	
	result[cont]=a[2];	
	cont=0;
	
	for(i=0;i<4;i++){
		if(a[3]>a[i]){
			cont+=1;
		}	
	}
	result[cont]=a[3];	
		
	printf("\nOrdem crescente dos numeros: \n");
	
	for(i=0;i<4;i++){
		printf("\n%d",result[i]);	
		
	}
}
