/*
    Uso do Scanf
*/
#include <stdio.h>

int main() {
    int idade;
    float altura;
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Você tem %d anos e %.2f metros de altura.\n", idade, altura);
    return 0;
}