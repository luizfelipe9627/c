/* Verifica e imprimi no terminal qual é o maior número e qual é o menor dos 5 números digitados pelo usuário. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, maior, menor;

  printf("Digite o 1º número: \n");
  scanf("%d", &num);
  fflush(stdin);
  maior = num;
  menor = num;

  printf("Digite o 2º número: \n");
  scanf("%d", &num);
  fflush(stdin);
  if(num > maior) {
    maior = num;
  } else {
    menor = num;
  }

  printf("Digite o 3º número: \n");
  scanf("%d", &num);
  fflush(stdin);
  if(num > maior) {
    maior = num;
  } else {
    menor = num;
  }

  printf("Digite o 4º número: \n");
  scanf("%d", &num);
  fflush(stdin);
  if(num > maior) {
    maior = num;
  } else {
    menor = num;
  }

  printf("Digite o 5º número: \n");
  scanf("%d", &num);
  fflush(stdin);
  if(num > maior) {
    maior = num;
  } else {
    menor = num;
  }

  printf("\nO maior número é: %d \n", maior);
  printf("O menor número é: %d \n", menor);
}
