#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float x,x2,y,y2,distancia;

int main(){
	
	scanf("%f %f",&x,&y);
	scanf("%f %f",&x2,&y2);
	
	distancia=pow(((pow((x2-x),2))+(pow((y2-y),2))),0.5);

	printf("%.4f\n",distancia);
	
	return(0);
	
}
