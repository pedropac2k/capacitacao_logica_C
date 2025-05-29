/*
    Leitura de dados e armazenamento em um vetor.
    Impressão de dados contidos no vetor.
    Soma dos números de um vetor.
*/


#include <stdio.h>

int main() {
    int numeros[5];  // declara um vetor de 5 posições

    // Força o usuário a inserir 5 números
    printf("Por favor, digite 5 inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("%dº valor: ", i + 1);
        scanf("%d", &numeros[i]);  // Guarda cada número do vetor
    }

    // Imprime os números armazenados no vetor
    printf("\nSeus números são:\n");
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    // Calcula soma dos números do vetor
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];  // Soma cada número do vetor, conforme seu índice i
    }
    printf("A soma dos números é: %d\n", soma);

    return 0;
}