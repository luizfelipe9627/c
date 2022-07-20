/* Programa que recebe o salário de um funcionário e o código do cargo, com essas informações apresenta o cargo, o valor do aumento e o novo salário na tela. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int cargo;
  float salario, aumento, salario_final;

  printf("Digite o código do cargo do funcionário: \n");
  scanf("%d", &cargo);
  fflush(stdin);
  printf("Digite o valor do salário do funcionário: \n");
  scanf("%f", &salario);
  fflush(stdin);

  switch (cargo) {
  case 1:
    printf("\n===========================================");
    printf("\nCargo selecionado: Servente \n");
    printf("===========================================\n");
    printf("Salário atual: %3.f \n", salario);
    aumento = salario * 0.40;
    printf("O aumento salarial de 40%% foi de: %3.f \n", aumento);
    salario_final = salario + aumento;
    printf("O novo salário será: %3.f \n", salario_final);
    printf("===========================================\n");
    break;
  case 2:
    printf("\n===========================================");
    printf("\nCargo selecionado: Pedreiro \n");
    printf("===========================================\n");
    printf("Salário atual: %3.f \n", salario);
    aumento = salario * 0.35;
    printf("O aumento salarial de 35%% foi de: %3.f \n", aumento);
    salario_final = salario + aumento;
    printf("O novo salário será: %3.f \n", salario_final);
    printf("===========================================\n");
    break;
  case 3:
    printf("\n===========================================");
    printf("\nCargo selecionado: Mestre de obras \n");
    printf("===========================================\n");
    printf("Salário atual: %3.f \n", salario);
    aumento = salario * 0.20;
    printf("O aumento salarial de 20%% foi de: %3.f \n", aumento);
    salario_final = salario + aumento;
    printf("O novo salário será: %3.f \n", salario_final);
    printf("===========================================\n");
    break;
  case 4:
    printf("\n===========================================");
    printf("\nCargo Selecionado: Técnico de segurança \n");
    printf("===========================================\n");
    printf("Salário atual: %3.f \n", "R$", salario);
    aumento = salario * 0.10;
    printf("O aumento salarial de 10%% foi de: %3.f \n", aumento);
    salario_final = salario + aumento;
    printf("O novo salário será: %3.f \n", salario_final);
    printf("===========================================\n");
    break;
  default:
    printf("\nCargo inexistente. \n");
    break;
  }
}
