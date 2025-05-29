/*
    O código abaixo importa a biblioteca stdlib.h para usar a função system().
    Essa função permite abrir URLs no navegador padrão do sistema operacional, 
    através do parâmetro start (windows) ou xdg-open (linux), seguido pelo link.
    O código exibe 5 opções de sites e abre a escolhida no navegador.

    Analise o código para entender como funciona, rode várias vezes e acesse todas as opções.
    Aproveite para seguir e curtir o Ex nas redes. ;D
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    printf("Escolha uma opção (1 a 5):\n");
    printf("1 - Facebook\n");
    printf("2 - Instagram\n");
    printf("3 - TikTok\n");
    printf("4 - LinkedIn\n");
    printf("5 - Librex\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            system("start https://www.facebook.com/ExMachina.UNIFEI/");
            break;
        case 2:
            system("start https://www.instagram.com/exmachina.unifei/");
            break;
        case 3:
            system("start https://www.tiktok.com/@exmachina.unifei");
            break;
        case 4:
            system("start https://www.linkedin.com/company/ex-machina-unifei/?originalSubdomain=br");
            break;
        case 5:
            system("start https://librex-lemon.vercel.app/home");
            break;
        default:
            printf("Opção inválida. Tente um número de 1 a 5.\n");
    }

    return 0;
}
