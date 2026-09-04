#include <stdio.h>

int main() {
    int x, y, contador = 0;

    printf("Digite X e Y: ");
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i++) {
        printf("%d ", i);
        contador++;

        if (contador == x) {
            printf("\n");
            contador = 0;
        }
    }

    return 0;
}
