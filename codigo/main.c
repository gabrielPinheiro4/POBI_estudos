#include <stdio.h>

int main() {

    int qnt;

    scanf("%d", &qnt);

    int numLista[qnt];

    for (int i = 0; i < qnt; i++) {
        scanf("%d", &numLista[i]);
    }

    int cont = 0;

    for (int i = 0; i < qnt - 2; i++) {
        
        if (numLista[i] == 1 && numLista[i+1] == 0 && numLista[i+2] == 0) {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}