#include <stdio.h>
#include <stdlib.h>

/*
  Aula 3 - Não use a função 'system("pause")'
 */

int main() {
  printf("\n--------------------------------------------------\n");
  printf("Menu: 1 - Logar     2 - Cadastrar    3 - Imprimir");
  printf("\n--------------------------------------------------\n");

  // system("pause") -> função específica para windows

  // usando funcionalidades nativas da linguagem C pora
  // simular o comportamento da função system("pause")
  printf("\nPressione qualquer tecla para finalizar.");

  getchar();

  return 0;
}
