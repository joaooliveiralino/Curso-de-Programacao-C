#include <stdio.h>

int main() {
    int valor, positivos = 0, negativos = 0;

    do {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    } while (valor != 0);

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);

    return 0;
}
