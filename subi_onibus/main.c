#include <stdio.h>


int main() {

    char palavra[50];

    fgets(palavra, sizeof(palavra), stdin);

    int qntCaracteres;

    for (int i = 0; i < 50; i++) {

        if (palavra[i+1] == '\0') {

            qntCaracteres = i;
            break;
        }
    }

    char inverso[qntCaracteres];

    int indexInverso = qntCaracteres - 1;

    for (int i = 0; i < qntCaracteres; i++) {

        inverso[i] = palavra[indexInverso];

        indexInverso--;
    }

    int igual = 1;

    for (int i = 0; i < qntCaracteres; i++) {

        if (palavra[i] != inverso[i]) igual = 0;
    }

    printf(igual == 1 ? "eh palindromo\n" : "nao eh palindromo\n");

    return 0;
}
