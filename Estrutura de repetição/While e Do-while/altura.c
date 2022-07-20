// Algoritmo criado para definir em quantas anos a Beatriz irmã de Catarina vai demorar para ser mair que ela.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  float altBea = 140, altCat = 145;
  int anos = 0;

  while(altBea <= altCat) {
    altBea += 2.1; // O mesmo que -> altBea = altBea + 2.1.
    altCat += 1.1; // O mesmo que -> altCat = altCat + 1.1.
    anos += 1; // O mesmo que -> anos = anos + 1 ou anos++.
  }
  printf("Passaram-se %d anos para que Beatriz fosse maior que a Catarina. \n", anos);
}