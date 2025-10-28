#include <stdio.h>

int main()
{
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    // -----------TORRE-----------
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= torre; i++) {
        printf("Direita: %d casa\n", i);
    }

    printf("\n");

    // -----------BISPO -----------

    printf("Movimento do BISPO:\n");
    int i = 1;
    while (i <= bispo) {
        printf("Cima e direita: %d casa\n", i);
        i++;
    }

    printf("\n");

    // ----------- RAINHA -----------
    printf("Movimento da RAINHA:\n");
    int j = 1;
    do {
        printf("Esquerda: %d casa\n", j);
        j++;
    } while (j <= rainha);

    printf("\nMovimentos concluídos!\n");

    return 0;
}
