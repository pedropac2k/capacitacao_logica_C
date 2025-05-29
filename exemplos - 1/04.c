/*
    Atribuição composta com operadores aritméticos.
*/

#include <stdio.h>

int main() {
    int x = 10;

    x += 5;
    x -= 3;
    x *= 2;
    x /= 4;
    x %= 5;

    printf("Valor de x: %d\n", x);
    // Experimente colocar esse printf() após cada linha para ver o valor de x.

    return 0;
}

