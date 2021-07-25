#include <stdio.h>
#include <stdlib.h>

/*
  Aula 9 - Como criar variáveis e ler caracteres com a função 'fgetc()'
 */

int main() {
  char letra;
  printf("Digite um caractere: ");
  letra = fgetc(stdin);
  printf("Caractere lido: %c\n", letra);
  return 0;
}
