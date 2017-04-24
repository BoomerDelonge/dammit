#include<stdio.h>
int suma(int [], int); // Prototipo

void main(void){
	int q=10, i, x[10];
	for (i=0; i <10; i++) { 
		printf("n[%d]=",i+1);
		scanf("%d",&x[i]);}
	printf("La media es: %f\n", suma(x, q)/(float)q);}

int suma(int nn[], int n){ // Definición
	int i, sum = 0, x[i] ;
	
	for(i=0; i<10; i++) sum += nn[i];
	return sum;}
