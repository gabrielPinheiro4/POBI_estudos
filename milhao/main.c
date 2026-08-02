#include <stdio.h>

int main() {

    int qntDias;

    scanf("%d", &qntDias);

    int lista[qntDias];

    for (int i = 0; i < qntDias; i++) {
        scanf("%d", &lista[i]);
    }

    int diasTotal = 0;
    int total = 0;

    int i = 0;

    while (total < 1000000) {
        total += lista[i];
        i++;
        diasTotal++;
    }

    printf("%d\n", diasTotal);

    return 0;
}
