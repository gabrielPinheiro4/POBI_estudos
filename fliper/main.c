#include <stdio.h>

int main() {

    int P, R;

    scanf("%d %d", &P, &R);

    if (P == 0) {
        printf("%c\n", 'C');
        return 0;
    }

    if (P == 1 && R == 0) {
        printf("%c\n", 'B');
        return 0;
    }

    printf("%c\n", 'A');

    return 0;
}
