#include <stdio.h>


int main() {

    char palavra[1000];

    fgets(palavra, sizeof(palavra), stdin);

    int removeu = 1;

    char ultimo;

    for (int i = 0; i < 1000; i++) {

        if (palavra[i] == '\0') break;

        if (palavra[i+1] == '\0') ultimo = palavra[i];

        if (palavra[i] != '\0' && i > 0) removeu++;
    }

    printf("%c%d%c", palavra[0], removeu, ultimo);

    return 0;
}
