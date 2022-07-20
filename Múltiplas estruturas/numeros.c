// Algoritmo responsável por pegar os números inseridos pelo o usuário e mostrar na tela a media dos números, o maior e menor número e qual é impar ou par.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int numero, soma, quantidade, maior, menor, pares, impares;
  float media;
  numero = 1;
  
  while (numero != 0) {
    printf("Digite um número: \n");
    scanf("%d", &numero);
    fflush(stdin);

    if(numero != 0) {
      quantidade++;
      soma = soma + numero;
    } if(numero % 2 == 0 && numero != 0) {
      pares++;
    } else if(numero % 2 == 1 && numero !=0) {
      impares++;
    } if(numero > maior && numero != 0) {
      maior = numero;
    } if(numero < menor && numero != 0) {
      menor = numero;
    }
  }
  media = soma / quantidade;
  printf("\nA média dos números é: %.2f", media);
  printf("\nO maior número é: %d", maior);
  printf("\nO menor número é: %d", menor);
  printf("\nOs números pares são: %d", pares);
  printf("\nOs números impares são: %d", impares);
}
