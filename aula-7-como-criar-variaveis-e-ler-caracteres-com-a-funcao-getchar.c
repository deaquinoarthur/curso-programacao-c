#include <stdio.h>
#include <stdlib.h>

/*
  Aula 7 - Como criar variáveis e ler caracteres com a função 'getchar()'
 */

int main() {
  char letra;
  printf("Digite uma letra: ");
  letra = getchar();
  printf("Caracter lido: %c\n", letra);
  return 0;
}
