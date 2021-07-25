#include <stdio.h>
#include <stdlib.h>

/*
  Aula 5 - Como criar variáveis e ler números reais com a função 'scanf'
 */

int main() {
  float numero = 3.1415;
  printf("Valor da minha variável é %.4f\n", numero);
  printf("Digite um número real: ");
  scanf("%f", &numero);
  printf("O valor lido: %.1f\n", numero);
  return 0;
}
