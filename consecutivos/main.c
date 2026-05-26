#include <stdio.h>


int main() {

    int qntValores;

    scanf("%d", &qntValores);

    int lista[qntValores];

    for (int i = 0; i < qntValores; i++) {
        scanf("%d", &lista[i]);
    }

    int novoIndex = 0;

    int maior = 0;

    for (int i = 0; i < qntValores; i = novoIndex) {

        int contador = 1;

        int numProcurar = lista[i];

        if (i + 1 == qntValores) {
            contador++;

            if (contador > maior) maior = contador;

            break;
        }

        int indexProcurar = i+1;

        while(lista[indexProcurar] == numProcurar) {
            contador++;
            indexProcurar++;
        }

        novoIndex = indexProcurar;

        if (contador > maior) maior = contador;
    }

    printf("%d\n", maior);

    return 0;
}