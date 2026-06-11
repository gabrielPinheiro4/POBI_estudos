#include <stdio.h>

int main() {

    int qnt;

    scanf("%d", &qnt);

    int fita[qnt];

    for (int i = 0; i < qnt; i++) {
        scanf("%d", &fita[i]);
    }

    for (int i = 0; i < qnt; i++) {

        if (fita[i] == -1) {

            if (i < qnt -1) {

                for (int j = i + 1; j < qnt; j++) {

                    if (fita[j] == 0) {
                        fita[i] = j - i < 9 ? j - i : 9;
                        break;
                    }
                }
            }

            if (i > 0) {

                for (int j = i - 1; j > -1; j--) {

                    if (fita[j] == 0 && (fita[i] > i - j || fita[i] == -1)) {
                        fita[i] = i - j < 9 ? i - j : 9;
                        break;
                    }
                }
            }
        }
        
    }

    for (int i = 0; i < qnt; i++) {
        printf("%d ", fita[i]);
    }

    return 0;
}
