#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main (){
float A, B, C;
int op;

printf("\n Digite 1 para Ordem Crescente: \n");
scanf("%d", &op);

printf("\n Selecionado: Ordem Crescente\n");


printf("\n Digite um numero aleatorio: \n");
scanf("%f", &A);

printf("\n Digite outro numero aleatorio: \n");
scanf("%f", &B);	

printf("\n Digite outro numero aleatorio: \n");
scanf("%f", &C);

switch(op) {
	case 1: if(A >=B && A>=C){
		if(B>=C)printf("%f,%f,%f", C, B, A);
		else printf("%f,%f,%f", B, C, A);}
		else if (B>=A && B>=C){
			if (A>=C) printf("%f,%f,%f", C, A, B);
			else printf("%f,%f,%f", A, C, B);}
			else if (C>=A && C>=B){
				if (A>=B) printf("%f,%f,%f", B, A, C);
				else printf("%f,%f,%f", A, B, C);}
			
	
        
		break;
	}
		
	getch();
}
