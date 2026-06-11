#include <stdio.h>

int main() {

    int matriz[3][3];

    int somaDiag1 = 0;
    int somaDiag2 = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        somaDiag1 += matriz[i][i];
    }

    for (int i = 0; i < 3; i++) {
        somaDiag2 += matriz[i][3 - 1 - i];
    }

    if (somaDiag1 != somaDiag2) {
        printf("NAO\n");
        return 0;
    }

    for (int i = 0; i < 3; i++) {

        int somaLinha = 0;

        for (int j = 0; j < 3; j++) {
            somaLinha += matriz[i][j];
        }

        if (somaLinha != somaDiag1 || somaLinha != somaDiag2) {
            printf("NAO\n");
            return 0;
        }
    }

    int col = 0;
    int i = 0;
    int somaCol = 0;

    while (col < 3) {

        somaCol += matriz[i][col];

        if (i == 2) {

            if (somaCol != somaDiag1 || somaCol != somaDiag2) {
                printf("NAO\n");
                return 0;
            }

            i = 0;
            col++;
            somaCol = 0;

        } else {
            i++;
        }

    }

    printf("SIM\n");

    return 0;
}