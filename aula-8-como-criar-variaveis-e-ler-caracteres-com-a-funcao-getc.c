#include <stdio.h>
#include <stdlib.h>

/*
  Aula 8 - Como criar varáveis e ler caracteres com a função 'getc()'
 */

int main() {
  char letra;
  printf("Digite um caractere: ");
  // a função 'getc()' pode ser utilizada também para
  // ler de outras fontes, como um arquivo de texto
  // por exemplo.
  letra = getc(stdin);
  printf("O caracter lido foi: %c\n", letra);
  return 0;
}
