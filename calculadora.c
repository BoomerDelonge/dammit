#include<stdio.h> 

void main (){
	int a, b, r;
	char op;
	printf("ingrese primer entero:");
	scanf("%d",&a);
	printf("ingrese segundo entero:");
	scanf("%d",&b);
	printf("Ingrese operador + - * /"); 
	scanf("%c",&op);
	
	switch(op){
		case '+' : r = a + b ; break;
		case '-' : r = a - b ; break;
		case '*' : r = a * b ; break;
		case '/' : r = a / b ; break;
		   }

	printf("el resultado de %d%c%d es %d\n",a,op,b,r);
}
