#include <stdio.h>
#include <stdlib.h>

/*
  Aula 10 - Como ler vários valores do teclado com a função 'scanf()'
 */

int main() {
  int num1, num2, num3;
  printf("Digite três números inteiros: ");
  scanf("%d%d%d", &num1, &num2, &num3);
  printf("Valores lidos: %d, %d, %d\n", num1, num2, num3);
  return 0;
}
