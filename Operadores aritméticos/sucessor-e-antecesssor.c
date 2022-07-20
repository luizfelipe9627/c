/* Com base no número digitado pelo o usuário mostra na tela o número sucessor e antecessor do número digitado. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);
  fflush(stdin);

  printf("\nO número sucessor é: %d", num + 1); // Irá acrescentar um número do num;
  printf("\nO número antecessor é: %d \n", num - 1); // Irá retirar um número do num;
}
