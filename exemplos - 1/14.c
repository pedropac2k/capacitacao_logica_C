/*
    Função simples com múltiplas chamadas baseada em input do usuário.
*/

#include <stdio.h>

int elevarAoCubo(int a) {
    return a * a * a;
}

int main() {

    int a;
    int controle = 1;

    printf("*** Bem-vindo(a)! ***\n");
    printf("Este programa calcula o cubo de um número.\n");

    while (controle != 0) {
        printf("Digite um número: ");
        scanf("%d", &a);
        printf("O cubo de %d é: %d\n", a, elevarAoCubo(a));

        printf("\nDigite 1 para continuar ou 0 para sair: ");
        scanf("%d", &controle);
    }
    
    printf("Obrigado por usar o programa!\n");
    return 0;
}