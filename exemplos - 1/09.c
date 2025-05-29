/*
    Loop WHILE em C - Contagem Regressiva
*/

#include <stdio.h> 

int main(){
    int i = 0;
    int s;

    printf("Contagem regressiva:\n");
    
    while (i < 5) {
        s = 4 - i;
        printf("%d\n", s);
        i++;
    }

    return 0;
}


