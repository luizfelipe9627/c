/* Exibir número inteiro digitado na tela. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;

	printf("Digite um número inteiro: \n");
	scanf("%d", &num);
	fflush(stdin);

	printf("O número inteiro digitado é: %d", num);
}