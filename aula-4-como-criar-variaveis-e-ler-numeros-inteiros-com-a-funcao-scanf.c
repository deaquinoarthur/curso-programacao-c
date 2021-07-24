#include<stdio.h>
#include<stdlib.h>

/*
  Aula 4 - Como criar variáveis se ler números inteiros com a função 'scanf'
 */

int main() {
  int valor, valor2; // criei uma variável para guardar um valor do tipo inteiro
  valor = 50; // atribuição -> atribuir um valor a uma variável
  printf("Valor da minha variável: %d\n", valor);
  printf("Digite um valor inteiro: ");
  printf("\n--------------------------\n");
  scanf("%d", &valor);
  printf("Digite um segundo valor inteiro: ");
  scanf("%d", &valor2);
  printf("Valor da minha primeira variável: %d\nValor da minha segunda variável: %d\n", valor, valor2);
  return 0;
}
