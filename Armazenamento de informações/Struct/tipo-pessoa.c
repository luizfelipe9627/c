// Usado para adicionar pessoas em uma lista conforme o usuário vai preenchendo, e assim as informações ficam armazenadas e em seguida imprimi ela na tela.

#include <stdio.h>
#include <stdlib.h>

#define TAM 2 // Define a quantidade de entrada de pessoas na lista.

struct tipo_pessoa {
  char nome[50];
  char telefone[20];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
  int i;

  tipo_pessoa lista[TAM];

  for (i = 0; i < TAM; i++) {
    printf("Insira um nome: \n");
    gets(lista[i].nome); // Usado para ler o nome armazenado dentro do vetor de linha de lista.
    fflush(stdin);

    printf("Insira um número de telefone: \n");
    gets(lista[i].telefone); // Usado para ler o telefone armazenado armazenado dentro do vetor de lista.
    fflush(stdin);
  }
  system("clear"); // Usado para limpar a tela do terminal.
  printf("Os dados inseridos foram: \n \n");

  for (i = 0; i < TAM; i++) {
    printf("%s - %s \n", lista[i].nome, lista[i].telefone);
  }  
}




