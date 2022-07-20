/* Programa que recebe o salário de um funcionário e o código do cargo, com essas informações apresenta o cargo, o valor do aumento e o novo salário na tela. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int cod_estado, peso, cod_carga;
  float imposto, taxa_imp, preco, preco_quilo, total;

  printf("Digite o código do estado: \n");
  scanf("%d", &cod_estado);
  printf("Digite o peso da carga em toneladas: \n");
  scanf("%d", &peso);
  printf("Digite o código da carga: \n");
  scanf("%d", &cod_carga);

  switch (cod_estado) {
  case 1:
    taxa_imp = 0.20;
  case 2:
    taxa_imp = 0.15;
  case 3:
    taxa_imp = 0.10;
  case 4:
    taxa_imp = 0.05;
    break;
  default:
    printf("\nCódigo de estado inválido. \n");
    break;
  }

  if (cod_carga > 10 && cod_carga <= 20) {
    preco_quilo = 180;
  } else if (cod_carga > 21 && cod_carga <= 30) {
    preco_quilo = 120;
  } else if (cod_carga > 31 && cod_carga <= 40) {
    preco_quilo = 230;
  } else {
    printf("\nCódigo de carga inválido.\n");
  }

  imposto = peso * 1000 * preco_quilo * taxa_imp;
  preco = peso * 1000 * preco_quilo;
  total = preco + imposto;

  printf("\n===========================================\n");
  printf("O peso em KG é: %d \n", peso * 1000);
  printf("O preço é: %.2f \n", preco);
  printf("O imposto é: %.2f \n", imposto);
  printf("O total é: %.2f \n", total);
  printf("===========================================\n");
}
