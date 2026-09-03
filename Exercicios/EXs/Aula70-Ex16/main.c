#include <stdio.h>

int main() {
    int numero = 1;
    int divisivel;

    do {
        numero++;
        divisivel = 1;

        for (int i = 1; i <= 10; i++) {
            if (numero % i != 0) {
                divisivel = 0;
                break;
            }
        }
    } while (!divisivel);

    printf("Menor numero divisivel por todos os numeros entre 1 e 10: %d\n", numero);

    return 0;
}
