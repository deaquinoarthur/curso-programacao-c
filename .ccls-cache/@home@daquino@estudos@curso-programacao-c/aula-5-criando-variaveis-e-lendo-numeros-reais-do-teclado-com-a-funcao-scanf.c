# include <stdio.h>
# include <stdlib.h>

/*
 * Aula 5 --
 * Lendo números reais
 **/

int main() {
    // O tipo 'float' armazena números reais, números com vírgulas
    float numero = 3.1415;
    // '%.2f' -> '.' = formatar a partir da casa decimal | '2' -> número de
    // casas a serem exibidas | 'f' máscara para o tipo 'float'
    printf("O valor da minha variável é: %.4f\n", numero);

    printf("\nDigite um número real:\n");
    scanf("%f", &numero);

    printf("Valor lido: %.2f\n", numero);
}
