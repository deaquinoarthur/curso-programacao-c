#include <stdio.h>
#include <stdlib.h>

/*
  Aula 12 - Problema ao ler caracter com a linguagem C
 */

int main() {
  char sexo;
  int idade;
  float peso, altura;

  printf("Digite idade, peso, altura e o sexo (f|F para Feminino ou m|M para Masculino):\n");
  scanf("%d%f%f%c", &idade, &peso, &altura, &sexo);
  // Existe uma região especial da memória chamada buffer do teclado,
  // e tudo que é digitado no teclado fica armezenado nessa região.
  //
  // Buffer do teclado: 38\n71.2\n1.83\nM
  //
  // O que acontece é o seguinte:
  // 
  // (scanf): tem algum inteiro no buffer do teclado para 'idade'?
  // - sim: 38 é armazenado na variável idade
  //
  // (scanf): tem algum número real no buffer do teclado para 'peso'?
  // - ele checa se '\n' é um número real. Não é, deleta '\n' e armazena o
  // próximo número real na buffer do teclado, que seria '71.2'
  //
  // (scanf): existe outro número inteiro no buffer do teclado para 'altura'?
  // - ele checa se '\n' é um número real. Não é, deleta '\n' e armazena o
  // próximo número real na buffer do teclado, que seria '1.83'
  //
  // (scanf): existe um caracter no buffer do teclado para 'sexo'?
  // - Nós temos '\nM' agora, como '\n' é um caracter que representa a quebra de
  // linha, scanf armzena '\n' em 'sexo' e 'M' é ignorado
  printf("Idade: %d\nPeso: %.2f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);

  // Então, para consertar esse problema, nós inserimos um espaço antes da
  // máscara '%c', e ficaria assim '%d%f%f %c'
  printf("Digite idade, peso, altura e o sexo (f|F para Feminino ou m|M para Masculino):\n");
  scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);
  printf("Idade: %d\nPeso: %.2f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);
  return 0;
}
