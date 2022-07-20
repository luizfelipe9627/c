/* Quando o usuário manda um número o programa é verifica a opção selecionada e aplica uma resposta. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int mes;

  printf("Digite o número do mês: \n");
  scanf("%d", &mes);
  fflush(stdin);

  switch (mes) {
  case 1:
    printf("\nO número digitado corresponde ao mês Janeiro. \n");
    break;
  case 2:
    printf("\nO número digitado corresponde ao mês Fevereiro. \n");
    break;
  case 3:
    printf("\nO número digitado corresponde ao mês Março. \n");
    break;
  case 4:
    printf("\nO número digitado corresponde ao mês Abril. \n");
    break;
  case 5:
    printf("\nO número digitado corresponde ao mês Maio. \n");
    break;
  case 6:
    printf("\nO número digitado corresponde ao mês Junho. \n");
    break;
  case 7:
    printf("\nO número digitado corresponde ao mês Julho. \n");
    break;
  case 8:
    printf("\nO número digitado corresponde ao mês Agosto. \n");
    break;
  case 9:
    printf("\nO número digitado corresponde ao mês Setembro. \n");
    break;
  case 10:
    printf("\nO número digitado corresponde ao mês Outubro. \n");
    break;
  case 11:
    printf("\nO número digitado corresponde ao mês Novembro. \n");
    break;
  case 12:
    printf("\nO número digitado corresponde ao mês Dezembro. \n");
    break;
  default:
    printf("\nMês inexistente. \n");
    break;
  }
}
