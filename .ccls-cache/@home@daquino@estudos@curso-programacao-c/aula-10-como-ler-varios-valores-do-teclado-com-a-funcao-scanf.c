#include <stdio.h>
#include <stdlib.h>

/*
   Aula 10
   Lendo vários valores
*/

int main() {
  int num1, num2, num3;
  printf("Digite três números:\n");
  scanf("%d%d%d", &num1, &num2, &num3);
  printf("Valores lidos são: %d, %d, %d\n", num1, num2, num3);
  return 0;
}
