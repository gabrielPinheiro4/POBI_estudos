#include <stdio.h>


int main() {

    int qntVezesApertar;

    int lampadaA = 0;
    int lampadaB = 0;

    scanf("%d", &qntVezesApertar);

    for (int i = 0; i < qntVezesApertar; i++) {
        int interruptor;

        scanf("%d", &interruptor);

        if (interruptor == 1) {

            if (!lampadaA) {
                lampadaA = 1;

            } else {
                lampadaA = 0;
            }
        }

        if (interruptor == 2) {

            if (!lampadaA) {
                lampadaA = 1;

            } else {
                lampadaA = 0;
            }

            if (!lampadaB) {

                lampadaB = 1;

            } else {
                lampadaB = 0;
            }

        }
    }

    printf("%d\n", lampadaA);
    printf("%d\n", lampadaB);

    return 0;
}