#include <stdio.h>
#include <stdlib.h>

/*
  Aula 2 - Imprimindo informações com a função 'printf'
  e caractere de escape

  \n     -> Caractere de escape para saltar uma linha
  printf -> Função de saída
 */


int main() {
  printf("Olá, seja bem vindo.\n");
  printf("Como você se chama?\n");
  printf("Ronaldo\nSocorro\nFany\nArthur\n");
  printf("\n--------------------------------------------------\n");
  printf("Menu: 1 - Logar     2 - Cadastrar    3 - Imprimir");
  printf("\n--------------------------------------------------\n");

  // a função printf retorna um número representando
  // a quantidade de valores que ela está imprimindo
  // na tela
  printf("Valor retornado: %d\n", printf("\nHello world!\n"));
  return 0;
}
