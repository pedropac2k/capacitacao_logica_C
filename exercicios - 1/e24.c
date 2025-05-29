/*
    Abaixo, temos uma função que calcula o fatorial de um número inteiro positivo N, através de recursão.
    Você não precisa entender o funcionamento da função. Apenas use-a no código principal para calcular a combinação 
    de N elementos tomados K a K, através da fórmula:
    C = N! / (K! * (N - K)!)
    Onde N! é o fatorial de N.
    Exemplo: se N = 5, então C(5, 3) = 5! / (3! * (5 - 3)!) = 5! / (3! * 2!) = 10

    O código já garante que o usuário digite um número N maior que K, que é 3.
    Calcule a combinação e imprima o resultado.
*/
#include <stdio.h>

int fatorial(int n) {
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}

int main() {
    int N = 0, K = 3;
    int Comb;

    do{
        printf("Digite um número inteiro positivo N: ");
        scanf("%d", &N);

        if (N <= K) {
            printf("N deve ser maior que %d.\n", K);
        }
    } while (N <= K);
    
    // Calcula a combinação (Comb)

    

    return 0;
}