#include<stdio.h>
int ex, s, m, p, z, p1;
int main (){
	printf("ingrese años de exp:");
	scanf("%d",&ex);
	printf("ingrese numero de mesas producidas:");
	scanf("%d",&m);
	printf("ingrese numero de sillas producidas:");
	scanf("%d",&s);
	
	if(ex > 20)
		p1 = 25*s + 40*m ;
	else 
		if(ex > 5)
			p1 = 35*s + 60*m;
		else 
			p1 = 20*s + 30*m;

	z = m + s;

	if(z > 20)
		p = 1,5*p1;
	else 
		if(z > 5)
			p = 1,2*p1;
		else 
			p = p1;

	printf("el pago sera: %d\n",p);
