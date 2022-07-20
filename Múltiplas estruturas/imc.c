/* Algoritmo que pega as informações de peso e altura inseridas pelo o usuário e calcula o peso do usuário conforme o padrão IMC. */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float peso, altura, IMC;
  char repetir;

  do {
    printf("Digite o seu peso: \n");
    scanf("%f", &peso);
    fflush(stdin);
    
    printf("Digite a sua altura: \n");
    scanf("%f", &altura);
    fflush(stdin);

    IMC = peso / (altura * altura); // Ou pow(altura, 2).

    printf("\nO seu resultado IMC é: %.2f \n", IMC);

    if (IMC < 21.0) {
      printf("Você está abaixo do peso.");
    } else if (IMC >= 21.0 && IMC <= 30.75) {
      printf("Você está no peso padrão.");
    } else {
      printf("Você está acima do peso.");
    }

    printf("\n \nDeseja executar o algoritmo novamente? Se sim digite Y. \n");
    scanf("%c", &repetir);
    scanf("%c", &repetir);
    fflush(stdin);
  } while (repetir == 'Y' || repetir == 'y');
}
