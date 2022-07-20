/* Algoritmo que a partir do raio de um circulo dado a ele, calcula a área e o perímetro do valor digitado. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141593

int main() {
  float r, a, p;

  printf("Digite o valor do raio: ");
  scanf("%f", &r);
  fflush(stdin);

  a = pi * pow(r, 2);
  p = 2 * pi * r;

  printf("\nO valor da área é: %f ", a);
  printf("\nO valor do perímetro é %f \n", p);
}