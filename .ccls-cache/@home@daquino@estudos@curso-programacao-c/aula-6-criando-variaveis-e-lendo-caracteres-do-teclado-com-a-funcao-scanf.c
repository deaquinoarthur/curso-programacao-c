#include <stdio.h>
#include <stdlib.h>

/*
 * Aula 6 --
 * Lendo caracteres
 **/

int main() {
    char sexo = 'M';
    printf("O valor da variável sexo é: %c\n", sexo);

    printf("Digite o seu sexo: (M/m = Masculino | F/f = Feminino)\n");
    scanf("%c", &sexo);

    printf("O valor da variável sexo é: %c\n", sexo);
}
