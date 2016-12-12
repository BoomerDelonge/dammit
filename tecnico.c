#include<stdio.h>
char cat;
int  l, p1, ds, s;
float d, pt;
void main(){

	printf("Ingrese categoria del tecnico:");
	scanf("%c",&cat);
	printf("Ingrese numero de desktops arregladas:");
	scanf("%d",&ds);
	printf("Ingrese numero de laptops arregladas:");
	scanf("%d",&l);
	switch(cat){
		case 'A' : ( p1 = (30*l) + (20*ds) ); break;
		case 'B' : ( p1 = (50*l) + (30*ds) ); break;
		case 'C' : ( p1 = (100*l) + (50*ds) ); break;
		    }
		s = l + ds ;
	
			if(s > 9){d = 0.25*p1 ; pt = 0.75*p1;}
			else
				if(s > 5) {d = 0.20*p1; pt = 0.80*p1;}
						else 
							if(s > 2) {d = (0.10)*p1; pt =  0.90*p1;}
														
	printf("el pago sera: %f\n",pt);
	printf("el descuento sera: %f\n",d);
	}
