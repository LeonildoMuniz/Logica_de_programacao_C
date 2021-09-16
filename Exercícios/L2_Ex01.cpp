#include <stdio.h>
#include <stdlib.h>

int num,i;

int main(){
	num=1;
	for(i=1;i<=200;i++){
		if(num % 4 == 0){
			printf("O numero %d e divivel por 4 \n",num);
		}
	num=num+1;
	}
return(0);	
}

