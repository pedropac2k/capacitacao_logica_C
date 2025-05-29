/*
    Condicional DO WHILE em C
*/

#include <stdio.h>

int main() {
    int numero;

    // Esse loop prende o usuário até que ele insira um número positivo.
    do {
        printf("Digite um número positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Pegue seus óculos e tente novamente!\n");
        }
    } while (numero <= 0);

    printf("Parabéns, seu número é positivo! :)\n");
    return 0;
}

// Obs.: digite um número negativo ou zero e veja o que acontece.