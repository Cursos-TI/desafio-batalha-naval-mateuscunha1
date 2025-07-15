#include <stdio.h>

#define TAMANHO 10

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    //navio horizontal (tamanho 4)
    for (int i = 0; i < 4; i++) {
        tabuleiro[1][1 + i] = 3;
    }

    //navio vertical (tamanho 5)
    for (int i = 0; i < 5; i++) {
        tabuleiro[3 + i][8] = 3;
    }

    //navio na diagonal (tamanho 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][2 + i] = 3;
    }

    //navio na diagonal (tamanho 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[4 + i][6 - i] = 3;
    }

    printf("Tabuleiro Batalha Naval\n");
    printf("(0 = Agua, 3 = Navio)\n\n");

    printf("   ");
    for(int j = 0; j < TAMANHO; j++) {
        printf("%d ", j);
    }
    printf("\n");
    printf("   --------------------\n");

    // Imprimir o tabuleiro
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d |", i);
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
