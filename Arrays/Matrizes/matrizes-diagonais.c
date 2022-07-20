// Algoritmo criado com o intuito de fazer uma ordenação diagonal a partir de vetores na qual os valores são digitados pelo o usuário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int mat[3][3];
  int i, j;

  for (i = 0; i <= 2; i++) {
    for (j = 0; j <= 2; j++) {
      printf("Insira o elemento da linha %d, coluna %d (mat[%d][%d]):", i+1, j+1, i , j); 
      scanf("%d", &mat[i][j]);
      fflush(stdin);
    }
  }

  for (i = 0; i <= 2; i++) {
    printf("\n");
    for (j = 0; j <= 2; j++) {
      if (i == j) {
        printf("%d ", mat[i][j]);
      } else {
        printf("0 ");
      }
    }
    printf("\n");
  }
}