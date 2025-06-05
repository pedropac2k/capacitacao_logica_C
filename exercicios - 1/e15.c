/*
    O seguinte programa calcula a área de um triângulo.
    Complete-o para que ele funcione corretamente e imprima o resultado com uma casa decimal.
    Ao final, crie um IF/ELSE para verificar se a área é maior que 30:
    caso sim - exiba "Triangulo grande", 
    caso contrário - exiba "Triangulo pequeno".
*/

#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    // Calcule a área do triângulo
    area = base * altura;

    // Exiba o resultado formatado com duas casas decimais
    printf("%.2f", area);

    // IF/ELSE para verificar se a área é maior que 30
    if(area > 30)
        printf("\nTriangulo grande");
    else
        printf("\nTriangulo pequeno");

    return 0;
}