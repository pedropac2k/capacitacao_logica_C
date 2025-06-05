/*
    O seguinte código usa uma função que calcula a média de 4 notas fornecidas pelo usuário.
    Faça o que se pede nos comentários.
*/

#include <stdio.h>

float tiraMedia(float notas[], int tam) {
    float soma = 0;
    for (int i = 0; i < tam; i++)
        soma += notas[i];
    return soma / tam;
}

int main() {
    float notas[4];
    float media;
    printf("Digite 4 notas:\n");
    for (int i = 0; i < 4; i++)
        scanf("%f", &notas[i]);

    // Calcule a media usando a função tiraMedia:
    media = tiraMedia(notas, 4);

    // Imprima "Aprovado!" se a média for maior ou igual a 5.95 ou "Reprovado!" se for menor que 5.95:
    if(media >= 5.95)
        printf("Aprovado");
    else
        printf("Reprovado");

    return 0;
}