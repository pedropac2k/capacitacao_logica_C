/*
    Semelhante ao exercício anterior, vamos mostrar 3 variáveis no terminal.
    Dessa vez, as variáveis já estão criadas, e você deve completar o código para exibi-las.
    Lembre-se que tipos de variáveis diferentes exigem especificadores (placeholders) diferentes na função printf().
    Execute o código para testar
*/

#include <stdio.h>

int main() {
    int a = 10;
    char b = 'X';
    float pi = 3.14159;

    // Complete conforme o enunciado
    printf("\n%d ", a);
    printf("%c ", b);
    printf("%f", pi);

    return 0;
}