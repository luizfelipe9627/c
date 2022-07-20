/* Lê quatro número inteiro digitados e soma eles e apresenta a média aritmética entre eles através da divisão. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  float num1, num2, num3, num4, media;

  printf("Digite o primeiro número inteiro: ");
  scanf("%f", &num1);
  printf("Digite o segundo número inteiro: ");
  scanf("%f", &num2);
  printf("Digite o terceiro número inteiro: ");
  scanf("%f", &num3);
  printf("Digite o quarto número inteiro: ");
  scanf("%f", &num4);

  media = (num1 + num2 + num3 + num4) / 2;

  printf("A média dos números digitados é: %.2f \n", media);
}