/*
    Condicional SWITCH em C
*/

#include <stdio.h>

int main() {
    int opcao;

    printf("Bem-vindo(a) ao McMachina! \n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Você escolheu a opção 1 - sorvete\n");
            break;
        case 2:
            printf("Você escolheu a opção 2 - fritas\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
    return 0;
}

