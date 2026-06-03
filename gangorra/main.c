#include <stdio.h>


int main() {

    int p1, c1, p2, c2;

    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);

    int esquerdo = p1 * c1;

    int direito = p2 * c2;

    if (esquerdo == direito) {
        printf("%d\n", 0);
        return 0;
    }

    if (esquerdo > direito) {
        printf("%d\n", -1);
    } else {
        printf("%d\n", 1);
    }

    return 0;
}