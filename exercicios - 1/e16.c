/*
    Abaixo, temos um vetor de inteiros chamado mao com 5 elementos, que representam os dedos.
    O programa percorre o array e exibe o valor de cada dedo na tela.
    Modifique o valor do polegar e do mindinho para 0, sem alterar a inicialização do vetor.
    Execute o código antes e depois da modificação para compará-lo.
*/

#include <stdio.h>

int main() {
    // Inicialização do vetor
    int mao[5] = {1, 1, 1, 1, 1};

    // Modifique o valor do polegar e do mindinho:
    mao[4] = 0;
    mao[0] = 0;

    

    for (int i = 0; i < 5; i++) {
        if (mao[i] == 1){
            printf("Dedo %d: aberto\n", i + 1);
        } else {
            printf("Dedo %d: fechado\n", i + 1);
        }
    }

    return 0;
}