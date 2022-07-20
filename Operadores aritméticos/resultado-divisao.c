// Algoritmo responsável por verificar o quociente e resto de uma divisão dada pelo o usuário, assim imprimindo o resultado na tela.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, quo, res;
  printf("Digite o dividendo: \n");
  scanf("%d", &num1);
  printf("Digite o divisor: \n");
  scanf("%d", &num2);

  quo = num1 / num2;
  res = num1 % num2;

  printf("\nO quociente da divisão é: %d \n", quo);
  printf("O resto da divisão é: %d \n", res);
}