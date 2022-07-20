/* Lê o numero positivo inteiro digitado e apresenta o quadrado e a raiz quadrada deste número. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int num, quad;
  float raiz;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  raiz = sqrt(num); // Calcula a raiz quadrada do número digitado.
  quad = pow(num, 2); // Faz o número digitado ser elevado a 2.

  printf("A raiz quadrada do número digitado é: %.3f \n", raiz);
  printf("O quadrado do número digitado é: %d \n", quad);
}