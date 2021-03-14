#include <stdio.h>
#include <stdlib.h>

/*
 * Aula 9 --
 * Lendo caracteres com a função 'fgetc()'
 **/

int main() {
    char letra;
    printf("Digite um caractere: ");
    letra = fgetc(stdin);
    printf("O caractere lido é: %c\n", letra);
    return 0;
}
