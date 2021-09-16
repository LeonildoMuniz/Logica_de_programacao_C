#include<stdio.h>
#include<stdlib.h>

int a[100],b,c,d,maior,cont;

int main(){

	b=0;
	c=1;
	
	while(c!=0){
		
		printf("\nDigite o %d valor, para encerrar digite 0: ",b+1);
		scanf("%d",&a[b]);
		c=a[b];
		b+=1;		
	}
	
	for(c=0;c<=b;c++){
		for(d=0;d<b;d++){
			if(a[c]>=a[d]){
				cont+=1;
			}
		}
		if(cont==b){
			maior=a[c];	
		}
		cont=0;
	}
	
	printf("\nO maior numero digitado foi: %d",maior);
	
	return(0);
	
}
