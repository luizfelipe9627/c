/* Mostra uma mensagem de boas vindas com o nome digitado. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  char name[20]; // Permite até 20 letras.

  printf("Digite seu nome: \n");
  gets(name);
  fflush(stdin);

  printf("\nSeja muito bem vindo(a), %s \n", name);
}