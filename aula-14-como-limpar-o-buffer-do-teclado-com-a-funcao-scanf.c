#include <stdio.h>
#include <stdlib.h>

/*
  Aula 14 - Como limpar o buffer do teclado com a função 'scanf()'
 */

int main() {
  char a, b;

  printf("Digite uma letra: ");
  scanf("%c", &a);

  printf("Digite outra letra: ");
  scanf(" %c", &b);

  // Espaço entre os '%c' -> comando para o computador desconsiderar o 'ENTER',
  // 'TAB' e o 'ESPAÇO'
  printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

  return 0;
}
