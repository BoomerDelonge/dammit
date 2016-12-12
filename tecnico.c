#include<stdio.h>

char cat;
int  l, ds, p1, pt, d;

void main(){

	printf("Ingrese categoria del tecnico:\n");
	scanf("%c",&cat);
	printf("Ingrese numero de laptops y desktops arregladas respectivamente\n");
	scanf("%d %d \n",&l,&d);
	switch(cat){
		case 'A' : ( p1 = 30*l + 30*ds ); break;
		case 'B' : ( p1 = 50*l + 30*ds ); break;
		case 'C' : ( p1 = 100*l + 50*ds ); break;
		    }
	pt = 0.9 * p1 ;
	d = 0.1 * p1 ;
	
	printf("el pago sera: %d\n",pt);
	printf("el descuento sera: %d\n",d);
}
