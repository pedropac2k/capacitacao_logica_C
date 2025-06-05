/*
    Complemente o código abaixo de modo que:
    - some as variáveis A e B e salve o resultado na variável C
    - em seguida, multiplique C por D e salve o resultado na variável E
    ao final, execute o programa, que exibirá o resultado de E e
    e te informará se o valor obtido está correto
*/

#include <stdio.h>

int main() {
    int A = 5, B = 20, C = 0;
    float D = 2.2, E = 0;

    // Salvar em C o resultado da soma de A e B
    C = A + B;

    // Salvar em E o resultado da multiplicação de C por D
    E = C * D;

    // Código de validação
    if (E == 55.0) printf("Parabéns! O valor de E é %.2f e está correto!\n", E);
    else printf("O valor de E é %.2f e está incorreto! Tente novamente!\n", E);
    
    return 0;
}