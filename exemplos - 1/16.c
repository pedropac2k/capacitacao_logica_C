/*
    Uso de Printf
*/

#include <stdio.h>

int main() {
    // criação das variáveis
    int idade = 20;
    float altura = 1.75;
    char inicial = 'J';

    // Mensagem sem variáveis (só texto)
    printf("Descrição dos dados:\n");

    // Uma variável por mensagem
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Inicial do nome: %c\n\n", inicial);

    // Mensagem sem variáveis (só texto)
    printf("*** Valor de cada variável ***\n");

    // Múltiplas variáveis na mensagem - separadas por vírgulas
    printf("idade: %d, altura: %.2f, inicial: %c\n", idade, altura, inicial);

    return 0;
}