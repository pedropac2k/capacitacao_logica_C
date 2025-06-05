/*
    DESAFIO

    Crie um código do 0 que leia um caracter informado pelo usuário e guarde na variável "opcao".
    Em seguida, utilize a estrutura SWITCH para verificar o valor de "opcao" e exibir uma mensagem correspondente:
    - Se "opcao" for A, exiba "Você escolheu Albert Einstein".
    - Se "opcao" for M, exiba "Você escolheu Marie Curie".
    - Se "opcao" for N, exiba "Você escolheu Nikola Tesla".
    - Para qualquer outro valor, exiba "Opção inválida!".

    Obs.: os caracteres devem ser digitados em maiusculo e estar sempre entre aspas simples, como 'A', 'M' ou 'N'.
    (inclusive na estrutura SWITCH)
    Tente digitar o código manualmente, sem copiar e colar. Em caso de dúvida, consulte os exemplos 07 e 17.
*/
#include <stdio.h>

int main(){
    char opcao;

    printf("Escolha uma das letras(A, M, N): ");
    scanf("%c", &opcao);

    switch (opcao)
    {
    case 'A':
        printf("\nVoce escolheu Albert Einstein");
        break;
    
    case 'M':
        printf("\nVoce escolheu Marie Curie");
        break;

    case 'N':
        printf("Voce escolheu Nikolas Tesla");
        break;
    
    default:
        printf("\nOpcao invalida!");
    }
    
    return 0;
}
