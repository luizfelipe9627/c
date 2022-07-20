/* Faz a soma do primeiro e segundo número digitado pelo o usuário. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, total;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  fflush(stdin);

  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  fflush(stdin);

  total = num1 + num2;

  printf("\nA soma dos números é: %d \n", total);
}
