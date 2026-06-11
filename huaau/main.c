#include <stdio.h>
#include <string.h>

int ehVogal (char letra) {

    if (
        letra == 'a'
        || letra == 'e'
        || letra == 'i'
        || letra == 'o'
        || letra == 'u'
    )
    {
        return 1;
    }

    return 0;
}

int main() {

    char risada[50];

    scanf(" %s", risada);

    int lenRisada = strlen(risada);

    char risadaVogal[lenRisada];
    char risadaVogalInverso[lenRisada];

    int index = 0;

    for (int i = 0; i < lenRisada; i++) {

        if (ehVogal(risada[i])) {
            risadaVogal[index] = risada[i];
            index++;
        }
    }

    risadaVogal[index+1] = '\0';

    index = 0;

    for (int i = lenRisada-1; i > -1; i--) {

        if (ehVogal(risada[i])) {
            risadaVogalInverso[index] = risada[i];
            index++;
        }
    }

    risadaVogalInverso[index+1] = '\0';

    for (int i = 0; i < index; i++) {
        if(risadaVogal[i] != risadaVogalInverso[i]) {
            printf("N\n");
            return 0;
        }
    }

    printf("S\n");

    return 0;
}
