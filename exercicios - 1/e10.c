/*
    Crie um código que leia um número inteiro informado pelo usuário e armazene na variável "numero".
    Logo após, multiplique esse número por seu sucessor e armazene o resultado na variável "resultado".
    Exiba uma mensagem informando o resultado.

    Obs.: não esqueça de utilizar o & na função scanf().
*/

#include <stdio.h>

int main() {
    int numero, resultado;
    printf("Digite um número inteiro: ");

    // Leitura do número informado pelo usuário
    scanf("%d", &numero);

    // Cálculo do resultado
    resultado = numero * (numero + 1);

    // Exibição do resultado
    printf("Resultado: %d", resultado);

    return 0;
}