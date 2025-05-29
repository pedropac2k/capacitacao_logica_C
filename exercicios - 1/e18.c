/*
    O programa abaixo faz a leitura de 5 inteiros e os armazena em um vetor.
    Em seguida, imprime os dados contidos no vetor e soma todos.
    Os comentário foram usados apenas para explicar o que cada parte do código faz.
    Execute esse programa, teste, depois modifique-o para que leia 10 inteiros.
    A funcionalidade deve permanecer a mesma.
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