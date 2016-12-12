#include<stdio.h>
int a;
void main(void)
{
	printf("ingrese un número entero:\n");
	scanf("%d",a);
	if(a%2==0)
		printf("%d es un número par\n",a);
	else
		printf("%d no es par\n",a);
	
}
