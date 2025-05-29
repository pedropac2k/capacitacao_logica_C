/*
    DESAFIO

    O código abaixo recebe um número digitado pelo usuário e guarda seu valor na variável D. 
    Em seguida, verifica se o número é par ou ímpar e imprime uma mensagem informativa.
    
    Porém, no lugar da condição de verificação, há um "???",

    Determine quais os comparadores necessários para verificar se número é par ou ímpar, 
    substituindo o "???" pela expressão comparativa que completa o código abaixo corretamente.

    Teste seu programa executando-o e digitando valores diferentes.
*/

#include <stdio.h>

int main() {
    int D;

    printf("Digite um número inteiro: ");
    scanf("%d", &D);

    // Substitua ??? por uma comparação que verifique se o número é par ou ímpar
    if ( ??? ) {
        printf("O número %d é PAR.\n", D);
    } else {
        printf("O número %d é ÍMPAR.\n", D);
    }

    return 0;
}