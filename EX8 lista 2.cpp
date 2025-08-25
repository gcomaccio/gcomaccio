#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<math.h>

main()
{
  float num1, num2, soma, raiz;
  int op;
  
printf ("\n Digite 1 ou 2 para selecionar uma das opcoes abaixo: ");
  printf ("\n 1-Somar dois numeros: ");
    printf ("\n 2-Raiz quadrada de um numero: ");
    printf ("\n Digite sua opcao desejada: "); 
  
scanf("%d",&op);
  switch(op) 
	{
	 case 1:printf ("\n Digite os numeros abaixo:");
    scanf("%f", &num1);
    scanf("%f", &num2);
               soma = (num1 + num2);
          printf("\n Resultado da soma: %f ", soma);
             break;
			           
    case 2: printf ("\n Raiz quadrada do numero:");
    scanf("%f", &num1);
    raiz = pow(num1, 0.5); // usa somente 0.5 ou 0.3 para raizes quadradas e cúbicas em POW.
    printf("\n Resultado da raiz: %f ", raiz);
             break;
     default:printf ("Opcao invalida. Por favor, selecione entre 1 ou 2."); 
    }
    getch();
}
