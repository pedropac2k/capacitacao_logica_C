/*
    Loop FOR em C - com Caracteres
*/

#include <stdio.h>

int main() {
    int c = 'A';
    int i;

    printf("Incremento progressivo com FOR - Caracteres:\n");

    for (i = 0; i < 10; i++) {
        printf("%c\n", c);
        c++;
    }

    return 0;
}