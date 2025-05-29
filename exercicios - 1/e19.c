/*
    DESAFIO

    O código abaixo é idêntico ao do exercício anterior.
    Modifique-o, dessa vez, para que some cada numero de índice par 
    no vetor e subtraia cada número de índice ímpar.
    Teste seu programa.
*/


#include <stdio.h>

int main() {
    int v[5];  // declara um vetor de 5 posições
    int soma, i;

    printf("Por favor, digite 5 inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("%dº valor: ", i + 1);
        scanf("%d", &v[i]);  // Guarda cada número do vetor
    }

    // Imprime os números armazenados no vetor
    printf("\nSeus números são:\n");
    for (i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    // Calcula soma dos números do vetor
    soma = 0;
    for (i = 0; i < 5; i++) {
        soma += v[i];  // Soma cada número do vetor, conforme seu índice i
    }
    printf("A soma dos números é: %d\n", soma);

    return 0;
}