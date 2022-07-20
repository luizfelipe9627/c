/* Quando o usuário manda um número o programa é verifica se é divisível por 3 ou não, e devolve uma resposta conforme a condição. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;

  printf("Digite um número: \n");
  scanf("%d", &num);
  fflush(stdin);

  if (num % 3 == 0) {
    printf("\nO número é divisível por 3. \n");
  } else {
    printf("\nO número não é divisível por 3. \n");
  } if (num % 7 == 0) {
    printf("\nO número é divisível por 7. \n");
  } else {
    printf("O número não é divisível por 7. \n");
  }
}
