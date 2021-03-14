#include <stdio.h>
#include <stdlib.h>

/*
 * Aula 7 --
 * Lendo caracteres com a função 'getchar()'
 **/

int main() {
    char letra;
    printf("Digite uma letra:\n");
    letra = getchar();
    printf("Caracter lido: %c\n", letra);
    return 0;
}
