/*
    Uso do Scanf
*/
#include <stdio.h>

int main() {
    int idade;
    float altura;
    char inicial;
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite sua inicial: ");
    scanf("%c", &inicial);

    printf("Você tem %d anos e %.2f metros de altura.\n", idade, altura);
    printf("Sua inicial é: %c\n", inicial);
    return 0;
}