/*
    Operadores Lógicos em C
*/

#include <stdio.h>

int main() {
    int a = 1, b = 0;

    printf("a && b: %d\n", a && b);  // 0
    printf("a || b: %d\n", a || b);  // 1
    printf("!a: %d\n", !a);          // 0
    printf("!b: %d\n", !b);          // 1

    return 0;
}

// 0 = falso, 1 = verdadeiro