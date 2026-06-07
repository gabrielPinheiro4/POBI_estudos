#include <stdio.h>

int main() {

    int n1, n2, n3;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    int lista[] = {n1, n2, n3};

    int ordenado = 0;

    while (!ordenado) {
        ordenado = 1;

        for (int i = 0; i < 2; i++) {

            if (lista[i] > lista[i+1]) {

                int prox = lista[i+1];

                lista[i+1] = lista[i];

                lista[i] = prox;

                ordenado = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (lista[i] == n1) printf("%d\n", 1);
        if (lista[i] == n2) printf("%d\n", 2);
        if (lista[i] == n3) printf("%d\n", 3);
    }

    return 0;
}