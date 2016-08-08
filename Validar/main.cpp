#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a, b, c, B1, r, tn, tp;
	
	printf("\n Ingrese a: ");
	scanf("%f", &a);
	printf("\n Ingrese b: ");
	scanf("%f", &b);
	printf("\n Ingrese c: ");
	scanf("%f", &c);
	
	if(a!=0){
		B1=b*b;
		r=B1-4*a*c;
		if(r>0){
			tn=(-b+sqrt(B1-4*a*c))/(2*a);
			printf("\n X1 =  %.2f", tn);
			tp=(-b-sqrt(B1-4*a*c))/(2*a);
			printf("\n X2 =  %.2f", tp);
			}
		else{
			printf("\nResultado imaginario");
		}
		
		}
		else{
			printf("\t MATH ERROR");
		}
	return 0;
}
