#include <stdio.h>
#include <stdlib.h>

/*
 * Aula 4 --
 * Lendo números inteiros
 **/

int main() {
    int valor, valor2; // criamos variáveis para guardar valores do tipo inteiro

    // atribuição -> atribuir um valor a uma variável
    // nesse caso estamos atribuindo 50 ao espaço da memória 
    // chamado 'valor'.
    valor = 50;

    printf("\nO valor da minha variável é: %d\n", valor);

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &valor);

    printf("\nDigite um segundo valor inteiro:\n");
    scanf("%d", &valor2);

    printf("\nPrimeiro valor é: %d\nSegundo valor é: %d\n", valor, valor2);

    return 0;
}
