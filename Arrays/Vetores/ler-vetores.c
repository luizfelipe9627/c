#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int num[10], i;
  
 for (i = 0; i < 10; i++) { // Irá ler o número que o usuário colocar 9 vezes.
    printf("Digite o %d elemento do vetor: \n", i);
    scanf("%d", &num[i]);
    fflush(stdin);
 }
  printf("Vetor preenchido: \n"); // Irá apresentar o resultado do FOR anterior 9 vezes.
  for ( i = 0; i < 10; i++) {
    printf("O elemento da posição %d é: %d \n", i, num[i]);
  }
}