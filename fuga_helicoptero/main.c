#include <stdio.h>

int main() {

    int pista[16];

    for (int i = 0; i < 16; i++) {
        pista[i] = i;
    }

    int helicoptero, policial, fugitivo, direcao;

    scanf("%d %d %d %d", &helicoptero, &policial, &fugitivo, &direcao);

    int horario = direcao == -1 ? 1 : 0;

    int index = fugitivo;

    while (1) {

        if (index < 0) index = 15;

        if (index > 15) index = 0;

        if (index == helicoptero || index == policial) break;

        index = horario ? index - 1 : index + 1;
    }

    if (index == policial) {
        printf("N\n");
        return 0;
    }

    printf("S\n");

    return 0;
}
