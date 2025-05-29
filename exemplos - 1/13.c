/*
    Função simples em C
*/

#include <stdio.h>

int somar(int a, int b) {
    return a + b;
}

int main() {
    int resultado;

    //imprimindo diretamente o resultado da função:
    printf("Soma: %d\n", somar(2, 3));

    //armazenando o resultado da função em uma variável:
    resultado = somar(5, 7);
    //imprimindo o resultado armazenado:
    printf("Soma: %d\n", resultado);

    return 0;
}