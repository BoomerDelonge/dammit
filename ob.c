#include<stdio.h>
int prom_ob(int[],int);
void main(){
	int i, x[5],q;
	printf("Ingrese la produccion de cada obrero:\n");
	q=1;
	do{for(i=0;i<5;i++){
	printf("(mes:%d) [%d] =",q,i+1);
	scanf("%d",&x[i]);}
	q++;
	printf("_____________\n");}
	while(q<6);
	printf("%d", prom_ob(x,i));}
	
int prom_ob(int s[], int m){
	int i, prom=0, x[i],q;
	for(i=1;i<5;i++){ 
	{for(q=1;q<6;q++){
	prom=s[i];
	}}
	return prom;}}
	
	
	
