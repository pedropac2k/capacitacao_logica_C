/*
    Operadores Relacionais em C
*/

#include <stdio.h>

int main() {
    int x = 5, y = 10;

    printf("x == y: %d\n", x == y);  // 0
    printf("x != y: %d\n", x != y);  // 1
    printf("x < y: %d\n", x < y);    // 1
    printf("x > y: %d\n", x > y);    // 0
    printf("x <= y: %d\n", x <= y);  // 1
    printf("x >= y: %d\n", x >= y);  // 0

    return 0;
}

// 0 = falso, 1 = verdadeiro