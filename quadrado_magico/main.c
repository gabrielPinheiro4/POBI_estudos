#include <stdio.h>


int main() {

    int qnt;

    scanf("%d", &qnt);

    int matriz[qnt][qnt];

    for (int i = 0; i < qnt; i++) {
        for (int j = 0; j < qnt; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int somaDiag1 = 0;
    int somaDiag2 = 0;

    for (int i = 0; i < qnt; i++) {
        somaDiag1 += matriz[i][i];
    }

    for (int i = 0; i < qnt; i++) {
        somaDiag2 += matriz[i][qnt - 1 - i];
    }

    if (somaDiag1 != somaDiag2) {
        printf("%d\n", -1);
        return 0;
    }

    for (int i = 0; i < qnt; i++) {

        int somaLinha = 0;

        for (int j = 0; j < qnt; j++) {
            somaLinha += matriz[i][j];
        }

        if (somaLinha != somaDiag1 || somaLinha != somaDiag2) {
            printf("%d\n", -1);
            return 0;
        }
    }

    int i = 0;
    int col = 0;
    int somaCol = 0;

    while(col < qnt) {

        somaCol += matriz[i][col];

        if (i == qnt - 1) {

            if (somaCol != somaDiag1 || somaCol != somaDiag2) {
                printf("%d\n", -1);
                return 0;
            }

            i = 0;
            somaCol = 0;
            col++;
        } else {
            i++;
        }
    }

    printf("%d\n", somaDiag1);

    return 0;
}
