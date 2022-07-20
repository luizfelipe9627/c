// Algoritmo que pede um nome ao usuário e quando ele digitado isso é repetido na tela por o tanto de vezes que foi atribuído no I.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  char nome[30];
  int i;

  printf("Informe um nome: \n");
  scanf("%s", &nome);
  fflush(stdin);

  for (i = 0; i <= 5; i++) {
    printf("\n %s", nome);
  }
}