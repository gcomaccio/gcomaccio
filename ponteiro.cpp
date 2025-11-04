#include <stdio.h>
#include <stdlib.h>
// Função vazia para declarar os ponteiros
void troca(int *a, int *b){
	int tmp;
//Ponteiro de a = tmp
	tmp = *a;
//Ponteiro de a recebe o ponteiro de b
	*a = *b;
//Ponteiro de b = tmp
	*b = tmp;
} 
// Função Main
int main(){
//	Declarado os valores de a e b
	int a = 30, b = 19;
//Chamo a função troca com os parâmetros de endereço de a e b ja trocados
	troca(&a, &b);
//Imprime os valores de a e b
	printf("a: %d e b: %d", a, b);
	return 0;
}
