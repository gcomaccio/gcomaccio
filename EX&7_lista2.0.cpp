#include <stdio.h>   // biblioteca padr�o para entrada e sa�da (printf, scanf)
#include <conio.h>   // biblioteca usada para getch() (pausar o programa)

main() { // in�cio da fun��o principal
    int I;          // vari�vel inteira para armazenar a escolha do usu�rio (1, 2 ou 3)
    float A, B, C;  // vari�veis de ponto flutuante para armazenar os 3 n�meros digitados

    // Entrada dos n�meros
    printf("\nDigite o valor de A: ");  // pede para o usu�rio digitar A
    scanf("%f", &A);                    // l� e guarda o valor de A

    printf("\nDigite o valor de B: ");  // pede para o usu�rio digitar B
    scanf("%f", &B);                    // l� e guarda o valor de B

    printf("\nDigite o valor de C: ");  // pede para o usu�rio digitar C
    scanf("%f", &C);                    // l� e guarda o valor de C

    // Menu de escolha
    printf("\nDigite 1 para ordem crescente");      // mostra op��o 1
    printf("\nDigite 2 para ordem decrescente");    // mostra op��o 2
    printf("\nDigite 3 para maior numero no meio"); // mostra op��o 3
    printf("\nSua escolha: ");                      // pede para o usu�rio escolher
    scanf("%d", &I);                                // l� e guarda a escolha em I

    // Estrutura switch para decidir o que fazer com base na escolha do usu�rio
    switch(I) {
    case 1:
	
	if(A<=B && A<=C){ // se A for o menor
		if (B<=C) printf("\n%.2f, %.2f, %.2f", A, B, C); // Ordem A, B, C
		else printf("\n%.2f, %.2f, %.2f", A, C, B);} // Ordem A, C, B
		else if (B<=A && B<=C){
			if (A<=C) printf("\n%.2f, %.2f, %.2f", B, A, C);  // Ordem B, A, C
			else printf("\n%.2f, %.2f, %.2f", B, C, A);} // Ordem B, C, A
			else if (C<=A && C<=B){
				if (A<=B) printf("\n%.2f, %.2f, %.2f", C, A, B); // Ordem C, A, B
				else printf("\n%.2f, %.2f, %.2f", C, B, A); // Ordem C, B, A
			}
			break;
			case 2:
				if (A>=B && A>=C){
				if (B>=C)printf("\n%.2f, %.2f, %.2f", C, B, A);
				else printf("\n%.2f, %.2f, %.2f", B, C, A);}
				else if (B>=A && B>=C){
					if (A>=C) printf("\n%.2f, %.2f, %.2f", C, A, B);
					else printf("\n%.2f, %.2f, %.2f", A, C, B);}
					else if (C>=A && C >=B){
					 if (A>=B) printf("\n%.2f, %.2f, %.2f", B, A, C);
					 else printf("\n%.2f, %.2f, %.2f", A, B, C);}
				  
				  break;
			
			case 3: 
			if (A>=B && A>=C){
				printf("\n%.2f, %.2f, %.2f", B, A, C);}
				else if (B>=A && B>= C){
					printf("\n%.2f, %.2f, %.2f", A, B, C);}
					else {printf("\n%.2f, %.2f, %.2f", A, C, B);
					}
			break;
		default: if(I!= 1, 2, 3){
		printf("\n%.2f, %.2f, %.2f", A, B, C);
		}
			
			
		}
			
			
			
			
			
			
				
			
				
	
		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			

			
			getch();
			}
