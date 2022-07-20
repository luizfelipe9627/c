/* Algoritmo responsável por imprimir se o número que o usuário digitou é positivo, negativo ou neutro, no caso 0. */

#include <stdio.h>
#include <stdlib.h> 

int main() {
  int num;
  
  printf("Digite um número: \n");
  scanf("%d", &num);
  fflush(stdin);

  if (num > 0) {
    printf("O número digitado é um valor positivo. \n");
  } else {
    if (num < 0) {
      printf("O número digitado é um valor negativo. \n");
    } else if (num == 0) {
      printf("O número digitado não é positivo nem negativo. \n");
    }
  }
}
