#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o valor do lado A: ");
    if (scanf("%f", &a) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    printf("Digite o valor do lado B: ");
    if (scanf("%f", &b) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    printf("Digite o valor do lado C: ");
    if (scanf("%f", &c) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Não formam um triângulo\n");
    }

    return 0;
}
