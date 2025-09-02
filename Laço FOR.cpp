#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

main(){
	int num, i;
	  printf("\n Digite um numero de 2 a 9 \n");
	  scanf("%d", &num);
	  printf("TABUADA DO: %d \n \n", num);
	
	for(i=1; i<=10; i++){
		printf("%d x %d = %2d \n", num, i, num*i); //o primeiro '%d' se refere ao numero da tabuada; o segundo '%d' se refere ao indice (i), sendo do 1 ao 10; e o '%2d' se refere ao numero digitado multiplicado pelos indices, ou seja, do 1 ao 10.
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
}
