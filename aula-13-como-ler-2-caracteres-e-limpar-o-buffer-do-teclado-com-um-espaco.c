#include <stdio.h>
#include <stdlib.h>

/*
  Aula 13 - Como ler 2 caracteres e limpar o buffer do teclado com um espaço
 */

int main() {
  char a, b;
  printf("Digite duas letras: ");
  scanf("%c %c", &a, &b);
  // O espaço antes da segunda máscara '%c' é um comando para o computador
  // desconsiderar o ENTER, TAB e o ESPAÇO
  //
  // Alguns programadores aconselham o uso de 'fflush()' para fazer a limpeza do
  // teclado. É altamente recomendado que você não utilize essa função, porque
  // essa função só funciona no windows, e mesmo que o seu programa rode só no
  // Windows, ele não funciona em todos os casos.
  printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);
  return 0;
}
