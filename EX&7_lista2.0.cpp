#include <stdio.h>   // biblioteca padrão para entrada e saída (printf, scanf)
#include <conio.h>   // biblioteca usada para getch() (pausar o programa)

main() { // início da função principal
    int I;          // variável inteira para armazenar a escolha do usuário (1, 2 ou 3)
    float A, B, C;  // variáveis de ponto flutuante para armazenar os 3 números digitados

    // Entrada dos números
    printf("\nDigite o valor de A: ");  // pede para o usuário digitar A
    scanf("%f", &A);                    // lê e guarda o valor de A

    printf("\nDigite o valor de B: ");  // pede para o usuário digitar B
    scanf("%f", &B);                    // lê e guarda o valor de B

    printf("\nDigite o valor de C: ");  // pede para o usuário digitar C
    scanf("%f", &C);                    // lê e guarda o valor de C

    // Menu de escolha
    printf("\nDigite 1 para ordem crescente");      // mostra opção 1
    printf("\nDigite 2 para ordem decrescente");    // mostra opção 2
    printf("\nDigite 3 para maior numero no meio"); // mostra opção 3
    printf("\nSua escolha: ");                      // pede para o usuário escolher
    scanf("%d", &I);                                // lê e guarda a escolha em I

    // Estrutura switch para decidir o que fazer com base na escolha do usuário
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
