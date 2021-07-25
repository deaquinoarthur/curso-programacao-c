#include <stdio.h>
#include <stdlib.h>

/*
  Aula 11 - Como ler sexo, idade, peso e altura do usuário
 */

int main() {
  char sexo;
  int idade;
  float peso, altura;
  printf("Digite sexo ( m|M para Masculino ou f|F para Feminino ), idade, peso e altura:\n");
  scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
  printf("Sexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);
  return 0;
}
