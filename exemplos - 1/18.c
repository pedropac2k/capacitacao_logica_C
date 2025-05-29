/*
    Uso do Scanf com strings e lógica
*/
#include <stdio.h>

int main() {
    // Declaração de múltiplas variáveis por linha (mesmo tipo)
    int ano, idade; 
    char nome[50];
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);

    printf("Digite seu 1º nome: ");
    scanf("%s", nome);

    idade = 2025 - ano; // Cálculo da idade

    printf("Esse ano você faz %d anos, %s!", idade, nome);

    return 0;
}