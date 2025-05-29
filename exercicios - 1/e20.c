/*
    O código a seguir é um jogo simples de adivinhação de números.
    O usuário deve adivinhar um número secreto gerado aleatoriamente entre 1 e 50.
    O programa informa se o palpite é muito baixo, muito alto ou correto,
    e conta o número de tentativas até que o usuário acerte.

    Observe que, quando o bloco de código após o "if" é uma linha única,
    não é necessário usar chaves {}. O mesmo vale para o "else".

    Complete o código com as condições corretas para os IFs.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, palpite, tentativas = 0;

    srand(time(NULL));
    secreto = rand() % 50 + 1;

    do {
        printf("Palpite um número (de 1-50): ");
        // Complete o scanf
        scanf( ??? );
        tentativas++;

        // Substitua os "???" dos IFs pelas comparações corretas
        if ( ??? )
            printf("Muito baixo!\n");
        else if ( ??? )
            printf("Muito alto!\n");
        else
            // Escreva uma mensagem de parabéns que exiba o número de tentativas
            printf( ??? );

    } while (palpite != secreto);

    return 0;
}