#include <stdio.h>

int main() {

    // Declara e inicializa um vetor de inteiros
    int v[3] = {10, 20, 30};
    int soma;

    // Exibe os valores do vetor (um a um)
    printf("Primeiro numero: %d\n", v[0]);
    printf("Segundo numero: %d\n", v[1]);
    printf("Terceiro numero: %d\n", v[2]);

    // Soma os valores do vetor
    soma = v[0] + v[1] + v[2];
    printf("Soma dos numeros: %d\n", soma);

    return 0;
}