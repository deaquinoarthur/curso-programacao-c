#include <stdio.h>
#include <stdlib.h>

/*
  Aula 6 - Como criar variáveis e ler caracteres com a função 'scanf'
 */

int main() {
  char temFilhos = 'n';
  printf("O valor da variável tem filhos: %c\n", temFilhos);
  printf("Você tem filhos? Responda com (s/S para 'Sim', ou n/N para 'Não') ");
  scanf("%c", &temFilhos);
  if(temFilhos == 's' || temFilhos == 'S') {
    printf("O cliente tem filhos\n");
  } else {
    printf("O cliente não tem filhos\n");
  }
  return 0;
}
