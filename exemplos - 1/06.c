/*
    Condicional IF/ELSE em C
*/

#include <stdio.h>

int main() {
    int idade;

    printf("Olá! Vamos verificar a faixa etária.\n");

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Verifica a faixa etária
    if (idade < 0) {
        printf("Idade negativa ou nula!\n");
    } else if (idade < 18) {
        printf("Você é criança!\n");
    } else if (idade < 60) {
        printf("Você é um adulto!\n");
    } else if (idade < 120) {
        printf("Você é um idoso!\n");
    } else {
        printf("Você é o Drácula!\n");
    }

    return 0;
}

// Rode o programa várias vezes com diferentes valores para ver os resultados.
// Digite os valores: 0, 5, 18, 70, 120, 200.