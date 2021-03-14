#include <stdio.h>
#include <stdlib.h>

/*
 * Aula 8 --
 * Lendo caracteres com a função 'getc()'
 **/

int main() {
    char letra;
    printf("Digite um caractere:\n");
    letra = getc(stdin);
    printf("O caractere lido foi %c\n", letra);
    return 0;
}
