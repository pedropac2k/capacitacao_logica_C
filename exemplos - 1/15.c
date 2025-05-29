/*
    Cabeçalho de Funções em C
*/

#include <stdio.h>

// Cabeçalho da função
float somar_metade(float a); 

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    // Chamada da função
    float resultado = somar_metade(numero);
    
    printf("A metade de %.2f é: %.2f\n", numero, resultado);

    return 0;
}

// Implementação da função
float somar_metade(float a) {
    return a + (a / 2); // Soma metade ao número
    //outra opção seria: 
    //return a * 1.5; // Multiplica por 1.5
}