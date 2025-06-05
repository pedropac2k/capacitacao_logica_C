/*
    DESAFIO:

    Crie um código que solicite um número N ao usuário
    e calcule a some dos N primeiros números naturais.

    exemplo: se o usuário digitar 5, o programa deve calcular 1 + 2 + 3 + 4 + 5 = 15
    Não utilize recursão, apenas loops.
*/

#include <stdio.h>

int main(){
    int x;
    int fat=0;

    printf("Digite um numero qualquer:");
    scanf("%d", &x);

    for(int i=x; i>0; i--){
        fat += i;
    }
    
    printf("\nResultado: %d\n", fat);
}