/*
    Complete o código para que imprima os 10 primeiros números pares usando um loop.
*/

#include <stdio.h>

int main() {
    int i;

    printf("Os 10 primeiros números pares são:\n");
    
    // Implemente a lógica:
    
    i=0;
    int j=0;


    printf("{ ");
    while(j < 10){
        if(i % 2 == 0){
            j++;
            printf("%d ", i);
        }
        i++;
    }
    printf("}");

    return 0;
}