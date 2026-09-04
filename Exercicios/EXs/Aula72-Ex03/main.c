#include <stdio.h>

int main() {
    int i = 1;
    long soma = 0;

    while (i <= 1000) {
        soma += i;
        i += 2;
    }

    printf("Soma dos numeros impares entre 1 e 1000: %ld\n", soma);

    return 0;
}
